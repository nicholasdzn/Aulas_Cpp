#include <iostream>

using namespace std;

struct funcionario{
    long codigo;
    string nome;
    string dep;
    int ano_admt;
    int ano_demt;
    double salario;
};

void dados(funcionario parametros){
    cout << endl << "Informacoes: " << endl;
    cout << "Codigo: " << parametros.codigo << endl;
    cout << "Nome: " << parametros.nome << endl;
    cout << "Departamento: " << parametros.codigo << endl;
    cout << "Ano de admissao: " << parametros.ano_admt << endl;
    cout << "Ano de demissao: " << parametros.ano_demt << endl;
    cout << "Salario: " << parametros.salario << endl;
}

int main(){
    funcionario info;
    cout << "Codigo de empregado: " << endl;
    cin >> info.codigo;
    cout << "Digite seu nome: " << endl;
    cin >> info.nome;
    cout << "Digite o nome do departamento: " << endl;
    cin >> info.dep;
    cout << "Digite o ano de admissao: " << endl;
    cin >> info.ano_admt;
    cout << "Digite o ano de demissao: " << endl;
    cin >> info.ano_demt;
    cout << "Informe o Salario: " << endl;
    cin >> info.nome;
    
    dados(info);
}