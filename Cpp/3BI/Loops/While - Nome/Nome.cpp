#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 0;
	int n;
	string nome;
	cout<<"Inserire il proprio nome: ";
	cin>>nome;
	cout<<"Inserire il numero di volte: ";
	cin>>n;
	while (i<n) {
		cout<<nome <<endl;
		i++;
	}
return 0;
}

