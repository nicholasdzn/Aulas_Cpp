//Nicholas Adorni 2029434
#include <iostream>

using namespace std;

int main(){
    int mat[3][3];
    int i = 0;
    int j = 0;
    int soma1 = 0;
    int soma2 = 0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << "Insira o valor para a linha: " << i << " e coluna: " << j << ": ";
            cin >> mat[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                soma1 += mat[i][j];
        }
    }
}
    //faz a leitura da diagonal secundaria
    for (i = 2; i >=0; i--){
        soma2 += mat[i][2-i];
    }

cout << "Soma diagonal principal: " << soma1 << " Soma diagonal secundaria: " << soma2;
}