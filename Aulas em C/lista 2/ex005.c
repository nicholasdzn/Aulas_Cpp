#include <stdio.h>

int main(){
    int volume,peso,altura,largura,comprimento,dimensao;

    printf("Digite a quantidade de bagagens: \n");
        scanf("%d", &volume);
    if(volume>1){
        printf("Quantidade invalida, por favor recomece");
        return 0;
    }

    printf("Digite o peso da bagagem em kg: \n");
        scanf("%d", &peso);
    if(peso>15){
        printf("Peso Não suportado, por favor recomece");
        return 0;
    }

    printf("Digite a altura da bagagem em cm: \n");
        scanf("%d", &altura);
    printf("Digite a largura da bagagem em cm: \n");
        scanf("%d", &largura);
    printf("Digite o comprimento da bagagem em cm: \n");
        scanf("%d", &comprimento);

    dimensao = altura + largura + comprimento;

    if(dimensao>158){
        printf("Dimensoes invalidas, por favor recomece");
        return 0;
    }
}