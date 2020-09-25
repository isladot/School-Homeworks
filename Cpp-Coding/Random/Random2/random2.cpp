#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
    const int MAX_DIM = 1000;
    int A[MAX_DIM], B[MAX_DIM], aCont = 0, bCont = 0, n;
    srand(time(0));
    for(int i=0; i<MAX_DIM;i++){
        n = (rand() % 50) + 1;
        if(n<10){
            A[aCont] = n;
            aCont++;
        } else if(n>50) {
            B[bCont] = n;
            bCont++;
        }
    }
    cout<<"Questi sono i numeri presenti nell'array A:" <<endl;
    for(int i=0;i<aCont;i++){
        cout<<A[i] <<" ";
    }
    cout<<endl<<"Questi sono i numeri presenti nell'array B:" <<endl;
    for(int i=0;i<bCont;i++){
        cout<<B[i] <<" ";
    }
}
