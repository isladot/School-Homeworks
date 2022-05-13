/*
Scrivere un programma che inserisce in una tabella i dati di una serie di film, i dati sono composti da un titolo,
autore,incasso e nazionalita(italia,francia,..). Il programma esegua le seguenti funzionalità usando un menu:
1)Stampi l’incasso medio dei film di un determinato autore
2)dato il titolo di un film in input stampi i dati di quel film
3)stampi i dati del film straniero con maggiore incasso
4)dato un incasso in input  , stampi la lista dei titoli di film con incasso superiore all’incasso fornito in input
*/

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

//N. of max films.
const int MAX_FILMS = 10;
//N. of current registered films.
int current_films = 0;

//Film record.
struct film {
    string title;
    string author;
    float collection;
    string nation;
};

//Array of Film records.
film films[MAX_FILMS];

//Init function.
void init_films(int amount);

//Menu option 1.
float print_author_collection(string author);
//Menu option 2.
void print_film_data(string title);
//Menu option 3.
void print_best_foreigner_film();
//Menu option 4.
void print_better_films(float collection);

//Main function.
int main(){
    //Init
    do{
        cout<<"Inserire la quantita' di film da registrare nel catalogom (MAX 10): ";
        cin>>current_films;
        //Error handling.
        if(current_films<=0 || current_films>MAX_FILMS) cout<<"Quantita' di film inserita non valida." <<endl;
    } while(current_films<0 || current_films>MAX_FILMS);
    init_films(current_films);
    //Menu
    int option;
    do{
        cout<<endl
            <<"- 1: Stampa l'incasso medio dei film, dato in input un autore." <<endl 
            <<"- 2: Stampa i dati relativi ad un film, dato in input il titolo." <<endl
            <<"- 3: Stampa i dati relativi al film straniero di maggior successo." <<endl
            <<"- 4: Stampa i titoli dei film con incasso maggiore, dato in input un incasso." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {
                    string author;
                    cout<<"Inserire il nome dell'autore: ";
                    cin>>author;
                    cout<<"L'incasso medio dei film di " <<author <<" e' pari a: " <<print_author_collection(author) <<endl;
                }
                break;
            case 2:
                {
                    string title;
                    cout<<"Inserire il titolo del film: ";
                    cin>>title;
                    print_film_data(title);
                }
                break;
            case 3:
                cout<<"Dati relativi al film straniero di maggior successo: " <<endl;
                print_best_foreigner_film();
                break;
            case 4:
                {
                    float collection;
                    cout<<"Inserire l'incasso da confrontare: ";
                    cin>>collection;
                    print_better_films(collection);
                }
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);
}

void init_films(int amount){
    for(int i=0; i<amount; i++){
        cout<<endl <<"Registrazione del film numero " <<i+1 <<" in corso." <<endl;
        cout<<"Inserire il titolo: ";
        cin>>films[i].title;
        cout<<"Inserire l'autore: ";
        cin>>films[i].author;
        cout<<"Inserire l'incasso: ";
        cin>>films[i].collection;
        cout<<"Inserire la nazionalita': ";
        string nation;
        cin>>nation;
        //NATION TO UPPERCASE
        int j=0;
        while(nation[j]){
            nation[j] = toupper(nation[j]);
            j++;
        }
        // --------------- //
        films[i].nation = nation.substr(0, 2);
    }
}

float print_author_collection(string author){
    int author_films;
    float collection;
    for(int i=0; i<current_films; i++){
        if(films[i].author == author){
            author_films++;
            collection += films[i].collection;
        }
    }
    if(author_films==0){
        collection = 0;
        cout<<"Nessun film registrato per l'autore inserito." <<endl;
    } else collection /= author_films;
    return collection;
}

void print_film_data(string title){
    bool exist=false;
    int film_pos;
    for(int i=0; i<current_films; i++){
        if(films[i].title == title){
            exist=true;
            film_pos=i;
            break;
        }
    }
    if(exist){
        cout<<endl <<"Dati relativi al film \"" <<title <<"\":" <<endl;
        cout<<"Titolo: " <<films[film_pos].title <<endl;
        cout<<"Autore: " <<films[film_pos].author <<endl;
        cout<<"Incasso: " <<films[film_pos].collection <<endl;
        cout<<"Nazionalita': " <<films[film_pos].nation <<endl;
    } else cout<<"Nessun film registrato con il nome inserito." <<endl;
}

void print_best_foreigner_film(){
    int bff_pos=0;
    for(int i=0; i<current_films; i++){
        if(films[i].nation != "IT"){
            if(films[i].collection > films[bff_pos].collection){
                bff_pos = i;
            }
        }
    }
    if(films[bff_pos].nation != "IT"){
        cout<<"Titolo: " <<films[bff_pos].title <<endl;
        cout<<"Autore: " <<films[bff_pos].author <<endl;
        cout<<"Incasso: " <<films[bff_pos].collection <<endl;
        cout<<"Nazionalita': " <<films[bff_pos].nation <<endl;
    } else cout<<"Non sono stati registrati film stranieri." <<endl;
}

void print_better_films(float collection){
    int amount=0;
    for(int i=0; i<current_films; i++){
        if(films[i].collection > collection){
            amount++;
            cout<<endl <<"Dati relativi al film numero " <<amount <<" con un incasso superiore a " <<collection <<"." <<endl;
            cout<<"Titolo: " <<films[i].title <<endl;
            cout<<"Autore: " <<films[i].author <<endl;
            cout<<"Incasso: " <<films[i].collection <<endl;
            cout<<"Nazionalita': " <<films[i].nation <<endl;
        }
    }
    if(amount==0) cout<<"Nessun film registrato con un incasso maggiore." <<endl;
}

