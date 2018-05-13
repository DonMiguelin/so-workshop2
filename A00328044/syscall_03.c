#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
int main()
{
printf("Hola borraremos el archivo \n");
rmdir("/tmp/so-workshop2/A00328044/SistemasOperativos");
printf("Se borro \n");

}

