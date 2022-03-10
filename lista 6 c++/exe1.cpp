#include <iostream>
#include <iomanip>

using namespace std;

struct veiculo{
    string marca;
    string modelo;
    int ano_fab;
    long renavam;
};

void dados(veiculo parametros){
    cout << endl << endl << "Informações do Veiculo: " << endl;
    cout << "Marca: " << parametros.marca << endl;
    cout << "Modelo: " << parametros.modelo << endl;
    cout << "Ano: " << parametros.ano_fab << endl;
    cout << "Renavam: " << parametros.renavam << endl;
}

int main(){
    veiculo carro;
    cout << "Digite o nome da Marca: " << endl;
    cin >> carro.marca;
    cout << "Digite o modelo: " << endl;
    cin >> carro.modelo;
    cout << "Digite o ano de fabricacao: " << setw;
    cin >> carro.ano_fab;
    cout << "Digite o numero do renavam: " << endl;
    cin >> carro.renavam;
    dados(carro);
}

