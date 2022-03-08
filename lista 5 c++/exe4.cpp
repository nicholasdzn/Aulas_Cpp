#include <iostream>
#define MAX 999
using namespace std;

int main(){
    char vet[MAX];
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> vet;

    for(int i = 0; i < 4; i++){
        cout << vet[i];
    }

}