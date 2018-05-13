#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int main()
{
 int i,fd;
printf("creando archivo.......\n");
 fd=creat("prueba",0600);
close(fd);
printf("archivo creado...\n");

 

}
