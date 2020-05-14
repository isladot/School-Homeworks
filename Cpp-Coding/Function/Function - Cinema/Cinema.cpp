#include <iostream>
#include <string>
using namespace std;

//Global Variables
int n;
float media;
int const MAX = 100;
string Titolo[MAX];
float Incasso[MAX];

//Prototipe Functions
void insert();
float incasso(float x);
float top(float y);
int med(int m);
float incassomed(float x);

//Main Function
int main(){
    char scelta;
    cout<<"- Opzione 1: Registra la lista dei film." <<endl;
	cout<<"- Opzione 2: Stampa la lista dei film con guadagno superiore, dato un valore di riferimento." <<endl;
	cout<<"- Opzione 3: Titolo del film con guadagno superiore a tutti." <<endl;
    cout<<"- Opzione 4: Calcola la media degli incassi." <<endl;
    cout<<"- Opzione 5: Stampa la lista dei film con guadagno superiore alla media. WARNING: Eseguire prima opzione 4." <<endl;
	cout<<"- Opzione q: Chiudi il programma." <<endl;
    while(scelta != 'q'){
        cout<<endl;
        cout<<"Selezionare l'opzione desiderata: ";
        cin>>scelta;
        switch(scelta){
            case 'q':
            break;
            case '1':
                insert();
            break;
            case '2':
                float val;
                cout<<"Inserire il valore di riferimento: ";
                cin>>val;
                incasso(val);
            break;
            case '3':
                float max;
                max = Incasso[0];
                top(max);
            break;
            case '4':
                media = med(n);
                cout<<"Media calcolata correttamente." <<endl;
            break;
            case '5':
                incassomed(media);
            break;
            default:
                cout<<"Opzione non disponibile, riprova." <<endl;
            break;
        }
    }
    cout<<"Programma chiuso correttamente." <<endl;
}

//Body of Prototipe Functions
void insert(){
    cout<<"Inserire il numero di film da inserire: ";
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"Inserire il titolo del film: ";
        cin>>Titolo[i];
        cout<<"Inserire l'incasso del film: ";
        cin>>Incasso[i];
    }
}

float incasso(float x){
    for(int i=0;i<n;i++){
        if(Incasso[i]>x){
            cout<<"Il film: " <<Titolo[i] <<" ha un incasso superiore al valore di riferimento." <<endl;
        }
    }
}

float top(float y){
    int posMax;
    for(int i=0;i<n;i++){
        if(Incasso[i]>y){
            y = Incasso[i];
            posMax = i;
        }
    }
    cout<<"Il film: " <<Titolo[posMax] <<" ha incassato piu' di tutti gli altri film." <<endl;
}

int med(int m){
    float sum = 0, media = 0;
    for(int i=0;i<n;i++){
        sum += Incasso[i];
    }
    media = sum/m;
    return media;
}

float incassomed(float x){
    for(int i=0;i<n;i++){
        if(Incasso[i]>x){
            cout<<"Il film: " <<Titolo[i] <<" ha un incasso superiore alla media." <<endl;
        }
    }
}
