#include<stdio.h>
#include <time.h>
int main()
{
   struct timespec tim, tim2;
   int tme;
   tim.tv_sec = 0.5;
   tim.tv_nsec = 500000000L;
   tme = nanosleep(&tim, &tim2);
   if(tme < 0 )   
   {
      printf("Fallo al ejecutarse la llamada al sistema 'nanosleep' \n");
      return -1;
   }
   printf("La llamada al sistema 'nanosleep' se ejecuto correctamente \n");
   return 0;
}
