#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void sumaBin(int *a,int *b,int *resultado,int leng);
void imprimeArreglo(int *array,int leng);
void imprimeArreglo2(int *array,int leng);
void InvertirArreglo(int *array, int leng);
void main(){
    int n,i ;
    time_t t;
    srand((unsigned) time(&t));
    for ( n = 1; n <= 65; n=2*n )//aumento de tamaño de arreglo
    {
        int a[n], b[n] , resultado[n+1];
        while (i<=n+1){
            resultado[i]=0;
            i++;
        }
        for (i = 0; i < n; i++){
            a[i]= rand()%2;
            b[i]= rand()%2;
        }
        //imprimeArreglo(a,n);
        //imprimeArreglo(b,n);
        sumaBin(a,b,resultado,n);
        //imprimeArreglo2(resultado,n+1);
        printf("\n");
    }
}
void sumaBin(int *a,int *b,int *resultado,int leng){
    int c=0, i=0,k=0;
    k++;
    for (i = leng; i > 0; i--){
        k++;
        resultado[(i)]=a[(i-1)]+b[(i-1)]+resultado[(i)];k++;
        k++;
        if( resultado[(i)] >= 2){
            resultado[(i)]=resultado[(i)]%2;k++;
            resultado[(i-1)]=1;k++;
        }else{k++;
            resultado[(i-1)]=0;k++;
        }
    }
    printf("(%d,%d)\n",leng,k);
}
void imprimeArreglo(int *array,int leng){
    printf(" ");
    for (int i = 0; i < leng; i++){
        printf("%d",array[i]);
    }
    printf("\n");
}

void imprimeArreglo2(int *array,int leng){
    for (int i = 0; i < leng; i++){
        printf("%d",array[i]);
    }
    printf("\n");
}