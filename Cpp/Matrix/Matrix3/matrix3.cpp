#include <iostream>
#include <string>
using namespace std;

int main(){
    //Update 02/10/2020
    int tToComp = 0;
    //Variables declaration & inizialization.
    float pDay = 0, pWeek = 0;
    string day;
    //Matrix dimensions.
    const int MATRIX_ROWS = 3; //Temp x day
    const int MATRIX_COLS = 2; //Days x week
    //Matrix declaration.
    int T[MATRIX_ROWS][MATRIX_COLS];
    //Matrix input.
    for(int i=0; i<MATRIX_COLS; i++){
        float x = 0;
        switch(i){
            case 0:
                day = "Lunedi";
                break;
            case 1:
                day = "Martedi";
                break;
            case 2:
                day = "Mercoledi";
                break;
            case 3:
                day = "Giovedi";
                break;
            case 4:
                day = "Venerdi";
                break;
            case 5:
                day = "Sabato";
                break;
            case 6:
                day = "Domenica";
                break;
        }
        for(int j=0; j<MATRIX_ROWS; j++){
            cout<<"Inserire la temperatura " <<j+1 <<" del giorno " <<day <<": ";
            cin>>T[j][i];
        }
        for(int j=0; j<MATRIX_ROWS; j++){
            x += T[j][i];
        }
        pWeek += x;
        pDay = x/MATRIX_ROWS;
        cout<<"Media giornaliera: " <<pDay <<endl;
    }
    pWeek = pWeek/(MATRIX_ROWS*MATRIX_COLS);
    cout<<"Media settimanale: " <<pWeek <<endl;
    cout<<"Inserire una temperatura per fare il confronto: ";
    cin>>tToComp;
    for(int i=0; i<MATRIX_ROWS; i++){
        for(int j=0; j<MATRIX_COLS; j++){
             if(T[i][j] > tToComp){
                 cout<<T[i][j]<<" ";
             }
        }
    }
    return 0;
}
