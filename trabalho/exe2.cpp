#include <iostream>

using namespace std;

int main(){
    int matriz[4][4];
    int vet_coluna[4];
    int vet_linha[4];
    int diagonalP = 0, diagonalS= 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite um numero para a linha " << i << " e coluna " << j << " : " ;
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
		diagonalP += matriz[i][i];
	}

    for (int i = 0; i < 4; i++) {
		diagonalS += matriz[i][4-i-1];
	}

    for(int i = 0; i < 4; i++){
        vet_linha[i] = 0;
        for(int j = 0; j < 4; j++){
            vet_linha[i] += matriz[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        vet_coluna[i] = 0;
        for(int j = 0; j < 4; j++){
            vet_linha[i] += matriz[j][i];
        }
    }

    for(int i = 0; i < 4; i++){
        cout << "[";
        for(int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "]\n";
    }

    for(int i = 1; i < 4; i++){
        if(vet_linha[i] != vet_linha[i-1]){
            cout << "Valores diferentes, nao e um quadrado mágico";
            abort();
        }else if(vet_coluna[i] != vet_coluna[i-1]){
            cout << "Valores diferentes, nao e um quadrado mágico";
            abort();
        }
    }

    if(diagonalP == diagonalS){
        cout << "Eh um quadrado magico";
    }else{
        cout << "Nao eh um quadrado magico";
    }
}