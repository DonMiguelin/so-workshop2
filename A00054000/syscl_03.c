#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int);

int main () {
   signal(SIGINT, sighandler);

   while(1) {
      printf("Este proceso se pausara 1 segundo... \n");
      printf("Para pausar el proceso presione CTRL + C... \n");
      sleep(1);
   }
   return(0);
}

void sighandler(int signum) {
   printf("Se acaba de capturar la señal (%d) que termino el proceso \n", signum);
   exit(1);
}  
