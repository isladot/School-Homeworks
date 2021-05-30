//Dati 3 Valori distinti in Input, fornire in Output l'ordine di essi.

#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3, primo, secondo, terzo;
	cout<<"Inserire il primo numero: " <<endl;
	cin>>n1;
	cout<<"Inserire il secondo numero: " <<endl;
	cin>>n2;
	cout<<"Inserire il terzo numero: " <<endl;
	cin>>n3;
	if ( n1>n2 && n1>n3 ){
		primo = n1;
	}
	else {
		if ( n2>n1 && n2>n3 ){
			primo = n2;
		}
		else{
			primo = n3;
		}
	}
	if ( n2<primo && n2>n3) {
		secondo = n2;
		terzo = n3;
	}
	else {
		if ( n1<primo && n1>n3) {
			secondo = n1;
			terzo = n3;
		}
		else {
			if (n1>n2) {
				secondo = n1;
				terzo = n2;
			}
			else {
				secondo = n2;
				terzo = n1;
			}
		}
	}
	cout<<"Primo: " <<primo <<endl;
	cout<<"Secondo: " <<secondo <<endl;
	cout<<"Terzo: " <<terzo <<endl;
	return 0;
}
	
