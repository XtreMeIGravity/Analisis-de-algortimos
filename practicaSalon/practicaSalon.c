#include <stdio.h>

void InsertionSort(int *a);
void imprimeArreglo(int *a);
int tam(int *a);

void main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%i\n",tam(a));
    imprimeArreglo(a);
    InsertionSort(a);
}
void InsertionSort(int *a){
    int j,key,i;
    for (i = 1; i < tam(a); i++){
        imprimeArreglo(a);
        j=i-1;
        key=a[i];
        while ( j>=0 && a[j]>key ){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void imprimeArreglo(int *a){
    for (int i = 0; i < tam(a); i++){
        printf("%d |",a[i]);
    }
    printf("\n");
}
int tam(int *a){
    int i=0;
    while (a[i]){
        i++;
    }
    return i;
}