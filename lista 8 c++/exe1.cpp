#include <iostream>

using namespace std;

double somaRecursiva(double vetor[], int inicio, int tam){  
    if(inicio == tam-1){
        return vetor[inicio];
    }
    return vetor[inicio] + somaRecursiva(vetor,inicio+1,tam);
}


int main(){
    double reais[5];
    double result;

    for(int i = 0; i < 5; i++){
        cout << "Digite um valor: ";
        cin >> reais[i];
    }
    cout << somaRecursiva(reais,0,5);
}