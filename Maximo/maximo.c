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
#include <time.h>

int max(int *a , int leng);
void imprimeArreglo(int *array,int leng);
void main(){
    int leng=20;
    int n,a[leng];
    time_t t;
    srand((unsigned) time(&t));
    for ( n = 0; n < leng; n++ ){//aumento de tamaño de arreglo
        a[n]= rand()%1000;
    }
    printf("a:");imprimeArreglo(a,leng);
    printf("max: %d",max(a,leng));
    printf("\n");
}
int max(int *a , int leng){
    int tmp=a[0];
    for (int i = 1; i < leng; i++){
        if (tmp < a[i]){
            tmp=a[i];
        }
    }
    return tmp;
}
void imprimeArreglo(int *array,int leng){
    for (int i = 0; i < leng; i++){
        printf("%d|",array[i]);
    }
    printf("\n");
}