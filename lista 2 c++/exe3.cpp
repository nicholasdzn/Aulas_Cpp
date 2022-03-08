#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int sorteado = rand()%1000 +1;
    int tentativas = 5;
    int escolha;
    cout << "Voce tem 5 tentativas! " << endl;
    for(int i = 0; i <= 5; i++){
        if(i == 5){
            cout << "Voce perdeu !" << endl;
                break;
        }
        cout << "Tente adivinhar: ";
        cin >> escolha;

        if(escolha > sorteado){
            cout << "Muito alto, tente novamente" << endl;
            tentativas = tentativas - 1;
        }else if(escolha < sorteado){
            cout << "Muito baixo, tente novamente" << endl;
            tentativas = tentativas - 1;
        } else{
            cout << "Parabens voce acertou!" << endl;
            break;
        }
    }
}