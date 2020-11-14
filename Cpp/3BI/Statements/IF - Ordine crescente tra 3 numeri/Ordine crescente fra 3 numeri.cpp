#include <iostream>
using namespace std;

int main(){
	float n1, n2, n3;
	cout<<"Inserire il primo numero: " <<endl;
	cin>> n1;
	cout<<"Inserire il secondo numero: " <<endl;
	cin>> n2;
	cout<<"Inserire il terzo numero: " <<endl;
	cin>> n3;
	cout<<"Ecco la lista dei numeri in ordine crescente: " <<endl;
	if (n1>n2 && n1>n3) {
		if (n2>n3) {
			cout<< n3 <<endl;
			cout<< n2 <<endl;
			cout<< n1 <<endl;
		}
		else {
			cout<< n2 <<endl;
			cout<< n3 <<endl;
			cout<< n1 <<endl;
		}
	}
	else if (n2>n1 && n2>n3) {
		if (n1>n3) {
			cout<< n3 <<endl;
			cout<< n1 <<endl;
			cout<< n2 <<endl;
		}
		else {
			cout<< n1 <<endl;
			cout<< n3 <<endl;
			cout<< n2 <<endl;
		}
	}
	else if (n3>n1 && n3>n2) {
		if (n1>n2) {
			cout<< n2 <<endl;
			cout<< n1 <<endl;
			cout<< n3 <<endl;
		}
		else {
			cout<< n1 <<endl;
			cout<< n2 <<endl;
			cout<< n3 <<endl;
		}
	}
	return 0;
}
