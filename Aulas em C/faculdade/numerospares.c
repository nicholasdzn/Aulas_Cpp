#include <stdio.h>

int main(){

    int i;
    printf("Numeros pares de 1 a 100\n");
    for(i=1; i<=100; i++){
        int x = i % 2;
        if (x==0){
            printf("%d ", i);
        }

    }
}