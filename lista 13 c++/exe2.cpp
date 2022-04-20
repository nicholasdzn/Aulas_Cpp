#include <iostream>

using namespace std;


int fatorial(int *num){
    int temp = 1;
    while (*num > 1)
        temp *= (*num)--;
    return temp;
}

int main(){
    int fat;
    cout << "digite um numero: ";
    cin >> fat;
    
    int temp;
    temp = fatorial(&fat);
    cout << temp;
}