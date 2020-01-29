#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sumaBin(int *a,int *b,int leng);
void imprimeArreglo(int *array,int leng);
void InvertirArreglo(int *array, int leng);
void main(){
    int n,i ;
    time_t t;
    srand((unsigned) time(&t));
    for ( n = 1; n <= 30; n++)
    {
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            a[i]= rand()%2;
            b[i]= rand()%2;
        }
        imprimeArreglo(a,n);
        imprimeArreglo(b,n);
        sumaBin(a,b,n);
    }
}
void sumaBin(int *a,int *b,int leng){
    int c=0, i=0, resultado[leng+1];
    for (i = leng; i >= 0; i--){
        resultado[i+1]=a[i-1]+b[i-1]+c;printf("%d|",resultado[i+1]);
        if( resultado[i+1] == 2 ){
            resultado[i+1]=resultado[i+1]%2;printf("%d|",resultado[i+1]);
            c=1;
        }else if( resultado[i+1] == 3 ){
            c=0;
        }
    }
    imprimeArreglo(resultado,leng+1);
    printf("\n");
}
void imprimeArreglo(int *array,int leng){
    printf("\t");
    for (int i = 0; i < leng; i++){
        printf("%d",array[i]);
    }
    printf("\n");
}