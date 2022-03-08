#include <stdio.h>

int main(){
    int nota1, nota2, nota3, nota4, media;

    printf("digite um numero \n");
    scanf("%d", &nota1);

    printf("digite outro numero \n");
    scanf("%d", &nota2);

    printf("digite outro numero \n");
    scanf("%d", &nota3);

    printf("digite outro numero \n");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("o resultado é: %d", media);


}