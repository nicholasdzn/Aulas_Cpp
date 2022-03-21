#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct DadosAluno{
    float media;
    int idade;
};

int main(){
    DadosAluno info[10];
    for(int i = 0; i < 10; i++){
    cout << "Digite a sua idade: " << endl;
    cin >> info[i].idade;
    cout << "Digite sua media: " << endl;
    cin >> info[i].media;
    }
    for(int i = 0; i < 10; i++){
    cout << "Idade: " << info[i].idade << endl;
    cout << "Media: " << info[i].media << endl;
    }
}