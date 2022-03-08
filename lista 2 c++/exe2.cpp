#include<iostream>

using namespace std;
int main(){
	int i,j,x,y;
	char ch='*';
	cout << "De o numero de linhas e colunas do quadrado: ";
	cin >> x;
	cout << endl;
		for(i=1;i<=x;i++){
			for(j=1;j<=x;j++){
				if (i == 1)
					cout << ch;
				else if (j == 1 || j == x)
					cout << ch;
				else if (i == x)
					cout << ch;
				else
					cout << " ";
			}
			cout << endl;
		}
}