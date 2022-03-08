// Nicholas Adorni 2029434
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int mat[5][5];
    int maior = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "insira valores para a matriz" << " linha " << i << " coluna " << j << ": ";
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    cout << "O maior é: " << maior;
    
    return 0;
}