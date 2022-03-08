#include <stdio.h>

#define LINHA 8
#define COLUNA 8

void matriz_identidade(int mat1[LINHA][COLUNA]){
    int i, j;

    for(i = 0; i<LINHA;i++){
        for(j=0; j<COLUNA;j++){
            if(i==j){
                mat1[i][j] = 1;
            }
            else{
                mat1[i][j] = 0;
            }
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

}


int main(){
    int mat[LINHA][COLUNA];
    matriz_identidade(mat);
}