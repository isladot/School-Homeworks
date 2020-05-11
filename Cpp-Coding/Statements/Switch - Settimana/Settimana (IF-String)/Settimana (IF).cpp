#include <iostream>
#include <string>
using namespace std;

int main() {
	string giorno;
	cout<<"Inserire il giorno: " <<endl;
	cin>>giorno;
	if (giorno=="Lunedi") {
		cout<<"1";
	}
	else {
		if (giorno=="Martedi") {
			cout<<"2";
		}
		else {
			if (giorno=="Mercoledi") {
				cout<<"3";
			}
			else {
				if (giorno=="Giovedi") {
					cout<<"4";
				}
				else {
					if (giorno=="Venerdi") {
						cout<<"5";
					}
					else {
						if (giorno=="Sabato") {
							cout<<"6";
						}
						else {
							if (giorno=="Domenica") {
								cout<<"7";
							}
							else {
								cout<<"Giorno inesistente.";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
