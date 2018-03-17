#include<stdio.h>
#include <sys/types.h>
#include <signal.h>
int main()
{
  int p;
  p = fork();
  if (p == 0)
  {
    printf("Hola, soy el proceso hijo con ID %d \n", getpid());
    printf("Voy a terminar el proceso hijo con la llamada al sistema 'kill' \n");
    kill(getpid(), SIGINT);
  }
  else
  {
    printf("Hola, soy el proceso padre con ID %d \n", getpid());
    printf("Voy a terminar el proceso padre con la llamada al sistema 'kill' \n");
    kill(getpid(), SIGINT);
  }
}  
