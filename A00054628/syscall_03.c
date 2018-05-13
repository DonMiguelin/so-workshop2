/*muestra la hora y fecha actual*/
#include<stdio.h>
#include<sys/time.h>
#include<time.h>
#include<unistd.h>
void print_time()
{
struct timeval tv;
struct tm* ptm;
char time_string[40];
gettimeofday(&tv,NULL);
ptm= localtime(&tv.tv_sec);
strftime(time_string,sizeof(time_string),"%d%m%y %H:%M:%S",ptm);
printf("%s\n",time_string);
}
int main()
{
print_time();
return 0;
}
