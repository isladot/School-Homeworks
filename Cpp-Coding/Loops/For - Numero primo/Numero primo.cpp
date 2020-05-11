#include <iostream>
using namespace std;

void w(){
	int n, resto, check = 0;
	cout<< "Inserire il numero in questione " <<endl;
	cin>>n;
	int cont = 2;
	resto = 1;
	while(cont < n && resto != 0){
		resto = n%cont;
		if (resto == 0){
			check += 1;
		}
		cont++;
	}
	if (check >= 1) {
		cout<<"Il numero non e' primo" <<endl;
	}
	else {
		cout<<"Il numero e' primo" <<endl;
	}
}

void f(){
	int n, resto, check = 0;
	cout<< "Inserire il numero in questione " <<endl;
	cin>>n;
	for (int i = 2; i < n; i++) {
		resto = n%i;
		if(resto == 0) {
			check += 1;
		}
	}
	if (check >= 1) {
		cout<<"Il numero non e' primo" <<endl;
	}
	else {
		cout<<"Il numero e' primo" <<endl;
	}
}

int main(){
	w();
}

