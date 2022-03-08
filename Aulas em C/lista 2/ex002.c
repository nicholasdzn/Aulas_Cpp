#include <stdio.h>
#include <math.h>

int main(){

    int n1,n2,n3,n4,calculo;

    printf("---Bem vindo a calculadora binaria---\n");
    printf("Abaixo voce ira digitar um numero por vez, sendo numeros entre 0 e 1 (maximo de 4 numeros)\n");
    printf("Primeiro Numero: \n");
        scanf("%d", &n1);
    printf("Segundo Numero: \n");
        scanf("%d", &n2);
    printf("Terceiro Numero: \n");
        scanf("%d", &n3);
    printf("Quarto Numero: \n");
        scanf("%d", &n4);

    
    calculo = n1*(2*2*2)+n2*(2*2)+n3*(2)+n4*1;

    printf("O resultado do cálculo é: %d ", calculo);


}