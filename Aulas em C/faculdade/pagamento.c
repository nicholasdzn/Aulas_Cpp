#include <stdio.h>

float pagamento(float salario){
    float inss, fgts,total;

    inss = salario * 0.10;
    fgts = salario * 0.08;
    total = salario - fgts - inss - 100;
    
    return total;
}


int main(){

    float valor, total;

        printf("Digite o seu salário: \n");
            scanf("%f", &valor);
        
        total = pagamento(valor);

    printf("O seu salario com todos os descontos fica em: %f", total);

}