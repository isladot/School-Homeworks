#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Inserire il numero: ";
	cin>>n;
	switch (n){
		case 1:
			cout<<"Lunedi";
		break;
		case 2:
			cout<<"Martedi";
		break;
		case 3:
			cout<<"Mercoledi";
		break;
		case 4:
			cout<<"Giovedi";
		break;
		case 5:
			cout<<"Venerdi";
		break;
		case 6:
			cout<<"Sabato";
		break;
		case 7:
			cout<<"Domenica";
		break;
		default:
			cout<<"Il numero inserito non corrisponde ad un giorno.";
		break;
	}
	return 0;
	
}
