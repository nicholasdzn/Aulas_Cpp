#include <iostream>
using namespace std;

void multiplicaVetor(float vetor[], int k){
    cout << "Vetor multiplicado por " << k << endl;
    for(int i=0;i<4;i++){
        vetor[i] = vetor[i] * k;
        cout << vetor[i] << " ";
    }
}


int main(){
    int k;
    float vet[4];

    cout << "Digite um valor para K: " << endl;
    cin >> k;

    for(int i=0;i<4;i++){
        cout << "digite um numero para o vetor: " << endl;
        cin >> vet[i];
    }
    multiplicaVetor(vet,k);
}