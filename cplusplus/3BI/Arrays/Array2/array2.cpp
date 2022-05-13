#include <iostream>
#include <string>
using namespace std;

int main(){
	string alunni[10], alunno;
	int eta[10], etalu;
	int contarray = 0;
	for (int i = 0; i<10; i++){
		cout<< "Inserire il cognome e l'eta' dell'alunno numero " <<i+1 <<endl;
		cin>>alunno;
		cin>>etalu;
		if (etalu >= 18){
			alunni[contarray] = alunno;
			eta[contarray] = etalu;
			contarray++;
		}
	}
	cout<< "Gli alunni maggiorenni sono: " <<endl;
	for (int i = 0; i < contarray; i++){
		cout<<alunni[i] <<" " <<eta[i] <<endl;
	}
	return 0;
}
