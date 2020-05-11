#include <iostream>
#include <string>
using namespace std;
int main() {
	string n1,n2,n3;
	float e1,e2,e3;
	cout<<"Inserisci i nomi: "<<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cout<<"Inserisci l'eta: "<<endl;
	cin>>e1;
	cin>>e2;
	cin>>e3;
	if (e1>e2 && e1>e3) {
		cout<<"Il maggiore e': " <<n1 <<endl;
	}
	else if (e2>e3) {
		cout<<"Il maggiore e': " <<n2 <<endl;
	}
	else {
		cout<<"Il maggiore e': " <<n3 <<endl;
	}
	return 0;
}
