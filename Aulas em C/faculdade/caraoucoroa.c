#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));
int moeda = (rand() % 2) + 1; // 1,2,3
int escolha = 2;

switch(escolha){

    case 1:
        printf("Voce acertou");
        break;
    case moeda != escolha:
    printf("Voce errou");
        break;
}
