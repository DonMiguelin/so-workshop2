#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
printf("Hola \n");
struct stat structa ={0};
if(stat("/tmp/so-workshop2/A00328044/SistemasOperativos", &structa)==-1){
printf("No esta \n");
}else{
printf("Esta \n");
}

}

