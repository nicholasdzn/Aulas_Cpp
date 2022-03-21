#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <unistd.h>

using namespace std;


struct personagem{
    string nome;
    int hp = (rand() % 499) + 501;
    int ataque = 20;
    int defesa = 10;
};

struct boss{
    string nome;
    int hp = (rand() % 499) + 501;
    int ataque = (rand() % 100);
    int defesa = (rand() % 49) + 51;
};

struct minion{
    string nome;
    int hp = (rand() % 200) + 100;
    int ataque = 18;
    int defesa = 10;
};

int batalha1(personagem charstats, minion minionstats){
    string inicio;
    long golpe,golpe2;
    int hp_final;

    cout << "Aperte Enter para começar a batalha";
    getline(cin,inicio);
    if(char inicio = ' '){
    while(minionstats.hp > 0){
        cout << "Voce desferiu um golpe que deixou Chupingole com: ";
        golpe = minionstats.hp - (charstats.ataque-minionstats.defesa);
        cout << golpe << " de vida!" << endl;
        minionstats.hp = golpe;
        sleep(3);
        cout << charstats.nome << " tomou um golpe que lhe deixou com: ";
        golpe2 = charstats.hp - (minionstats.ataque-charstats.defesa);
        cout << golpe2 << " de vida!" << endl;
        charstats.hp = golpe2;
        sleep(3);
        }
    }
    if(minionstats.hp == 0 || minionstats.hp < 0){
        cout << "Acabou voce venceu !!" << endl;
    }
    
    hp_final = golpe2;
    cout << "Lhe restou " << hp_final << " de vida!";
    return hp_final;
}


int main(){
    srand(time(NULL));
    personagem character;
    boss chefe;
    minion inimigo;

    cout << "---------------Bem vindo ao LOST ARK---------------" << endl;
    cout << "Digite o nome para o seu char: ";
    getline(cin, character.nome);
    cout << "---------------------------------------------------" << endl;
    cout << "Informacoes do seu char: " << endl;
    cout << "Nick: " << character.nome << endl;
    cout << "HP: " << character.hp << endl;
    cout << "Ataque: " << character.ataque << endl;
    cout << "Defesa: " << character.defesa << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "No meio do caminho voce encontra chupingole - A Besta Enjaulada" << endl;
    cout << "Stats: " << endl;
    cout << "HP: " << inimigo.hp << endl;
    cout << "Ataque: " << inimigo.ataque << endl;
    cout << "Defesa: " << inimigo.defesa << endl;
    cout << "Prepare - se para a investida!" << endl;
    batalha1(character,inimigo);

}