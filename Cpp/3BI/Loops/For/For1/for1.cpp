#include <iostream>
using namespace std;

int main() {
int i, gmax, gmin;
float t, t1, tmax, tmin;
cout<< "Inserire la temperatura del giorno 1"<<endl;
cin>>t1;
tmax=t1; 
tmin=t1;
gmax=1;
gmin=1;
for(i=2;i<=31;i++) {
	cout<< "Inserire la temperatura del giorno "<<i <<endl;
	cin>>t;
	if(t>tmax) {
		tmax=t;
		gmax=i;
	}
	if(t<tmin) {
		tmin=t;
		gmin=i;
	}	
}
cout<< "La temperatura max e' " <<tmax <<" del giorno " <<gmax <<endl;
cout<< "La temperatura min e' " <<tmin <<" del giorno " <<gmin <<endl;
}
