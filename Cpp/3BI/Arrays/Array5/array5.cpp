#include <iostream>
using namespace std;

int main(){
	int resto;
	int num[] = {};
	for (int n = 101; n < 200; n++){
		for (int i = 2; i < n; i++){
			bool check;
			resto = n%i;
			if(resto == 0){
				check = true;
			}
			else{
				check = false;
			}
			if(check == true){
				cout<<n <<endl;
				break;
			}
		}
	}
	int contarr = 0;
	cout<<"Ecco i numeri contenuti nell'array: " <<endl;
	for (int i = 0; i < contarr; i++){
		cout<< num[i] <<endl;
	}
}



