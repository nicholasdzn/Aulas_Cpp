#include <stdio.h>

int main(){
    int i=1;

    printf("Numeros pares de 1 a 100: ");
    while( i<=100){
        int x = i % 2;
        i++;
        if (x==0){
            printf("%d ", i);
        }
        
    }
    return 0;
}
