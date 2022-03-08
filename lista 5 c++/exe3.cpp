#include <iostream>
#define MAX 999
using namespace std;

int main(){
    char vet[MAX];

    cout << "Digite uma palavra: " << endl;
    cin >> vet;

    if(vet[0] == 'a' || vet[0] == 'A'){
        cout << vet;
    }
}