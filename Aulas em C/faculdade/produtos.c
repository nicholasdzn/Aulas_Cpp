#include <stdio.h>

int main(){
    int insert;


    while(insert!=0){
        printf("Digite o codigo do produto\n");
            scanf("%d", &insert);
        if(insert == 1){
        printf("Alimento perecivel\n");
        }
        else if(insert == 2 || insert == 3){
            printf("Alimento nao perecivel\n");
        }
        else if(insert == 4 || insert == 5 || insert == 6){
            printf("Vestuario\n");
        }
        else if(insert == 7){
            printf("Higiene pessoal\n");
        }
        else if(insert == 8 || insert == 9 || insert == 10){
            printf("Limpeza\n");
        }
        else{
            printf("INVALIDO!!\n");
            return 0;
        }
    
    }
}