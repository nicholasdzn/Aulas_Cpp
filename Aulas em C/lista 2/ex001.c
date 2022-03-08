#include<stdio.h> //declaração de bibliotecas

int main(){
    float varA, varB, result;
    int opcao;

    printf("--------------------------\n");
    printf("Bem vindo a calculadora:\n"); 
    printf("--------------------------\n");
    printf("Escolha uma opção:\n");
    printf("1) para adição:\n");
    printf("2) para subtração:\n");
    printf("3) para multiplicação:\n");
    printf("4) para divisão:\n");
    printf("--------------------------\n");

    scanf("%d", &opcao);
    
    printf("Digite dois números:\n");
    scanf("%f", &varA);
    scanf("%f", &varB);
    printf("--------------------------\n");

    if(opcao==1){
        result = varA + varB;
        printf("O valor da adição de %f + %f =  %f \n", varA, varB, result);
    }else if(opcao==2){
        result = varA - varB;
        printf("O valor da subtraçao de %f - %f =  %f \n", varA, varB, result);
    }else if(opcao==3){
        result = varA * varB;
        printf("O valor da multiplicação de %f * %f =  %f \n", varA, varB, result);
    }else if(opcao==4){
        if(varB != 0){
            result = varA / varB;
            printf("O valor da divisão de %f / %f =  %f \n", varA, varB, result);
        }else{ //igual zero
            printf("Erro! Não existe divisão por zero!\n");
        }
        
    }else{
        printf("Opção inválida. Tente novamente!");
    }

}