#include <iostream>
using namespace std;

int main(){
    int n = 0, m = 0;
    cout<<"Inserire il numero di righe della matrice: ";
    cin>>n;
    cout<<"Inserire il numero di colonne della matrice: ";
    cin>>m;
    float A[n][m], maxRow = 0, min = 0, media = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Inserire il numero nella riga " <<i+1 <<", nella colonna " <<j+1 <<": ";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        maxRow = 0;
        for(int j=0;j<m;j++){
            if(A[i][j]>maxRow){
                maxRow = A[i][j];
            }
        }
        cout<<"Valore massimo della riga " <<i+1 <<" e': " <<maxRow <<endl;
    }
    min = A[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]<min){
                min = A[i][j];
            }
        }
    }
    cout<<"Valore minino della matrice: " <<min <<endl;
    for(int i=0; i<m; i++){
        media = 0;
        for(int j=0; j<n; j++){
            media += A[j][i];
        }
        media /= n;
        cout<<"Media della colonna " <<i+1 <<" e': " <<media <<endl;
    }
    return 0;
}