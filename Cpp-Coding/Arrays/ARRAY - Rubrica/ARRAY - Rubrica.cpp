#include <iostream>
#include <string>
using namespace std;

int main(){
	int Tel[100];
	string Cog[100];
	int cell, scelta, index = 0;
	string cogn;
	int cellcerc;
	string cogncerc;
	bool check = false;
	int cont;
	cout<< "- 0: Chiudi il programma." <<endl;
	cout<< "- 1: Inserisci un nuovo contatto alla rubrica." <<endl;
	cout<< "- 2: Stampa l'intera rubrica." <<endl;
	cout<< "- 3: Ricerca un contatto." <<endl;
	cout<< "- 4: Eliminare un contatto." <<endl;
	while (scelta != 0){
		cout<<endl;
		cout<< "Selezionare l'opzione desiderata: ";
		cin>>scelta;
		switch(scelta){
			case 0:
			break;
			case 1:
				cout<< "Inserire il cognome: ";
				cin>>cogn;
				Cog[index] = cogn;
				cout<< "Inserire il numero di telefono: ";	
				cin>>cell;
				Tel[index] = cell;
				index++;
			break;
			case 2:
				if(index != 0){
					for(int i = 0; i<index; i++){
						cout<<"Contatto " <<i+1 <<": " <<Cog[i] <<" " <<Tel[i] <<endl;
					}
				}
				else{
					cout<<"Nessun contatto presente nella rubrica." <<endl;
				}
			break;
			case 3:
				check = false;
				cout<<"Inserire il cognome del contatto da cercare: ";
				cin>>cogncerc;
				for (int i = 0; i<index; i++){
					if(cogncerc == Cog[i]){
						check = true;
						cellcerc = i;
					}
				}
				if (check == true){
					cout<<"In numero del contatto desiderato e': " <<Tel[cellcerc] <<endl;
				}
				else{
					cout<<"Il contatto desiderato non e' presente della rubrica." <<endl;
				}
			break;
			case 4:
				check = false;
				cout<<"Inserire il cognome del contatto da eliminare: ";
				cin>>cogncerc;
				for (int i = 0; i<index; i++){
					if(cogncerc == Cog[i]){
						check = true;
						cont = i;
					}
				}
				if (check == true){
					for (int d = cont; d<index; d++){
						Cog[d] = Cog[d+1];
						Tel[d] = Tel[d+1];
					}
					index -= 1;
					cout<< "Contatto eliminato." <<endl;
				}
				else {
					cout<< "Contatto non presente." <<endl;
				}
			break;
			default:
				cout<< "Opzione non disponibile." <<endl;
			break;
		}
	}
	cout<< "Programma chiuso correttamente.";
	return 0;
}

