#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
 int main (void)
{
     int ptotal = 1000000;
     int pin = 0;
     float x, y;

     srand(time ( NULL) );
     
     for( int i = 0; i < ptotal; i++)
{
            x = (float) rand() / RAND_MAX;
            y = (float) rand() / RAND_MAX; 
                  
           if (sqrt (x * x + y * y) <= 1)
             {
                              pin++;
             }


       }
        float resultado =(((float)4 * (float)ptotal) / (float)pin);

        printf("pi e igual a : %.lf\n",resultado);

         return 0;

     }    















 


