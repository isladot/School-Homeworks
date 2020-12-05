/*
Di un prodotto sono forniti i quantitativi venduti a N clienti. In una tabella sono presenti:
- Nome cliente
- Quantità venduta
Scrivi un programma che dopo aver caricato i dati da un file esterno permetta di:
- Calcolare e stampare la media delle vendite di quantitativi superiori a un dato valore fornito in input.
- Trovare il cliente a cui è stata venduta la quantità massima e stamparne il nome.
- Dato il nome di un cliente, stampare la vendita o una segnalazione se non presente.
- Ordinare e stampare i clienti in ordine alfabetico.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//N. of max customers.
const int MAX_CUSTOMERS = 10;
//N. of current registered customers.
int current_customers = 0;

//Customer record.
struct customer {
    string name;
    int amount;
};

//Customers array of Customer records.
customer customers[MAX_CUSTOMERS];

void print_greater_average(int min_amount);
void print_top_customer();
void print_search_customer(string target);
void print_ordered_customers();

//Main function.
int main(){
    fstream data;

    //Open file.
    data.open("input.txt", ios::in);

    //Read file.
    while(!data.eof()){
        //Get name and amount from file and update Customers array.
        data>>customers[current_customers].name >>customers[current_customers].amount;
        //Update n. of customers.
        current_customers++;
    }

    //Menu
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Stampa la media delle vendite di quantitativi superiori, dato in input un valore." <<endl 
            <<"- 2: Stampa il nome del cliente a cui è stata venduta la quantità massima." <<endl
            <<"- 3: Stampa la vendita corrispondete, dato in inpur il nome di un cliente." <<endl
            <<"- 4: Stampa in ordine alfabetico i clienti." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {
                    int min_amount;
                    cout<<"Inserire la quantita' minima di riferimento: ";
                    cin>>min_amount;
                    print_greater_average(min_amount);
                }
                break;
            case 2:
                print_top_customer();
                break;
            case 3:
                {
                    string target;
                    cout<<"Inserire il nome del cliente da cercare: ";
                    cin>>target;
                    print_search_customer(target);
                }
                break;
            case 4:
                print_ordered_customers();
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

void print_greater_average(int min_amount){
    float average = 0;
    int greater_amount = 0;

    for(int i=0; i<current_customers; i++){
        if(customers[i].amount > min_amount){
            average += customers[i].amount;
            greater_amount++;
        }
    }

    average /= greater_amount;
    cout<<"La media delle vendite, con quantitativi superiori a \"" <<min_amount <<"\" e': " <<average <<endl;
}

void print_top_customer(){
    int top_pos = 0;

    for(int i=0; i<current_customers; i++){
        if(customers[i].amount > customers[top_pos].amount){
            top_pos = i;
        }
    }

    cout<<"Il cliente con vendite superiori e': " <<customers[top_pos].name <<" con un quantitativo pari a " <<customers[top_pos].amount <<endl;
}

void print_search_customer(string target){
    int target_pos = -1;
    
    for(int i=0; i<current_customers; i++){
        if(customers[i].name == target) target_pos = i;
    }
    if(target_pos != -1) cout<<"La quantita' di vendite, per il cliente \"" <<customers[target_pos].name <<"\" e' " <<customers[target_pos].amount <<endl;
    else cout<<"Cliente \"" <<target <<"\" non trovato." <<endl;
}

void print_ordered_customers(){
    customer tmp;

    for(int i=0; i<current_customers; i++){
        for(int j=i+1; j<current_customers; j++){
            if(customers[i].name > customers[j].name){
                tmp = customers[i];
                customers[i] = customers[j];
                customers[j] = tmp;
            }
        }
    }
    for(int i=0; i<current_customers; i++){
        cout<<customers[i].name <<"\t" <<customers[i].amount <<endl;
    }
}