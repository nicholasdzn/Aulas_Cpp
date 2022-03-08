#include <stdio.h>


int main(){
    int somatoria = 0;
    int i =1;

    while (i>=1){
        printf("\nDigite um numero diferente de 0:");
        scanf("%d", &i);
        somatoria = somatoria + i;
        
    }
    int par = somatoria % 2;
    if(par==0)
        printf("\nO numero %d e par!\n", somatoria);
    else
        printf("\nO numero %d e impapar!\n", somatoria);

    return 0;
}