#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,NULL);
    int i,cont,j;
    int vet1[10] = {1, 20, 102, 42, 37, 20, 11, 53, 11, 1};
    int vet2[10] = {11, 20, 1000, 1110, 532, 42, 37, 87, 87, 1};

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
       if(vet1[i]==vet2[j]){
        cont++;
       }
       }
    }
    printf("Há %d ocorrências de números na mesma posição das duas sequências\n", cont);
}