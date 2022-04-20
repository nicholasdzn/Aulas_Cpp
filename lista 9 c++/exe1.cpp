#include <iostream>

using namespace std;

long int binario(int valor){
    if(valor==0){
        return 0;
    }
    return binario(valor/2)*10 + valor%2;

    /*if (valor == 0) return;
    return binario(valor/2);
    cout << valor%2;
    */
}

int main(){
    int n = 0;
    cout << "Digite um numero: ";
    cin >> n;
    cout << binario(n);
}