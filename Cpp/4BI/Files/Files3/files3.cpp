/*
Dato un file in input contenente dei record con Cognome, Nome ed eta', caricare questi dati in una tabella.
- 1: Ordinare la tabella per cognome crescente.
- 2: Scrivere su file i record aventi eta'>=18 anni
*/

#include <iostream>
#include <string>
using namespace std;

//N. of max people.
const int MAX_PEOPLE = 10;
//N. of current people.
int current_people = 0;

//Person record.
struct person {
    string surname;
    string name;
    int age;
};

//People array of person records.
person people[MAX_PEOPLE];

void sort_table();
void print_overage();

int main(){
    //Files.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //Read file.
    for(int i=0; i<MAX_PEOPLE; i++){
        cin>>people[i].surname >>people[i].name >>people[i].age;
        if(people[i].surname == "") break;
        current_people++;
    }

    sort_table();
    print_overage();

    return 0;
}

void sort_table(){
    person tmp;

    for(int i=0; i<current_people; i++){
        for(int j=i+1; j<current_people; j++){
            if(people[i].age > people[j].age){
                tmp = people[i];
                people[i] = people[j];
                people[j] = tmp;
            }
        }
    }
}

void print_overage(){
    for(int i=0; i<current_people; i++){
        if(people[i].age >= 18) cout<<people[i].surname <<" " <<people[i].name <<" " <<people[i].age <<endl;
    }
}