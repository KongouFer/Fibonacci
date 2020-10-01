#include <stdio.h>



int main(){

   int fibonacci,n,cont;

    int val1 = 0;

    int val2 = 1;

   printf("Ingresa el numero que quieres obtener de la serie de fibonacci");

   scanf("%d",&n);

   for(cont=0;cont<n;cont++){

             fibonacci = val1 + val2; //Se suma los dos primeros valores, es decir 0 y 1, y conforme se hace la iteración, el val1 y val2 se modifican

             printf("%d\n",fibonacci);

             val1 = val2;

             val2 = fibonacci;

   }

   return 0;
   //comit de prueba
}
