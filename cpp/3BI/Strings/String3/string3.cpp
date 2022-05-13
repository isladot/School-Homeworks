#include <iostream>
#include <string>
using namespace std;

int main(){
	string nome1;
	string nomemin;
	int n, eta1;
	int etamin = 0, posmin = 0;
	cout<< "Inserire il numero di studenti: " <<endl;
	cin>> n;
	cout<< "Inserire il cognome del primo studente: " <<endl;
	cin>> nome1;
	cout<< "Inserire l'eta del primo studente: " <<endl;
	cin>> eta1;
	nomemin = nome1;
	etamin = eta1;
	posmin = 1;
	for (int i = 2; i <= n; i++){
		string nome;
		int eta;
		cout<< "Inserire il cognome dello studete numero " <<i <<":"<<endl;
		cin>> nome;
		cout<< "Inserire l'eta dello studente numero " <<i <<":" <<endl;
		cin>> eta;
		if (eta < etamin){
			etamin = eta;
			nomemin = nome;
			posmin = i;
		}
	}
	cout<< "Lo studente piu' piccolo si chiama " <<nomemin <<" di eta " <<etamin <<" anni e si trova in posizione " <<posmin;
	return 0;
}
