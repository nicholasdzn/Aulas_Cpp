#include<stdio.h>

#define pi 3.1415

int main(){
    float volume;
    float a, b, c, raio, h;
    int opcao;

    printf("--------------------------\n");
    printf("Bem vindo:\n"); 
    printf("--------------------------\n");
    printf("Escolha uma opção para cálculo do volume:\n");
    printf("1) para caixa:\n");
    printf("2) para esfera:\n");
    printf("3) para cilindro:\n");
    printf("4) para cone:\n");
    printf("--------------------------\n");

    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Digite três números:\n");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        volume = a*b*c;
        printf("O volume é: %f",volume );
        break;
    case 2:
        printf("Digite o valor do raio:\n");
        scanf("%f", &raio);
        scanf("%f", &raio);
        scanf("%f", &h);
        volume = pi*raio*raio*h;
        printf("O volume é: %f",volume );
        break;
    case 3:
        printf("Digite o valor do raio:\n");
        scanf("%f", &raio);
        scanf("%f", &raio);
        scanf("%f", &h);
        volume = pi*raio*raio*h;
        printf("O volume é: %f",volume );
    case 4:
        printf("Digite o valor do raio:\n");
        scanf("%f", &raio);
        scanf("%f", &h);
        volume = 3.14*raio*raio*h;
        volume = 1/3*pi*raio*raio*h;
        printf("O volume é: %f",volume );
        break;
    default:
        printf("Opção inválida. Tente novamente!");
        break;
    }
    
   
    
}