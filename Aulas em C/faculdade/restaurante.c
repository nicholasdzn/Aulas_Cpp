#include <stdio.h>


float pagamento(int gasto){
    float total;

    total = gasto * 0.10 + gasto;
    return total;

}

int main(){
    float conta,n;
    
    printf("Digite o valor gasto: \n");
        scanf("%f", &n);
        conta = pagamento(n);
    
    printf("subtotal (+ 10 PORCENTO DO GARÇOM): %f \n", conta);
    
}   