#include <iostream>
#include <string>
using namespace std;

int const MAX = 1000;
string Cog[MAX];
int Num[MAX];
int cont = 0;

void insert();
void search();
void print();
void del();

int main(){
    char scelta;
    cout<<"- Opzione 1: Nuovo contatto." <<endl;
	cout<<"- Opzione 2: Cerca contatto." <<endl;
	cout<<"- Opzione 3: Stampa la rubrica." <<endl;
    cout<<"- Opzione 4: Cancella un contatto." <<endl;
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
                search();
            break;
            case '3':
                print();
            break;
            case '4':
                del();
            break;
            default:
                cout<<"Opzione non disponibile, riprova." <<endl;
            break;
        }
    }
    cout<<"Programma chiuso correttamente." <<endl;
}

void insert(){
    if(cont != MAX){
        cout<<"Inserire il cognome del contatto: ";
        cin>>Cog[cont];
        cout<<"Inserire il numero del contatto: ";
        cin>>Num[cont];
        cont++;
    }
    else{
        cout<<"Rubrica piena, eliminare prima un contatto." <<endl;
    }
}

void search(){
    bool check = false;
    string cog;
    cout<<"Inserire il cognome del contatto da cercare: ";
    cin>>cog;
    int i = 0;
    while(i<cont && check!=true){
        if(cog == Cog[i]){
            check = true;
        }
        else{
            i++;
        }
    }
    if(check==true){
        cout<<Cog[i] <<": " <<Num[i];
    }
    else{
        cout<<"Contatto inesistente." <<endl;
    }
}

void print(){
    for(int i=0; i<cont; i++){
        cout<<Cog[i] <<": " <<Num[i] <<endl;
    }
}

void del(){
    bool check = false;
    string cog;
    cout<<"Inserire il cognome del contatto da eliminare: ";
    cin>>cog;
    int i = 0;
    while(i<cont && check!=true){
        if(cog == Cog[i]){
            int x = i;
            while (x<=cont){
                Cog[x] = Cog[x+1];
                Num[x] = Num[x+1];
                x++;
            }
            cont--;
            check = true;
        }
        i++;
    }
    cout<<"Contatto eliminato correttamente." <<endl;
}
