/*crea un fichero y escribe en èl del 0 a 9*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
int i,fd;
fd=creat("prueba",0600);
	for(i=0;i<10;i++)
	write(fd,&i,sizeof(i));
}
