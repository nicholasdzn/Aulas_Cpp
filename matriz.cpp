#include <iostream>
using namespace std;

struct lost_ark{
    string nome;
    string classe;
    float ilv;
    int tier;
};

int main(){
    lost_ark boneco;

    cout << "Nome: " << endl;
    getline(cin, boneco.nome);
    cout << "Classe: " << endl;
    getline(cin, boneco.classe);
    cout << "Gear power: " << endl;
    cin >> boneco.ilv;
    cout << "Tier: " << endl;
    cin >> boneco.tier;

    cout << boneco.nome << endl << boneco.classe << endl << boneco.ilv << endl << boneco.tier;
}