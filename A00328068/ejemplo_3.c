#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
int main()
{int fd,leidos;
char dato;

fd=open("prueba_escritura",O_RDONLY);
while((leidos=read(fd,&dato,sizeof(char)))>0){ 
printf("letra leida %c\n",dato);}
close(fd);
printf("fin\n");
}
