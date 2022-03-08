#include <stdio.h>

    int main (){
    float gasolina_real, gasolina_dolar, valor;
        printf("Digite o valor da gasolina em reais: \n");
            scanf("%f", &gasolina_real);

        printf("Agora digite o valor do dólar atualmente: \n");
            scanf("%f", &valor);

        gasolina_dolar = gasolina_real*valor;
        printf("O valor da gasolina em dólares é: %f", gasolina_dolar); 


    }
