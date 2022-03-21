#include <iostream>
using namespace std;

int main(){
    int hp_a = 300;
    int atq_a = 12;
    int def_a = 5;
    int hp_b = 200;
    int atq_b = 10;
    int def_b = 3;
    int golpe1;
    int golpe2;

    golpe1 = hp_b - (atq_a - def_b);

    cout << golpe1 << endl;
    cout << hp_b;

    // while(hp_b > 0){
    //     golpe1 = hp_b - (atq_a - def_b);
    //     cout << golpe1 << endl;
    //     golpe2 = hp_a - (atq_b - def_a);
    //     cout << golpe2 << endl;

    // }
    // cout << "Acabou !";

}