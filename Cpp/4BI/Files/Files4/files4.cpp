/*
Inserire i dati in un file e caricare i dati da file su tabella.
I campi del file sono:
- Cognome, Località di provenienza, età, altezza
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//N. of max girls.
const int MAX_GIRLS = 10;
//N. of current girls.
int current_girls = 0;

//Girl record.
struct girl {
    string surname;
    string hometown;
    int age;
    float height;
};

//Girls array of girl records.
girl girls[MAX_GIRLS];

void print_mid_by_hometown(string home);
void print_search_girl(string target);
void print_sorted_girls();
int print_greater_delta_height(float delta, float height);

int main(){
    //Files.
    ifstream data;
    data.open("input.txt");

    //Read file.
    while(!data.eof()){
        //Get data from file and update Girls array.
        data>>girls[current_girls].surname >>girls[current_girls].hometown >>girls[current_girls].age >>girls[current_girls].height;
        //Update N. of girls.
        current_girls++;
    }

    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Stampa l'eta' media delle ragazze da una localita', data in input." <<endl 
            <<"- 2: Stampa la localita' di provenienza e l'eta' di una ragazza." <<endl
            <<"- 3: Stampa in ordine di eta' le ragazze." <<endl
            <<"- 4: Stampa la quantita' di ragazze con una differenza di altezza DELTA." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {
                    string hometown;
                    cout<<"Inserire la localita' di riferimento: ";
                    cin>>hometown;
                    print_mid_by_hometown(hometown);
                }
                break;
            case 2:
                {
                    string target;
                    cout<<"Inserire il cognome della ragazza da cercare: ";
                    cin>>target;
                    print_search_girl(target);
                }
                break;
            case 3:
                print_sorted_girls();
                break;
            case 4:
                {
                    float delta, height;
                    cout<<"Inserire l'altezza di riferimento: ";
                    cin>>height;
                    cout<<"Inserire il delta: ";
                    cin>>delta;
                    cout<<"La quantita' di ragazze con una differenza di " <<delta <<" rispetto a " <<height <<" e': " <<print_greater_delta_height(delta, height) <<endl;
                }
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);

    //Close file.
    data.close();

    return 0;
}

void print_mid_by_hometown(string home){
    float average_age = 0;
    int greater_amount = 0;

    for(int i=0; i<current_girls; i++){
        if(girls[i].hometown == home){
            average_age += girls[i].age;
            greater_amount++;
        }
    }

    average_age /= greater_amount;
    cout<<"L'eta' media delle ragazze proveninenti da " <<home <<" e': " <<average_age <<endl;
}

void print_search_girl(string target){
    int target_pos = -1;
    
    for(int i=0; i<current_girls; i++){
        if(girls[i].surname == target) target_pos = i;
    }
    if(target_pos != -1){
        cout<<"Dati relativi alla ragazza \"" <<target <<"\" sono:" <<endl
            <<"Localita': " <<girls[target_pos].hometown <<endl
            <<"Eta': " <<girls[target_pos].age <<endl;
    }
    else cout<<"Ragazza non trovata." <<endl;
}

void print_sorted_girls(){
    girl tmp;

    for(int i=0; i<current_girls; i++){
        for(int j=i+1; j<current_girls; j++){
            if(girls[i].age > girls[j].age){
                tmp = girls[i];
                girls[i] = girls[j];
                girls[j] = tmp;
            }
        }
    }

    cout<<"Elenco ragazze ordinate per eta':" <<endl;
    for(int i=0; i<current_girls; i++){
        cout<<girls[i].surname <<" " <<girls[i].hometown <<" " <<girls[i].age <<" " <<girls[i].height <<endl;
    }
}

int print_greater_delta_height(float delta, float height){
    int different_cont = 0;

    for(int i=0; i<current_girls; i++){
        if(girls[i].height > (height+delta) || girls[i].height <(height-delta)) different_cont ++;
    }

    return different_cont;
}