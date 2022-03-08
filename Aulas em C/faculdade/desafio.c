#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
        float num1, num2, adicao, subtracao, divisao, multiplicacao;

    printf("Digite um valor:\n");
        scanf("%f", &num1);

    printf("Digite um valor:\n");
        scanf("%f", &num2);

        adicao = num1+num2;
        subtracao = num1-num2;
        divisao = num1/num2;
        multiplicacao = num1*num2;
        
    printf("A adição é: %f a subtração é: %f a divisao é: %f e a multiplicação é: %f", adicao,subtracao, divisao, multiplicacao);




} //inicio