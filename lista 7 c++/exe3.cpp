#include <iostream>

using namespace std;

struct livro{
    string titulo;
    int ano;
    int paginas;
    float preco;
};

int main(){
    livro info[5];
    for(int i = 0; i<5; i++){
    cout << "Digite o titulo do livro: " << endl;
    getline(cin, info[i].titulo);
    cout << "Digite o ano que ele foi feito: " << endl;
    cin >> info[i].ano;
    cout << "Digite o numero de paginas: " << endl;
    cin >> info[i].paginas;
    cout << "Digite o preco do livro: " << endl;
    cin >> info[i].preco;
    }
    float media = 0;
    for(int i = 0; i<5; i++){
        media = media + info[i].paginas;
    }
    cout << "A media de paginas dos livros listados é: " << media/5;
}