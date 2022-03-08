#include <stdio.h>

int negativos(int vet[], int num){
    int num_negativo=0;
    for(int i=0;i<num;i++){
       
        if(vet[i]<0){
            num_negativo++;
        }
    }
    printf("Ha %d numeros negativos neste vetor", num_negativo);
}

int main(){

    int n;
    
    printf("Informe a quantidade de numeros: ");
    scanf("%d",&n);

    float valores[n];

    for(int i=0; i<n; i++){
        printf("Informe um valor %d:", i+1);
        scanf("%f",&valores[i]);
    }
    
    negativos(valores,n);
   
    return 0;
}
