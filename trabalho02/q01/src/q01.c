#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void notification(){
    printf("\nThe parent process received the signal !\n");
}

int main() {

    signal(SIGALRM,notification);

    pid_t child_pid;

    child_pid = fork();

    if(child_pid == 0){
        printf("The child process is running!\n");
        sleep(5);
        kill(getppid(), SIGALRM);
    }else{
        pause();
    }

    return 0;
}
