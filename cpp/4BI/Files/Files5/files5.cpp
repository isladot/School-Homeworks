/*
Dato un file in input contenente i seguenti dati dei dipendenti di un'azienda:
Nome, Cognome, Anzianità, Stipendio.
Scrivi un programma che:
- Carichi i dati del file in una tabella.
- Crei un nuovo file contenente nome e cognome dei dipendenti con salario > €1500.
- Data in input un anzianità, stampi nome e cognome dei dipendenti aventi tale anzianità.
*/

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

//N. of max employees;
const int MAX_EMPLOYEES = 10;
//N. of current employees;
int current_employees = 0;

//Employee record.
struct employee {
    string surname;
    string name;
    int seniority;
    float salary;
};

//Employee array (company) of employee records.
employee company[MAX_EMPLOYEES];

void save_employees_by_salary();
void print_employees_by_seniority(int seniority);

//Main function.
int main(){
    //Files.
    ifstream data;
    data.open("input.txt");

    //Read file.
    while(!data.eof()){
        //Get data from file and update Company array.
        data>>company[current_employees].name >>company[current_employees].surname >>company[current_employees].seniority >>company[current_employees].salary;
        //Update N. of current employees.
        current_employees++;
    }

    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Salva su file i dipendenti con salario < 1500 euro." <<endl 
            <<"- 2: Stampa i dipendenti con anzianita' pari ad un valore dato in input." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                save_employees_by_salary();
                break;
            case 2:
                {
                    int seniority;
                    cout<<"Inserire l'anzianita' di riferimento: ";
                    cin>>seniority;
                    print_employees_by_seniority(seniority);
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

void save_employees_by_salary(){
    //Files.
    ofstream output;
    output.open("output.txt");

    for(int i=0; i<current_employees; i++){
        if(company[i].salary > 1500){
            output<<company[i].name <<" " <<company[i].surname <<endl;
        } 
    }

    cout<<"Salvataggio effettuato con successo.";
    
    //Close file.
    output.close();
}

void print_employees_by_seniority(int seniority){
    int seniority_cont = 0;

    for(int i=0; i<current_employees; i++){
        if(company[i].seniority == seniority){
            cout<<company[i].name <<" " <<company[i].surname <<endl;
            seniority_cont++;
        }
    }

    if(seniority_cont == 0) cout<<"Nessun dipendente trovato con questa anzianita'." <<endl;
}