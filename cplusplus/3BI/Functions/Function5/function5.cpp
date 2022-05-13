#include <iostream>
using namespace std;

int const MAX = 10;
int n;
float V[MAX];

void input();
void found();
void change();
void print();

int main(){
	input();
	char scelta;
	while (scelta != 'q'){
		cout<<"Selezionare l'opzione desiderata: " <<endl;
		cout<<"- Opzione 1: Cerca un valore" <<endl;
		cout<<"- Opzione 2: Sostituisci un valore" <<endl;
		cout<<"- Opzione 3: Stampa l'array" <<endl;
		cout<<"- Opzione q: Chiudi il programma" <<endl;
		cin>>scelta;
		switch(scelta){
			case '1':
				found();
			break;
			case '2':
				change();
			break;
			case '3':
				print();
			break;
			default:
				cout<<"Opzione non disponibile. Riprova." <<endl;
			break;
				
		}
	}
}

void input(){
	cout<<"Definire il numero di valori da inserire: ";
	cin>>n;
	if (n<9) {
		for(int i=0; i<n; i++){
		cout<<"Inserire il valore in posizione " <<i <<": ";
		cin>>V[i];
		}		
	}
	else {
		cout<<"Il numero di valori non puo' essere superiore a 10, riprovare." <<endl;
	}
}

void found(){
	int i = 0;
	float value;
	bool found = false;
	cout<<"Inserire il valore da cercare: ";
	cin>>n;
	while ((i<MAX) && (found == false)){
		if (V[i] == value){
			found = true;
		}
		else {
			i++;
		}
	}
	/* Utilizzare il ciclo per i numeri presenti più volte*/
	if (found == true){
		cout<<"Il valore cercato e' presente in posizione: " <<i <<endl;
	}
	else {
		cout<<"Il valore cercato non e' presente all'interno dell'array.";
	}
}

void change(){
	float x;
	int y;
	cout<<"Inserire il nuovo valore: ";
	cin>>x;
	cout<<"Inserire la posizione del nuovo valore: ";
	cin>>y;
	for(int i=0; i<MAX; i++){
		if(i == y){
			V[i] = x;
		}
	}
}

void print(){
	for(int i=0; i<MAX; i++){
		cout<<"Il valore in posizione " <<i <<" e': " <<V[i] <<endl;
	}
}
