#include <iostream>
using namespace std;

int main() {
	float temperature[31];
	float tempmax, tempmin;
	for(int i = 0; i < 31; i++) {
		float temp;
		cout<< "Inserire la temperatura del giorno " <<i+1 <<endl;
		cin>> temp;
		temperature[i] = temp;
	}
	tempmax = temperature[0];
	tempmin = temperature[0];
	for(int i = 0; i < 31; i++) {
		if (temperature[i] > tempmax) {
			tempmax = temperature [i];
		}
		else if (temperature[i] < tempmin) {
			tempmin = temperature[i];
		}
	}
	cout<<"La temperatura del giorno piu' caldo e': " <<tempmax <<endl;
	cout<<"La temperatura del giorno piu' freddo e': " <<tempmin <<endl;
	return 0;
}
	
