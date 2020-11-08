//From Luca: ..after a discussion with the teacher he deigned to let us understand how he wanted us to carry out the exercise.

/*
Sia data una tabella contenente i dati relativi agli iscritti ad un’associazione. 
Per ogni iscritto il record ha 4 campi: cognome, data_acconto, acconto, data_saldo. 
Considerare le date come delle variabili string di 6 caratteri (ad esempio 120320 risulta il 12 marzo del 2020). 
Considerare il saldo pari a 200euro, mentre l’acconto è inferiore a 200.
Dapprima il programma esegue il caricamento dell'anagrafica(chiede quanti iscritti sono e carica i cognomi).
Successivamente Usando un menu:
a)aggiornare la tabella quando viene effettuato un pagamento
b)stampi l’elenco degli iscritti che devono pagare ancora il saldo, con il relativo acconto
c)inserisca un nuovo iscritto
d)cancelli un iscritto
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//N. of max subscribers.
const int MAX_SUBS = 10;
//N. of current subscribers.
int current_subs=0;

//Subcription Payment
const int PAYMENT = 200;

//Surname Chars limit.
const int SURNAME_MAX_CHARS = 24;

//Subscriber record.
struct subscriber {
    string surname;
    string date_pay;
    string date_advance;
    float balance;
};

//Subscribers array of records.
subscriber forum[MAX_SUBS];

void init_forum(int initial_subs);
void pay();
void have_to_pay();
void new_sub();
void delete_sub();

int main(){
    cout<<"Inserire la quantita' di iscritti: ";
    cin>>current_subs;
    init_forum(current_subs);
    //Menu
    char option;
    do{
        cout<<"- a: Aggiorna un pagamento." <<endl 
            <<"- b: Stampa gli utenti che devono ancora completare il pagamento." <<endl
            <<"- c: Inserisci un nuovo iscritto." <<endl
            <<"- d: Elimina un iscritto." <<endl
            <<"- q: Termina il programma." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;
        switch(option){
            case 'q':
                cout<<"Chiusura del programma in corso.."<<endl;
                break;
            case 'a':
                pay();
                break;
            case 'b':
                have_to_pay();
                break;
            case 'c':
                if(current_subs < MAX_SUBS) new_sub();
                else cout<<"Raggiunto il limite massimo di iscritti supportati.";
                break;
            case 'd':
                delete_sub();
                break;
            default:
                cout<<"Opzione inserita non disponibile."<<endl;
                break;
        }
    } while(option!='q');
}

void init_forum(int initial_subs){
    for(int i=0; i<initial_subs; i++){
        cout<<"Inserire il cognome dell'iscritto in posizione " <<i+1 <<": ";
        cin>>forum[i].surname;
        forum[i].date_advance="";
        forum[i].date_pay="";
        forum[i].balance=0;
    }
}

void pay(){
    //Getting system date.
    char date[6];
    time_t current_time;
    tm * current_tm;
    time(&current_time);
    current_tm = localtime(&current_time);
    strftime(date, 50, "%d%m%y", current_tm);

    char surname[SURNAME_MAX_CHARS];
    float amount;
    cout<<"Inserire il cognome dell'iscritto da aggiornare: ";
    cin>>surname;
    cout<<"Inserire il totale del pagamento: ";
    cin>>amount;
    for(int i=0;i<current_subs;i++){
        if(forum[i].surname == surname){
            if(amount == PAYMENT){
                forum[i].balance=PAYMENT;
                forum[i].date_pay=date;
            } else if(amount == 0){
                forum[i].balance=amount;
                forum[i].date_advance=date;
            } else {
                forum[i].balance+=amount;
                forum[i].date_advance=date;
            }
        }
    }
}

void have_to_pay(){
    cout<<"Elenco iscritti che devono ancora completare il pagamento del saldo: "<<endl;
    for(int i=0; i<current_subs; i++){
        if(forum[i].balance < PAYMENT){
            cout<<forum[i].surname <<"\t" <<forum[i].balance <<endl;
        }
    }
}

void new_sub(){
    cout<<"Inserire il cognome del nuovo iscritto: ";
    cin>>forum[current_subs].surname;
    forum[current_subs].date_advance="";
    forum[current_subs].date_pay="";
    forum[current_subs].balance=0;
    current_subs++;
}

void delete_sub(){
    bool exist = false;
    int pos=0;
    char surname[SURNAME_MAX_CHARS];
    cout<<"Inserire il cognome dell'iscritto da eliminare: ";
    cin>>surname;
    for(int i=0;i<current_subs;i++){
        if(forum[i].surname == surname){
            exist=true;
            pos=i;
        }
    }
    if(exist){
        for(int j=pos;j<=current_subs;j++){
        forum[j].surname = forum[j+1].surname;
        forum[j].date_advance = forum[j+1].date_advance;
        forum[j].date_pay = forum[j+1].date_pay;
        forum[j].balance = forum[j+1].balance;
        }
        cout<<"Iscritto eliminato correttamente." <<endl;
        current_subs--;
    } else cout<<"Utente inesistente."<<endl;
}