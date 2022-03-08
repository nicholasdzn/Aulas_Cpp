#include <stdio.h>

int main(){ //inicio 
        //declaraçao de variaveis
float num1, num2, result;
printf("digite um numero:\n");
scanf("%f", &num1);

printf("digite outro numero:\n");
scanf("%f", &num2);

result = num1/num2;
printf("o resultado da divisão é: %f", result);
// %i significa leia um numero inteiro
// & significa local de armazenamento
}