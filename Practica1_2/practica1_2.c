#include <stdio.h>

void main(){
}
int euclides(int *m, int *n){
    while (n != 0){
        r=m%n;
        m=n;
        n=r;
    }
    return m;    
}