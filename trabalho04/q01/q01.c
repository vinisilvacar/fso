#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

void substring(const char string[], char subString[], int inicio, int tamanho) {
   int cont = 0;

   while (cont < tamanho) {
      subString[cont] = string[inicio+cont-1];
      cont++;
   }

   subString[cont] = '\0';
}

int main(int argc, char const *argv[]) {

    FILE *fp = NULL;
    struct stat info;
    struct tm tempo = {0};
    time_t result = 0;
    char string[12]; // String temporário que armazenara os dados vindos da linha de comando.
    const int length = 12;    
    fp = fopen(argv[1], "r+");

    lstat(argv[1], &info); //Recupera as informações do arquivo para a struct stat.

    printf("\n======DADOS REFERENTES AO ARQUIVO=====\n");
    printf("Ultimo acesso: %s", ctime(&info.st_atime));
    printf("Ultima modificação: %s", ctime(&info.st_mtime));
    printf("Ultimo status: %s", ctime(&info.st_ctime));
    printf("========================================\n");

    //Quebrando substring de entrada com os dados de tempo e colocando na struct tempo.
    substring(argv[2], string, 1, 4);
    tempo.tm_year = atoi(string) - 1900; // Anos a partir de 1900

    substring(argv[2], string, 5, 2);
    tempo.tm_mon = atoi(string) - 1; //O mês conta de 1 até 12, mas computacionalmente , precisamos de 0 até 11;

    substring(argv[2], string, 7, 2);
    tempo.tm_mday = atoi(string);

    substring(argv[2], string, 9, 2);
    tempo.tm_hour = atoi(string)-1;

    substring(argv[2], string, 11, 2);
    tempo.tm_min = atoi(string);


    result = mktime(&tempo); // Transformando struct em variavel time_t.

    //Setando valor da variavel time_t no arquivo.
    info.st_ctime = result;
    info.st_mtime = result;
    info.st_atime = result;

    printf("\n======DADOS EDITADOS REFERENTES AO ARQUIVO=====\n");
    printf("Ultimo acesso: %s", ctime(&info.st_atime));
    printf("Ultima modificação: %s", ctime(&info.st_mtime));
    printf("Ultimo status: %s", ctime(&info.st_ctime));
    printf("=================================================\n");

    return 0;
}
