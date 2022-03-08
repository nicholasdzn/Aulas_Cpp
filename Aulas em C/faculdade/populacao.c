#include <stdio.h>

float media_salarios(float salarios, float n){
    float total;

    total = salarios/n;

    return total;
    
}

int main(){
    int idade,n=0;
    int genero;
    float salario=1,media_salarial,total;

    
    while(salario>0){
        printf("Digite seu salario: (0 para sair)\n");
            scanf("%f", &salario);
            n++;


    }

   printf("%d", n);



}


