/* Cerrar un fichero*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
int fd,i,vector[10];
fd=creat("prueba",0600);
for(i=0;i<10;i++) vector[i]=i;
write(fd,vector,sizeof(vector));
close(fd);
}
