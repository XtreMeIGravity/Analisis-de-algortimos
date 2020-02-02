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
#include <math.h>

void Suma(int *a,int *b,int leng);
void imprimeArreglo(int *array,int leng);

void main(){
    int n,i,k=0;
    time_t t;
    srand((unsigned) time(&t));
    for ( n = 0; n <= 5; n++)
    {
        k=pow(2,n);
        int a[k], b[k];
        printf("\n k: %d   | Pasos: ",k);
        for (i = 0; i < k; i++)
        {
            a[i]= rand()%2;
            b[i]= rand()%2;
        }
       /* imprimeArreglo(a,k);
        imprimeArreglo(b,k);*/
        Suma(a,b,k);
    }
}

void Suma(int *a,int *b,int leng){
    int i=0, c[leng+1], j, cont=1;

    for(j=0; j <= leng+1; j++){ cont++;
        c[j]=0; cont++;
    }

    for (i = leng; i >= 0; i--){ cont++;
        if(c[i]==0){ cont++;
            if(a[i-1]==0 && b[i-1]==0){ cont++;
                c[i]==0; cont++;
            }
            else if (a[i-1]==1 && b[i-1]==0 || a[i-1]==0 && b[i-1]==1){ cont++;
                c[i]=1; cont++;
            }
            else{ cont++;
                c[i]=0; cont++;
                c[i-1]=1; cont++;
            }
        }
        else{ cont++;
            if(a[i-1]==0 && b[i-1]==0){ cont++;
                c[i]=1; cont++;
            }
            else if(a[i-1]==1 && b[i-1]==0 || a[i-1]==0 && b[i-1]==1){ cont++;
                 c[i]=0; cont++;
                 c[i-1]=1; cont++;
            }
            else if(a[i-1]==1 && b[i-1]==1){ cont++;
                c[i]= 1; cont++;
                c[i-1]=1; cont++;
            }
        }
    }
    leng= leng+1;
    //imprimeArreglo(c,leng);
    //printf("\n");
    printf("%d",cont);
}

void imprimeArreglo(int *array,int leng){
    printf("\t");
    int i;
    for ( i = 0; i < leng; i++){
        printf("%d",array[i]);
    }
    printf("\n");
}