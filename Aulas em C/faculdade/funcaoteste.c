#include <stdio.h>

int soma(int n){
    int somatorio = (n*(n+1))/2;

    return somatorio;

}

int main(){
    int valor;
    int somatorio=0;
    printf("Digite um valor para n");
    scanf("%d", valor);
    somatorio = valor;

    printf("A soma é %d", soma(somatorio));
}