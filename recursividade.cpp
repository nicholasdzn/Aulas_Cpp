#include <iostream>
using namespace std;

int multiplica(int num1,int num2){
    if(num1 == 0 || num2 == 0)
        return 0;
    else if(num2==1)
        return num1;
    else
        return (num1 + multiplica(num1,num2 - 1));
}

int main(){
    cout << multiplica(3,3);
}