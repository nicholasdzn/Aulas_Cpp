#include <iostream>
using namespace std;


void somaVetor(int vet1[],int vet2[]){
    int soma = 0;
    cout << "novo vetor 1 com a soma entre o vetor 2: " << endl;
    for(int i=0;i<4;i++){
        soma = vet1[i]+vet2[i];
        vet1[i] = soma;
        cout << vet1[i] << " ";
        soma = 0;
    }


}

int main(){
    int vet1[4],vet2[4];
    for(int i=0;i<4;i++){
        cout << "digite um valor para o vetor 1: " << endl;
        cin >> vet1[i];
        cout << "digite um valor para o vetor 2: " << endl;
        cin >> vet2[i];
    }

    somaVetor(vet1,vet2);

}