#include <iostream>
using namespace std;

int main(){
	int D[10], n, resto;
	int contarray = 0;
	while (contarray < 10){
		cout<< "Inserire il numero" <<endl;
		cin>>n;
		resto = n%2;
		if (resto != 0){
			D[contarray] = n;
			contarray++;
		}
	}
	cout<< "I numeri dispari all'interno dell'array sono:" <<endl;
	for (int i = 0; i<10; i++){
		cout<< D[i] <<endl;
	}
	return 0;
}
