#include <iostream>

using namespace std;


void trocaValor(int *a, int *b, int *c){
    int tempA = *a;
    int tempB = *b;
    *a = *c;
    *b = tempA;
    *c = tempB;
    cout << *a << endl << *b << endl << *c;
}

int main(){
    int a=5, b=7, c=9;
    trocaValor(&a,&b,&c);
}