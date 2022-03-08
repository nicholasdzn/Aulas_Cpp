// Nicholas Adorni 2029434
// Higor Luiz 2081158
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {
    srand(time(NULL));
    int o = 0;
    int b = 0;
    //questão a:
    for(b=0;b < 5; b++){
        o= (rand() % 2) + 1 ;
        cout << "Atribuicao a)" << b << ": " << o << endl;
    }
    //questao b:
    for(b=0;b < 5; b++){
        o = (rand() % 10) + 1;
        cout << "Atribuicao b) " << b + 1 << ": " << o << endl;
    }
    //questao c:
    for(b=0;b < 5; b++){
        o = (rand() % 9) + 1;
        cout << "Atribuicao c) " << b + 1 << ": " << o << endl;
    }
    //questado d
    for(b=0;b < 5; b++){
        o = (rand() % 112) + 1000;
        cout << "Atribuicao c) " << b + 1 << ": " << o << endl;
    }
    //questao e
    for(b=0;b < 5; b++){
        o = (rand() % 3) - 1;
        cout << "Atribuicao c) " << b + 1 << ": " << o << endl;
    }
    //questao f
    for(b=0;b < 5; b++){
        o = (rand() % 15) -3;
        cout << "Atribuicao c) " << b + 1 << ": " << o << endl;
    }

    return 0;
}

