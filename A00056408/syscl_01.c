#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){

	printf("----INICIA SYSCL_01----\n");
	open("prueba.txt",O_CREAT,S_IWUSR); //Se crea un arhivo que tenga permisos de escritura para el usuario
	printf("La creación del archivo se realizó correctamente \n");
        rename("prueba.txt","renombrado.txt"); //En este comando se renombra el archivo
	printf("El archivo se renombró correctamente \n");
	unlink("renombrado.txt");//En este comando se elimina el archivo renombrado
	printf("El archvo se eliminó correcamente \n");
	printf("----FIN SYSCL_01----\n");
	return 0;
}

