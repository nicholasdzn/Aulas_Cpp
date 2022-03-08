//Nicholas Adorni 2029434
//Higor Luiz 2081158
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

// true - cara, false - coroa
bool flip () {
    return rand() % 2 == 1 ? true : false;
}

int main () {
    bool opcao = true;
    bool cara_coroa;
    int cara = 0, coroa = 0;
   
    while (opcao) {
        cout << "Jogar Moeda: 1 - sim 0 - nao" << endl;
        cin >> opcao;
        if (!(bool)opcao) {
            break;
        }
        cara_coroa = flip();

        if (cara_coroa) {
            cout << "Deu cara" << endl;
            cara++;
            continue;
        }else {
            cout << "Deu Coroa" << endl;
            coroa++;
            continue;
        }
    }

    cout << "Quantidade de vezes cara: " << cara << endl;
    cout << "Quantidade de vezes coroa: " << coroa << endl;

}