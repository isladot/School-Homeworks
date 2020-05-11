#include <iostream>
using namespace std;
int main() {
	float n, sum;
	int i;
	for (i=0;i<10;i++) {
		cout<<"Inserire il numero: " <<endl;
		cin>>n;
		sum = sum + n; 
	}
	cout<<"La somma e' uguale a: " <<sum <<endl;
	return 0;
}
