#include <iostream>
using namespace std;

int main(){
	int V[10]; 
	int sum = 0;
	float media;
	for (int i = 0; i<10; i++){
		cout<< "Inserire il valore in posizione " <<i+1 <<endl;
		cin>> V[i];
		sum += V[i];
	}
	media = sum/10;
	for (int i = 0; i<10; i++){
		if (V[i] > media){
			cout<<"Il valore " <<V[i] <<" e' superiore alla media." <<endl;
		}
	}
	return 0;	
}
