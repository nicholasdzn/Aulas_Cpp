#include <iostream>
using namespace std;

int main(){
    int A[9];
    int prob = 75;
    int falha = 0;

    for(int i=0; i<9; i++){
        cout << "Row 1" << " * " << endl;
        cout << "Falhou? Sim (1) Nao (2)" << endl;
        cin >> falha;
        if(falha == 1){
            A[i]=0;
        }else{
            A[i]=1;
        }
        falha = 0;
    }

    for(int i=0; i<9; i++){
        cout << " " << A[i];
    }
}