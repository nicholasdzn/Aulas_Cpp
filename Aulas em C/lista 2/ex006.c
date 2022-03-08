#include <stdio.h>
#include <stdlib.h>

#define Pedra 1
#define Papel 2
#define Tesoura 3

int main(){

    int p1 = (rand() % 3 + 1);
    int p2 = 0;

        printf("-----------------------------------------\n");
        printf("Bem vindo ao Jogo Pedra, Papel e Tesoura:\n"); 
        printf("Faça sua escolha abaixo:\n");
        printf("INSIRA [1] PARA SELECIONAR PEDRA\n");
        printf("INSIRA [2] PARA SELECIONAR PAPEL\n");
        printf("INSIRA [3] PARA SELECIONAR TESOURA\n");
        printf("-------------------------------------------\n");

            scanf("%d", &p2);

    if((p1 == Pedra && p2 == Tesoura) || (p1 == Papel && p2 == Pedra) || (p1 == Tesoura && p2 == Papel)){

        printf("Você Perdeu!!, a Máquina inseriu %d e Você inseriu %d\n", p1, p2);

    }
    else if((p2 == Pedra && p1 == Tesoura) || (p2 == Papel && p1 == Pedra) ||(p2 == Tesoura && p1 == Papel)){

        printf("Você Venceu!!, a Máquina inseriu %d e Você inseriu %d\n ", p1, p2);

    }
    else{

        printf("Empate, %d, %d\n", p1, p2);
    }

}