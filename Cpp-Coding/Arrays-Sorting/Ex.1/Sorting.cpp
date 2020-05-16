#include <iostream>
using namespace std;

//Global Variables
int n;
int const MAX = 10;
int V[MAX];

//Prototipe Functions
void input();
void sort();

//Main Function
int main(){
    char scelta;
    cout<<"- Opzione 1: Inserisci i numeri nell'array." <<endl;
    cout<<"- Opzione 2: Ordina l'array in senso crescente." <<endl;
    cout<<"- Opzione q: Chiudi il programma." <<endl;
    while(scelta!='q'){
        cout<<endl;
        cout<<"Selezionare opzione desiderata: ";
        cin>>scelta;
        switch(scelta){
            case 'q':
            break;
            case '1':
                input();
            break;
            case '2':
                sort();
            break;
            default:
                cout<<"Opzione non disponibile, riprova." <<endl;
            break;
        }
    }
    cout<<"Programma chiuso correttamente." <<endl;
}

//Body of Prototipe Functions
void input(){
    cout<<"Definire la quantita' di valori da inserire (MAX: 10): ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Inserire il valore in posizione " <<i <<": ";
        cin>>V[i];
    }
}

void sort(){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(V[i]>V[j]){
                temp = V[i];
                V[i] = V[j];
                V[j] = temp;
            }
        }
    }
    cout<<"Valori ordinati correttamente." <<endl <<endl;
    for(int i=0;i<n;i++){
        cout<<"Valore in posizione " <<i <<": " <<V[i] <<endl;
    }
}