#include <iostream>
using namespace std;

int main(){
	int A[5], n, index = 0;
	float resto;
	for (int i = 0; i<5; i++){
		cout<<"Inserire il numero" <<endl;
		cin>> n;
		resto = n%2;
		if (resto==0){
			A[index] = n;
			index++;
		}
	}
	if (index != 0){
		cout<<"I numeri pari sono: " <<endl;
		for (int i = 0; i<index; i++){
			cout<<A[i] <<endl;
		}
	}
	else {
		cout<<"Non sono presenti numeri pari." <<endl;
	}
	
}

