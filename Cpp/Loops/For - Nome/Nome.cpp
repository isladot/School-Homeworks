#include <iostream>
#include <string>
using namespace std;
int main() {
	string nome;
	int i, n;
	cout<<"Inserire il proprio nome: ";
	cin>>nome;
	cout<<"Indicare per quante volte desidera ripetere il nome: ";
	cin>>n;
	for (i=0;i<n;i++) {
		cout<<nome <<endl;
	}
	return 0;
}
