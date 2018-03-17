#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
void print_time () 
{
    struct timeval tv;
    struct tm* ptm;
    char time_string[40];
    /*Obtenemos la fecha y hora del día y la transformamos en un estructura tm.
      Para  conseguir  la  fecha  y  hora  actual, la llamada al sistema gettimeofday se encarga de obtenerlo 
      a través del kernel quien consulta a el RTC  (real time clock)  de  la  máquina.*/
    gettimeofday(&tv, NULL);
    ptm = localtime(&tv.tv_sec);
    /*Utilizando la estructura tm creamos un string con la informacion que deseamos*/
    strftime(time_string, sizeof(time_string),  "%d/%m/%Y %H:%M:%S" , ptm);
    printf( "%s\n" ,time_string);
}

int main() 
{
    print_time();
    return 0;
}
