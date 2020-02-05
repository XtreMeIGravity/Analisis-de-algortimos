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
#include <time.h>

void sumaBin(int *a,int *b,int *resultado,int leng);//Declaracion suma binaria
void imprimeArreglo(int *array,int leng);
void imprimeArreglo2(int *array,int leng);
void main(){
    int n,i;
    time_t t;
    srand((unsigned) time(&t));
    for ( n = 1; n <= 65; n=2*n )//aumento de tamaño de arreglo
    {
        int a[n], b[n] , resultado[n+1];//Se declaran los arreglos y donde se volcara el resultado con el tamaño mas 1
        i=0;
        while (i<=n+1){//rellena el arreglo de resultado de 0
            resultado[i]=0;
            i++;
        }
        for (i = 0; i < n; i++){//llena los arreglos a y b  con 0 y 1 de manera aleatoria
            a[i]= rand()%2;
            b[i]= rand()%2;
        }
        printf("a:");        imprimeArreglo(a,n);//Imprime el arreglo a con tamaño n
        printf("b:");        imprimeArreglo(b,n);//Imprime el arreglo b con tamaño n
        sumaBin(a,b,resultado,n);
        printf("\n");
    }
}
void sumaBin(int *a,int *b,int *resultado,int leng){//Declaracion suma binaria
    int i=0,k=0;//declaracion de variables
    k++;
    for (i = leng; i > 0; i--){k++; //El primer for 
        resultado[(i)]=a[(i-1)]+b[(i-1)]+resultado[(i)];k++;//suma los numeros
        k++;
        if( resultado[(i)] >= 2){//si es mayor a 2 crea un carry en la posicion i-1
            resultado[(i)]=resultado[(i)]%2;k++;
            resultado[(i-1)]=1;k++;
        }else{k++;
            resultado[(i-1)]=0;k++;
        }
    }

    printf("r:"); imprimeArreglo2(resultado,leng+1);
    printf("(%d,%d)",leng,k);
}
void imprimeArreglo(int *array,int leng){//Imprime un arreglo de enteros desplazando una pos a la derecha
    printf(" ");
    for (int i = 0; i < leng; i++){
        printf("%d",array[i]);
    }
    printf("\n");
}
void imprimeArreglo2(int *array,int leng){//Imprime el arreglo sin el dezplazamiento
    for (int i = 0; i < leng; i++){
        printf("%d",array[i]);
    }
    printf("\n");
}