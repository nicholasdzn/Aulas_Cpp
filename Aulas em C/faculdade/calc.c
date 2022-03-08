#include<stdio.h>

int Soma(int a, int b){
    return (a+b);
}
int Multiplicacao(int a, int b){
    return (a*b);
}

int main(){
    int a, b, result, choose;

    printf("-----------------------------------\n");
    printf("INSIRA [1] PARA SOMA\n");
    printf("INSIRA [2] PARA MULTIPLICAÇÃO\n");
    printf("-----------------------------------\n");
        scanf("%d", &choose);

    printf("digite dois valores:\n");
        scanf("%d", &a);
        scanf("%d", &b);

    // acrescente um switch case para a pessoa escolher a operaçao
    //result = Soma(a,b);
    //result2 = Multiplicacao(a,b);

        switch(choose){
            case 1: 
                result = Soma(a,b);
                printf("O valor da soma é: %d", result);
            break;
            
            case 2:
                result = Multiplicacao(a,b);
                printf("O valor da multiplicação é: %d", result);
            break;

        }


}