#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

    struct pontos{
        int x;
        int y;
    };

int valorPontos () {
    pontos valores[10];

    for(int i = 0; i<10; i++){
        (valores+i)->x = rand() % 100;
        (valores+i)->y = rand() % 100;
    }


    for(int i = 0; i<10; i++){
        cout << (valores+i)->x << endl;
        cout << (valores+i)->y << endl;
    }

    return (valores)->x && (valores)->y;
}

int main(){
    srand(time(NULL));

    // for(int i = 0; i<10; i++){
    //     (valores+i)->x = rand() % 100;
    //     (valores+i)->y = rand() % 100;
    // }


    // for(int i = 0; i<10; i++){
    //     cout << (valores+i)->x << endl;
    //     cout << (valores+i)->y << endl;
    // }

    cout << valorPontos();
}