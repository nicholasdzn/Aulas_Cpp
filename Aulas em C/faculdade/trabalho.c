#include<stdio.h> 
#include <math.h>
#define Pi 3.14

int main(){

float varA, varB, varC, result;
    int opcao;

    printf("--------------------------------\n");
    printf("Bem vindo a Calculadora de Volumes:\n");
    printf("--------------------------------\n");
    printf("Escolha uma opção:\n");
    printf("1) para Caixa de Lados A, B e C:\n");
    printf("2) para Esfera de Raio R:\n");
    printf("3) para Cilindro de Raio R e Altura H:\n");
    printf("4) para Cone de Raio R e Altura H:\n");
    printf("--------------------------------\n\n");

        scanf("%d", &opcao);

if(opcao==1)
{
    printf("\n--------------------------------\n");
    printf("\nDigite os valores de A, B e C:\n");
        scanf("%f", &varA);
        scanf("%f", &varB);
        scanf("%f", &varC);
    printf("\n--------------------------------\n\n");

         result = varA * varB * varC;

    printf("O volume da Caixa de lados %0.2f, %0.2f e %0.2f é %0.2f\n", varA, varB, varC, result);
}

else if(opcao==2)
{

    printf("\n--------------------------------\n");
    printf("\nDigite o valor do raio:\n");
        scanf("%f", &varA);


        result = 1.333*Pi*pow(varA, 3.0);

    printf("O volume desta esfera é: %3.3f", result);

}

else if(opcao==3)
{   

    printf("\n--------------------------------\n");
    printf("\nDigite o valor do raio:\n");
        scanf("%f", &varA);
    printf("Digite o valor da altura:\n");
        scanf("%f", &varB);
    printf("\n--------------------------------\n\n");

        result = Pi*pow(varA, 2.0)*varB;

    printf("O Volume do cilindro é: %3.3f", result);

}
else if(opcao==4)
{

    printf("\n--------------------------------\n");
    printf("\nDigite o valor raio:\n");
        scanf("%f", &varA);
    printf("\nDigite da altura:\n");
        scanf("%f", &varB);

        result = 0.333*Pi*pow(varA, 2.0)*varB;
    printf("O Volume do cone é: %3.3f", result);
    printf("\n--------------------------------\n");
    
}   

}