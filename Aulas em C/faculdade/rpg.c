#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int golpe, golpe2;
    int inicio;
    int escolha;
    int ataq1, ataq2;
    int vida1, vida2;
    int def1, def2;
    char p1,p2;
    printf("BEM VINDO AO RPG REVENGE AND GLORY\n");
    printf("PARA COMECAR DIGITE 1!!\n");
        scanf("%c", &escolha);

    vida1 = (rand() % 499) + 501;
    vida2 = (rand() % 499) + 501;
    def1 = (rand() % 100);
    def2 = (rand() % 100);
    ataq1 = (rand() % 49) + 51;
    ataq2 = (rand() % 49) + 51;
    golpe = vida2 - (ataq1-def2);
    golpe2 = vida1 - (ataq2-def1);
    //p1 = vida1, def1, ataq1;
    //p2 = vida2, def2, ataq2;


    if(escolha = 1){
        printf("Muito bem\n");
        printf("Seu personagem spawnou com %d de hp\n", vida1);
        printf("%d pontos de ataque\n", ataq1);
        printf("E %d pontos de defesa\n", def1);

    }

    printf("Hora da batalha!! digite 3 para começar");
        scanf("%d", &inicio);

    if(inicio = 3){
            printf("Seu oponente será Grognar o gigante!!\n");
            printf("Que tem %d de hp, %d de ataque e %d de defesa\n", vida2, ataq2, def2);
            printf("SEU PRIMEIRO GOLPE DEIXOU GROGNAR COM: %d de vida!!\n", golpe);


        
        

    }





    


    

}