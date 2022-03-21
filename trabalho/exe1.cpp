#include <iostream>
#include <math.h>
#include <iomanip>
#define PI 3.14159265358979323846
using namespace std;

float fatorial(int n){
    float temp = n;  
    if(n < 2){
        return 1;
    }        
    while(n > 1){
        temp = temp * (n - 1);
        n--;
    }
    return temp;
}

float radianos(float angulo){
    angulo = (angulo/1) * (PI/180);
    return angulo;
}

float seno(float angulo, int n){
    float resultado = 0;
    for(int i = 0; i < n; i++){
        resultado += pow(-1, i) * pow(angulo, 2*i+1)/fatorial(2*i + 1);
    }
    return resultado;
}

float cosseno(float angulo, int n){
    float resultado = 0;
    for(int i = 0; i < n; i++){
        resultado += ( (pow(-1, i) * pow(angulo, (2*i)) ) / (fatorial(2*i)) );
    }
    return resultado;
}

float erro(float angulo_function, float angulo_user){
    float resultado = 0;
    if(angulo_function > angulo_user){
        resultado = angulo_function - angulo_user;
    }else{
        resultado = angulo_user - angulo_function;
    }
    return resultado;
}

float porcentagem(float angulo_function, float angulo_user){
    float x, resultado = 0;
    if(angulo_function > angulo_user){
        x = angulo_function;
        angulo_user = angulo_user * 100;
        resultado = angulo_user/x;
    }else{
        x = angulo_user;
        angulo_function = angulo_function * 100;
        resultado = angulo_function/x;
    }
    return resultado;
}

int main(){
    float graus;
    float valor_radianos;
    int n;

    cout << "Digite o valor do angulo em graus: ";
    cin >> graus;
    cout << "Digite o valor do N: ";
    cin >> n;

    valor_radianos = radianos(graus);

    cout << "|--------------VALORES DO SENO--------------|" << endl;
    cout << "Valor do seno para " << n << " termos: " << seno(valor_radianos,n) << endl;
    cout << "Valor de seno para 3 termos: " << seno(valor_radianos,3) << endl;
    cout << "Valor de seno para 40 termos: " << seno(valor_radianos,40) << endl;
    cout << "Valor do seno de " << graus << " Graus, usando a funcao seno(): " << sin(valor_radianos) << endl;
    cout << "Margem de erro absoluto para 3 termos: " << erro(sin(valor_radianos), seno(valor_radianos,3)) << endl;
    cout << "Margem de erro em porcentagem para 3 termos: " << 100 - ((porcentagem(sin(valor_radianos), seno(valor_radianos,3)))) << "%" << endl;
    cout << "Margem de erro absoluto para 40 termos: " << erro(sin(valor_radianos), seno(valor_radianos,40)) << endl;
    cout << "Margem de erro em porcentagem para 40 termos: " << 100 - ((porcentagem(sin(valor_radianos), seno(valor_radianos,40)))) << "%" << endl;
    cout << "|--------------------------------------------|" << endl;
    cout << endl;
    
    cout << "|-------------VALORES DO COSSENO-------------|" << endl;
    cout << "Valor do cosseno para " << n << " termos: " << cosseno(valor_radianos,n) << endl;
    cout << "Valor de cosseno para 3 termos: " << cosseno(valor_radianos,3) << endl;
    cout << "Valor de cosseno para 40 termos: " << cosseno(valor_radianos,40) << endl;
    cout << "Valor do cosseno de " << graus << " Graus, usando a funcao cosseno(): " << cos(valor_radianos) << endl;
    cout << "Margem de erro absoluto para 3 termos: " << erro(cos(valor_radianos), cosseno(valor_radianos,3)) << endl;
    cout << "Margem de erro em porcentagem para 3 termos: " << 100 - ((porcentagem(cos(valor_radianos), cosseno(valor_radianos,3)))) << "%" << endl;
    cout << "Margem de erro absoluto para 40 termos: " << erro(cos(valor_radianos), cosseno(valor_radianos,40)) << endl;
    cout << "Margem de erro em porcentagem para 40 termos: " << 100 - ((porcentagem(cos(valor_radianos), cosseno(valor_radianos,40)))) << "%" << endl;
    cout << "|-------------------------------------------|" << endl;

}