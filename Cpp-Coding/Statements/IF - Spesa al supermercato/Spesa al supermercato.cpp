/* 
Traccia:
Spesa<200 --> No Sconto
200<Spesa<300 --> €5 Sconto
Spesa>300 --> €10 Sconto
*/


#include <iostream>
using namespace std;

int main() {
	// Dichiarazione Variabili
	float spesa, spesaf;
	// Input Variabile "spesa"
	cout<<"Inserire il valore della spesa: " <<endl;
	cin>>spesa;
	// Costrutto IF
	if (spesa<200) {
		spesaf = spesa;
	}
	else {
		if (spesa>=200 && spesa<=300) {
			spesaf = spesa-5;
		}
		else spesaf = spesa-10;
	}
	// Output Variabile "spesaf"
	cout<<"La spesa finale e': " <<spesaf <<endl;
	
	return 0;
}
