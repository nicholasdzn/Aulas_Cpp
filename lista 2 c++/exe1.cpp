#include <iostream>
#define MAX 99999
using namespace std;
// programa que lê os numeros que o usuario digitou. quando for digitado o numero 9999, o programa para e faz a media dos numeros anteriores a ele.
int main(){
    int i = 1;
    int vetor[MAX];
    double media = 0;
    for(i=0;i<9999;i++){
        cout << "Digite um valor: " << endl;
        cin >> vetor[i];
        if(vetor[i] == 9999){
            break;
            }else{
                media += vetor[i];
            }
    }
    cout << "A media dos valores: " << (media)/i;
}