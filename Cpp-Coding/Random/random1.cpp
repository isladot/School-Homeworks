#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    const int MAX_DIM = 10;
    int A[10], B[10], bCont = 0;
    srand(time(0));
    for(int i=0; i<MAX_DIM;i++){
        A[i] = (rand() % 50);
        if((A[i]>=5 && A[i]<=7) || (A[i]>=12 && A[i]<=15)){
            B[bCont] = A[i];
            bCont++;
        }
    }
    cout<<"Questi sono i numeri presenti nell'array A:" <<endl;
    for(int i=0;i<MAX_DIM;i++){
        cout<<A[i] <<" ";
    }
    cout<<endl<<"Questi sono i numeri che rispettavano i criteri per essere inseriti nell'array B:" <<endl;
    for(int i=0;i<bCont;i++){
        cout<<B[i] <<" ";
    }
    return 0;
}
