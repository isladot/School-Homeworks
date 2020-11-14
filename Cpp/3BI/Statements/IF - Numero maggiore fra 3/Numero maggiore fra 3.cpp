//Dati 3 Valori distinti in Input, fornire in Output il maggiore di essi.

#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3;
	cout<<"Inserire il primo numero: " <<endl;
	cin>>n1;
	cout<<"Inserire il secondo numero: " <<endl;
	cin>>n2;
	cout<<"Inserire il terzo numero: " <<endl;
	cin>>n3;
	if ( n1>n2 && n1>n3) {
		cout<<"Il numero maggiore e': " <<n1 <<endl;
	}
	else {
		if ( n2>n1 && n2>n3) {
			cout<<"Il numero maggiore e': " <<n2 <<endl;
		}
		else {
			cout<<"il numero maggiore e': " <<n3 <<endl;
		}
	}
	return 0;
}
