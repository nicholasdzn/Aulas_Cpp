#include <stdio.h>

int main(){
    int valor, senha;
    int i;
    printf("Digite uma senha entre 0 e 100 para o jogador 2 adivinhar!\n");
        scanf("%d", &senha);
    if(senha>100){
        printf("Valor invalido, recomece!");
        return 0;
    }

    for(i=0;i<=4;i++){
        printf("Tente a sorte jogador 2, qual a senha que o jogador 1 digitou?\n");
            scanf("%d", &valor);
        if(valor-senha==1 || senha-valor==1){
            printf("Ta Quentee!\n");
        }
        else if(valor>senha){
            printf("Ihhhh ta longe, chuta um valor mais baixo\n");
        }
        else if(valor<senha){
            printf("Errrouuu! chuta mais alto que tu acerta!\n");
        }
        else if(senha==valor){
            printf("acertou!\n");
            break;
        }
        else if(i==4){
            printf("Vc perdeu");
            break;
        }
    
    }

}