#include <stdio.h>

int main(){

    int num;
    int contador = 1;
    int multiplica;

        printf("Digite um numero entre 1 e 10\n");
            scanf("%d", &num);

    while(contador >=1 && contador <=10){
        multiplica = num * contador;
        printf("%d x %d = %d  \n", num,contador,multiplica);
        contador++;

    }

}