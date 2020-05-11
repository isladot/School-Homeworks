#include <iostream>
using namespace std;

const int MAX = 100;
int V[MAX], D[MAX], P[MAX];
int n;
int indexp = 0;
int indexd = 0;

void carica(){
	for (int i=0;i<n;i++){
		cout<<"Inserire il numero in posizione " <<i+1 <<endl;
		cin>>V[i];
	}
}

void pari(){
	int resto;
	for (int i=0;i<n;i++){
		resto = V[i]%2;
		if (resto == 0){
			P[indexp] = V[i];
			indexp++;
		}
	}
}

void dispari(){
	int resto;
	for (int i=0;i<n;i++){
		resto = V[i]%2;
		if (resto != 0){
			D[indexd] = V[i];
			indexd++;
		}
	}
}

void print(){
	cout<<"The even values are: " <<endl;
	for(int i=0;i<indexp;i++){
		cout<<P[i] <<endl;
	}
	cout<<"The odd values are: " <<endl;
	for(int i=0;i<indexd;i++){
		cout<<D[i] <<endl;
	}
}

int main(){
	cout<<"Inserire numoro valori";
	cin>>n;
	carica();
	pari();
	dispari();
	print();
}
