#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 0;
	string nome;
	cout<<"Inserire il proprio nome: ";
	cin>>nome;
	do {
		cout<<nome <<endl;
		i++;
	}
	while (i<10);
	return 0;
}
