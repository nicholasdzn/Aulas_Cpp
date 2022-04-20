#include <iostream>
using namespace std;

double mediaVetores(double *vt1, double *vt2, double *vt3){
    for(int i=0; i<3; i++){
        *vt3 = (*vt2 + *vt1)/2;
        
        cout << *vt3 << endl;
        vt3++;
        vt2++;
        vt1++;
    }

}

int main(){
    double vet1[3] = {10,2 ,4};
    double vet2[3] = {10,6,12};
    double vet3[3] = {0,0,0};
    mediaVetores(vet1,vet2,vet3);

}