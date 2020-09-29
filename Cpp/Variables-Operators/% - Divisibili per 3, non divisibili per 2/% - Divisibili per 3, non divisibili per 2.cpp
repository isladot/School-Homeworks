#include <iostream>
using namespace std;

int main(){
	for (int i=100; i<201; i++){
		int x = i % 3;
		int y = i % 2;
		if (x == 0 && y != 0){
			cout<<i <<endl;
		} 
	}
	return 0;
}

