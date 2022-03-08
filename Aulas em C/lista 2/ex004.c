#include <stdio.h>

int main(){
    int p1,p2,p3,media,media2;

    printf("Digite a nota da P1: \n");
        scanf("%d", &p1);

    printf("Agora digite a nota da sua P2: \n");
        scanf("%d", &p2);
    
    media = (p1+p2)/2;

    if(media>=5 && (p1>3 || p2>3)){
        printf("Sua media: %d\n", media);
    }
    if(media>=5 && p1<=3 || p2<=3){
        printf("Sua media foi acima de 5, porem uma de suas notas foi menor que 3 :(\n");
        printf("Insira aqui a nota da sua P3: \n");
            scanf("%d", &p3);

    if(p1>p2){
        media2 = (p1 + p3)/2;
        printf("Sua nova media foi: %d\n", media2);
        if(media2>=5){
            printf("Parabens voce foi aprovado\nSua media final foi de: %d\n", media2);
        if(media2<5){
            printf("Infelizmente voce nao foi aprovado\nSua media final foi de: %d\n", media2);
        }
        }
    }
    if(p2>p1){
        media2 = (p2 + p3)/2;
        printf("Sua Nova media foi: %d\n", media2);
        if(media2>=5){
            printf("Parabens voce foi aprovado\nSua media final foi de: %d\n", media2);
        if(media2<5){
            printf("Infelizmente voce nao foi aprovado\nSua media final foi de: %d\n", media2);
        }

        }
        

    }


        
    }

}