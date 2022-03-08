#include <stdio.h>
#include <stdlib.h>

int main(){

    int player1 = (rand() % 3) + 1; 
    int player2 = 0;

    printf("--------------------------\n");
    printf("Bem vindo ao Jogo:\n"); 
    printf("--------------------------\n");
    printf("Escolha uma opção:\n");
    printf("1) para Pedra:\n");
    printf("2) para Papel:\n");
    printf("3) para Tesoura:\n");
    printf("--------------------------\n");

    scanf("%d", &player2);

    if((player1==1 && player2==3) || (player1==2 && player2==1) || (player1==3 && player2==2)){

        printf("O vencedor é o Computador, %d, %d\n", player1, player2);

    }else if((player2==1 && player1==3) || (player2==2 && player1==1) ||(player2==3 && player1==2)){

        printf("Vc venceu!!!, %d, %d\n", player1, player2);

    }else{

        printf("Empate, %d, %d\n", player1, player2);
        
    }
}
