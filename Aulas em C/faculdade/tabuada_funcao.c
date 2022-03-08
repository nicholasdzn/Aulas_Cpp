#include <stdio.h>

float calculo(int valores, int n){
    float multi;

    multi = valores * n;

    return multi;

}

int main(){
    
    int cont, valor, multiplica;
    int cont2 = 1;

    while (cont2 == 1) {
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &valor);

        if(valor>=1 && valor <=10){
            for(cont=1; cont<=10; cont++){
                multiplica = calculo(valor,cont);
                //multiplica = valor * cont;
                printf("%d x %d = %d \n",valor,cont,multiplica);
            }

        } else {
            printf("Valor informado não é válido.");
            cont2=0;
        }
    }

    return 0;
}