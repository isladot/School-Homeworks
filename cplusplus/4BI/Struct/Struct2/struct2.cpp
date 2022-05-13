//From Luca: ..IS THIS A FKING EXERCISE TRACK?

/*
Sia data una tabella contenente i dati relativi agli iscritti ad un’associazione. 
Per ogni iscritto il record ha 4 campi: cognome, data_acconto, acconto, data_saldo. 
Considerare le date come delle variabili string di 6 caratteri (ad esempio 120320 risulta il 12 marzo del 2020). 
Considerare il saldo pari a 200euro, mentre l’acconto è inferiore a 200.
Usando un menu: 
a)aggiornare la tabella quando viene effettuato un pagamento 
b)stampi l’elenco degli iscritti che devono pagare ancora il saldo, con il relativo acconto
*/

#include <iostream>
using namespace std;

//N. of subscribers.
const int SUBS = 5;
int ACTUAL_SUBS = 0;

//Subcription Payment
const int TO_PAY = 200;

//Surname Chars limit.
const int SURNAME_MAX_CHARS = 24;
//Date Chats limit (6 char + the actual \n char.)
const int DATE_CHARS = 7; 

//Subscriber record.
struct subscriber {
    char surname[SURNAME_MAX_CHARS];
    char date_topay[DATE_CHARS];
    char date_advance[DATE_CHARS];
    int advance;

};

//Subscribers array of records.
struct subscriber forum[SUBS];

void new_sub();
void subs_topay();

int main(){
    char option;
    do{
        cout<<endl <<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;
        switch(option){
            case 'q':
                break;
            case 'a':
                if(ACTUAL_SUBS < SUBS) new_sub();
                else cout<<"Raggiunto il limite massimo di iscritti supportati.";
                break;
            case 'b':
                if(ACTUAL_SUBS > 0) subs_topay();
                else cout<<"Non sono ancora stati registrati iscritti.";
                break;
            default:
                cout<<"Opzione inserita non disponibile."<<endl;
                break;
        }
    } while(option!='q');
}

void new_sub(){
    cout<<"Inserire il cognome del nuovo iscritto: ";
    cin>>forum[ACTUAL_SUBS].surname;
    cout<<"Inserire l'ammontare che ha pagato l'iscritto: ";
    cin>>forum[ACTUAL_SUBS].advance;
    cout<<"Inserire la data del pagamento (GGMMAA): ";
    cin>>forum[ACTUAL_SUBS].date_advance;
    cout<<"Inserire la data del saldo (GGMMAA): ";
    cin>>forum[ACTUAL_SUBS].date_topay;
    ACTUAL_SUBS++;
}

void subs_topay(){
    cout<<"Elenco iscritti che devono ancora completare il pagamento del saldo: "<<endl;
    for(int i=0; i<ACTUAL_SUBS; i++){
        if(forum[i].advance < TO_PAY){
            cout<<forum[i].surname <<"\t" <<forum[i].advance <<endl;
        }
    }
}