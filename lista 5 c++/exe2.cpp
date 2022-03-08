#include <iostream>
#define MAX 999
using namespace std;
int main(){
    char vet[MAX];
    int tamanho=1;

    cout << "Digite uma palavra: " << endl;
    cin >> vet;

    for(int i = 0; i < MAX; i++){
        tamanho += 1;
        if(vet[i] = '/0'){
            break;
        }
    }
    cout << tamanho;
}