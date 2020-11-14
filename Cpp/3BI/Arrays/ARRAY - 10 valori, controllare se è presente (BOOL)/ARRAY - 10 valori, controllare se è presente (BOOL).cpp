#include <iostream>
using namespace std;

int main(){
	int V[10];
	bool check = false;
	int num, pos = 0;
	for (int i = 0; i<10; i++){
		cout<<"Inserire il numero in posizione " <<i+1 <<endl;
		cin>> V[i];
	}
	cout<<"Inserire il numero da confrontare" <<endl;
	cin>> num;
	for (int i = 0; i<10; i++){
		if (num == V[i]){
			check = true;
			pos = i;
		}
	}
	if (check == true){
		cout<< "Il numero e' presente nell'array, si trova in posizione " <<pos+1 <<endl;
	}
	else {
		cout<< "Il numero non e' presente nell'array.";
	}
}
