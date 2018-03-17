#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(){
	
	struct stat st = {0};
	if(stat("/root/so-workshop2/A00309924/creado", &st)==-1){ //llamada al sistema para verificar el status de un directorio, 0 = success y -1 = error
		mkdir("/root/so-workshop2/A00309924/creado", 0700); //Crea directorio en caso que no exista
	}

	int statusRm;
	statusRm = rmdir("/root/so-workshop2/A00309924/creado"); //Elimina un directorio que de debe estar vacio.

	return 0;	
}
