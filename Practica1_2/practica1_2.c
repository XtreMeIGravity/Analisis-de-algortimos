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

int mcd(int m, int n);//declara funcion de euclides
int fibonacci(int n);//declara funcion de euclides

int main(){
 int n,m,i,lim=10;//Declara variables
    for(i=1; i<=lim; i++){
      m=fibonacci(i);//almacena el termino 1 
      n=fibonacci(i-1);//almacena el termino 0
      printf("\nN: %d, M=%d \n",n,m);//Imprime los valores
      printf("MCD: %d \n",mcd(m,n));//Crea el mcd
    }
    return 0;
}

int mcd(int m, int n){//Euclides
    int r=0, cont=1;
    while(n!=0){ cont++;
        r= m%n; cont++;
        m=n; cont++;
        n=r;cont++;
    }cont++;
    printf("Tiempo: %d\n",cont);
    return m;
}

int fibonacci(int n){//fibonacci
  if (n>2)
    return fibonacci(n-1) + fibonacci(n-2);
  else if (n==2)
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
}