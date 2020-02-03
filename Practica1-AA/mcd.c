/*
        INSTITUTO POLITÉCNICO NACIONAL
         ESCUELA SUPERIOR DE CÓMPUTO
           ANÁLISIS DE ALGORITMOS 
              SEMESTRE 2020-2
                GRUPO: 3CV2
        EQUIPO:
          -- LÓPEZ HERNÁNDEZ DAVID
          -- TOLENTINO PÉREZ JAZMIN YANELI
             PRÁCTICA No1: DETERMINACIÓN EXPERIMENTAL
            DE LA COMPLEJIDAD TEMPORAL DE UN ALGORITMO
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mcd(int m, int n);
int fibonacci(int n);

int main(){
 int n,m,i,lim=10;
    for(i=1; i<=lim; i++){
      m=fibonacci(i);
      n=fibonacci(i-1);
      printf("N: %d, M=%d \n\n",n,m);
      printf("MCD: %d \n",mcd(m,n));
    }
    return 0;
}

int mcd(int m, int n){
    int r=0, cont=1;
    while(n!=0){ cont++;
        r= m%n; cont++;
        m=n; cont++;
        n=r;cont++;
    }cont++;
    printf("Tiempo: %d",cont);
    return m;
}

int fibonacci(int n){
  if (n>2)
    return fibonacci(n-1) + fibonacci(n-2);
  else if (n==2)
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
}