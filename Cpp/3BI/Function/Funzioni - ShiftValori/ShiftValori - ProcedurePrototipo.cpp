#include <iostream>
using namespace std;

int const MAX = 10;
float V[MAX];
int n;

void input();
void insert();
void del();
void print();

int main(){
    input();
	char scelta;
	cout<<endl;
	cout<<"- Opzione 1: Inserisci un nuovo valore." <<endl;
	cout<<"- Opzione 2: Elimina un valore." <<endl;
	cout<<"- Opzione 3: Stampa l'array." <<endl;
	cout<<"- Opzione q: Chiudi il programma." <<endl;
    while (scelta!='q'){
        cout<<endl;
        cout<<"Selezionare l'opzione desiderata: ";
        cin>>scelta;
        switch(scelta){
            case '1':
                insert();
            break;
            case '2':
                del();
            break;
            case '3':
                print();
            break;
            case 'q':
            break;
            default:
                cout<<"Opzione non disponibile, riprova." <<endl;
            break;
        }
    }
    cout<<"Programma chiuso correttamente." <<endl;
}

void input(){
	cout<<"Inserire il numero di valori contenuti nell'array [max:9]: ";
	cin>>n;
	if(n<10 && n>0){
        for(int i=0;i<n;i++){
            cout<<"Inserire il valore in posizione " <<i <<": ";
            cin>>V[i];
        }
	} 
    else {
        cout<<"Non e' possibile inserire un numero di valori minore di 0 o maggiore di 9, riprova.";
    }
}

void insert(){
    float value;
    int pos;
    cout<<"Inserire il nuovo valore da aggiungere: ";
    cin>>value;
    cout<<"Inserire la posizione del nuovo valore: ";
    cin>>pos;
    if(pos<=9 && pos>=0){
        for(int i=0;i<n;i++){
            if(pos == i){
                for(int p=n;p>=pos;p--){
                    V[p+1]=V[p];
                }
            }
        }
        V[pos]=value;
        cout<<"Valore aggiunto correttamente." <<endl;
        n+=1;
    }
    else {
        cout<<"Non e' possibile inserire il nuovo valore nella posizione indicata, riprova.";
    }
}

void del(){
    int pos;
    cout<<"Inserire la posizione del valore da eliminare: ";
    cin>>pos;
    if(pos<n && pos>=0){
        for(int i=0;i<n;i++){
            if(pos == i){
                for(int p=pos;p<MAX;p++){
                    V[p]=V[p+1];
                }
            }
        }
        cout<<"Valore eliminato correttamente." <<endl;
        n-=1;
    }
    else {
        cout<<"Non e' possibile cancellare il valore nella posizione indicata, riprova.";
    }
}

void print(){
    for(int i=0;i<n;i++){
        cout<<"Valore in posizione " <<i <<": " <<V[i] <<endl;
    }
}
