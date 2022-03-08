#include <iostream>

using namespace std;

int main(){
    int mat[3][3];
    int vet1[3];
    int vet2[3];
    int linha = 0;
    int coluna = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Insira os valores" << " Linha: " << i << " Coluna: " << j << " ";
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] >= mat[i][0]){
                vet1[i] = mat[i][j]; 
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[j][i] <= mat[0][i]){
                vet2[i] = mat[j][i]; 
            }
        }
    }

    cout << "Vetor 1: ";

    for(int i = 0; i < 3; i++){
        cout << " ";
        cout << vet1[i];
    }
    cout << endl;
    cout << "Vetor 2: ";

    for(int i = 0; i < 3; i++){
        cout << " ";
        cout << vet2[i];
    }
    

}