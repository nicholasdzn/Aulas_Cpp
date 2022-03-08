#include <iostream>

using namespace std;

int main(){
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um numero: ";
            cin >> mat1[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um numero: ";
            cin >> mat2[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat1[i][j] > mat2[i][j]){
            mat3[i][j] = mat1[i][j];
            } else {
                mat3[i][j] = mat2[i][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
            cout << "[ ";
        for(int j = 0; j < 3; j++){
            cout << " ";
            cout << mat3[i][j];
        }
        cout << " ]\n";
    }

    
}