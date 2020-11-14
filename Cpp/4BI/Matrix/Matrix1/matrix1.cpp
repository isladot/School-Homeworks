#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
    //Matrix dimesions.
    const int MATRIX_ROWS = 3;
    const int MATRIX_COLS = 4;
    //Matrix declaration.
    int A[MATRIX_ROWS][MATRIX_COLS], n;
    srand(time(0));
    //Matrix input.
    for(int i=0; i<MATRIX_ROWS; i++){
        for(int j=0; j<MATRIX_COLS; j++){
            n = (rand() % 10) + 1;
            A[i][j] = n;
        }
    }
    //Matrix output.
    for(int i=0; i<MATRIX_ROWS; i++){
        for(int j=0; j<MATRIX_COLS; j++){
            cout<<A[i][j] <<"\t";
        }
        cout<<endl;
    }
}
