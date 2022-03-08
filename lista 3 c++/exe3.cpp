//Nicholas Adorni 2029434
#include <iostream>
#define L 5
#define C 5
using namespace std;
int main(){
	int i, j, m[L][C], soma[C];

	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			if(i==j){
				m[i][j] = 1;
			} else {
				m[i][j] = 0;
			}
		}
	}

	for(i=0; i < L; i++){
        cout << "[";
		for (j=0; j < C; j++){
			soma[j] = soma[j]+(m[i][j]);
            cout << m[i][j];
		}
        cout << "]\n";
    }
	return 0;
}