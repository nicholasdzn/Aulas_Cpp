#include<stdio.h>
#include<math.h>
#define NUM_TOTAL 5

int Amarzem(int vet_conta[], float vet_saldo[]){
    int i = 1;
    int contador = 0;
    while(i < NUM_TOTAL + 1){

        printf("Digite o numero da sua conta:");
        scanf("%i", &vet_conta[i]);

        if(vet_conta[i] == 0){
            return contador;
            
        }

        else{

            printf("Digite o valor contido na sua conta:");
            scanf("%f", &vet_saldo[i]);
            i++;
            contador = contador + 1;
        }
        
    }
    return contador;
}


float Media_saldo(int vet_conta[], float vet_saldo[], int contador){
    int i;
    float soma;
    for(i = 1; i <= contador; i++){

        soma = soma + vet_saldo[i];
    }
    return soma/contador;


}


int main(){
    int num_conta[NUM_TOTAL];
    float saldo[NUM_TOTAL];
    int escolha, escolha2;
    int cont = Amarzem(num_conta, saldo);
    system("cls");
    printf("--------------------------------\n");
    printf(" A media de salarios e:R$%.2f\n", Media_saldo(num_conta, saldo, cont));
    printf("--------------------------------\n");
    printf("Digite:\n");
    printf("'1- Visualizar o saldo de todas as contas'\n");
    printf("'2- Visualizar o saldo de uma conta especifica'\n");
    printf("Escolha:");
    scanf("%i", &escolha2);
    system("cls");

    if(escolha2 == 1){
        int i;
        for(i = 1; i <= cont; i++){
            printf("-------------------------------\n");
            printf("       Numero da conta:%i\n", num_conta[i]);
            printf("       Saldo da conta:%.2f\n", saldo[i]);
            printf("-------------------------------\n\n");
        }
        
    }

    else if(escolha2 == 2){
        int choice = 0;
        do{
            system ("cls");
            printf("Digite o numero da conta que deseja visualizar:");
            scanf("%i", &escolha);
            printf("O saldo da conta %i e: R$%.2f\n", num_conta[escolha], saldo[escolha]);
            if(saldo[escolha] > Media_saldo(num_conta, saldo, cont)){
                printf("Parabens, seu saldo esta acima da media!\n");
            }
            else if(saldo[escolha] < Media_saldo(num_conta, saldo, cont)){
                printf("O saldo da sua conta esta abaixo da media de salarios.\n");
            }
            else{
                printf("O saldo da sua conta e igual a media de selarios.\n");
            }
            printf("Voce deseja visualizar o saldo de outra conta?\n");
            printf("Digite: 1-Sim / 2-Nao\n");
            printf("Escolha:");
            scanf("%i", &choice);
        
        } while(choice != 2);
        system("cls");
    }
}