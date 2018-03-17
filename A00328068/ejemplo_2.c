#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int main()
{
int fd,escritos;
printf("creando archivo.....\n");
fd=creat("prueba_escritura",0600);
printf("archivo creado...\n");
printf("escribiendo en el archivo..\n");
escritos=write(fd,"hola, esto fue lo que escribi para la prueba\0",45);
close(fd);
printf("fin\n");}

