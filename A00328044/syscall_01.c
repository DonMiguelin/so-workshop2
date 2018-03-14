#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
printf("Hola, crearemos un archivo \n");
mkdir("/tmp/so-workshop2/A00328044/SistemasOperativos",0700);
printf("Fue creado el directorio SistemasOperativos \n");

}
