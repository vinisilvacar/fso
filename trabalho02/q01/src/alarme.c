/*
 * Simulação de alarme de relógio.
 * A aplicação deverá disparar um processo filho que, logo após sua execução, dorme
 * por 5 segundos antes de enviar um SIGALRM ao processo pai. O processo pai, por sua vez,
 * prepara-se para receber o sinal do tipo SIGALRM, aguarda por esse sinal; quando o sinal é
 * recebido, imprime na tela a ocorrência do evento e, em seguida, se encerra. Faça o uso da
 * função pause(void) para aguardar pelo sinal enviado pelo processo filho.
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

//Notificação de recebimento de sinal do processo pai.
void notification(){
    printf("\nThe parent process received the signal !\n");
}

int main() {

    //SIGALRM - Manda o sinal de alarme a um processo.
    //Associa a notificação ao SIGALRM
    signal(SIGALRM,notification);

    //O pid_t é um tipo de dados do tipo inteiro que é capaz de representar um ID de processo.
    pid_t child_pid;

    child_pid = fork();

    //Condição executada no processo filho.
    if(child_pid == 0) {
        printf("The child process is running!\n");

	//Adormece durante 5 segundos
        sleep(5);

	//Envia um sinal para o processo filho.
        kill(getppid(), SIGALRM);
    } else {
        //Suspende o processo corrente até a chegada de um sinal, não gastando tempo de CPU.
        pause();
    }

    return 0;
}
