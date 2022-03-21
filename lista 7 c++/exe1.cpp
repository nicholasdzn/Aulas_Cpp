#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct DadosAluno{
    float media;
    int idade;
};

int main(){
    DadosAluno info;
    cout << "Digite a sua idade: " << endl;
    cin >> info.idade;
    cout << "Digite sua media: " << endl;
    cin >> info.media;
    
    cout << "Idade: " << info.idade << endl;
    cout << "Media: " << info.media;
}