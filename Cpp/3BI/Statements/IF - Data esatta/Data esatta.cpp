#include<iostream>
using namespace std;
int main() {
	int gg, mm;
	cout<<"Inserisci il mese: " <<endl;
	cin>>mm;
	cout<<"Inserisci il giorno: " <<endl;
	cin>>gg;
	
	if (mm>0 && mm<13) {
		if (mm==2 && gg>0 && gg<29){
		cout<<"La data e' esatta." <<endl;
		}
		else {
			if ((mm==1 || mm==3 || mm==5 || mm==7 ||mm==8 || mm==10 || mm==12)&& gg>0 && gg<32) {
			cout<<"La data e' esatta." <<endl;
			}
			else {
				if ((mm==4 || mm==6 || mm==9 || mm==11)&& gg>0 && gg<31) {
				cout<<"La data e' esatta." <<endl;
				}
				else {
				cout<<"La data e' sbagliata." <<endl;
				}
			}
		}
	}
	else {
		cout<<"La data e' sbagliata. "<<endl;
	}

return 0;
}
