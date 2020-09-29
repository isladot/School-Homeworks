#include <iostream>
using namespace std;

const int MAX = 10;
int V1[MAX], V2[MAX];
int n1, n2;
int cont = 0;

void caricaV1(){
	for (int i = 0;i<n1;i++){
		cout<<"Inserire il valore in posizione " <<i <<": ";
		cin>>V1[i];
	}
}

void caricaV2(){
	for (int i = 0;i<n2;i++){
		cout<<"Inserire il valore in posizione " <<i <<": ";
		cin>>V2[i];
	}
}

int check(int v1){
	for (int i = 0;i<n2;i++){
		if (v1 == V2[i]){
			cont++;
		}
	}
}

int main(){
	cout<<"Inserire il numero di elementi del primo vettore: ";
	cin>>n1;
	caricaV1();
	cout<<"Inserire il numero di elementi del secondo vettore: ";
	cin>>n2;
	caricaV2();
	for(int i = 0;i<n1;i++){
		check(V1[i]);
	}
	cout<<"Il numero di valori presenti in entrambi gli array e': " <<cont <<endl;
	return 0;
}

