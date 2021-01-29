#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//N. of max history items.
const int MAX_HISTORY_ITEMS = 10;
//N. of current history items registered.
int current_history_items = 0;

//Bill history item.
struct history_item {
    string date;
    string import;
};

//When history reach max supported items, delete the oldest.
void delete_oldest_history_item(history_item history[MAX_HISTORY_ITEMS]){
    for(int i=0; i<current_history_items; i++){
        history[i] = history[i+1];
    }
    current_history_items--;
}

//Register process.
void register_process(history_item history[MAX_HISTORY_ITEMS], char operation, float amount){
    //Getting current date.
    time_t now = time(0);
    string date = ctime(&now);

    if(current_history_items != MAX_HISTORY_ITEMS-1){
        history[current_history_items].date = date;
        history[current_history_items].import = operation + to_string(amount);
        current_history_items++;
    } else {
        delete_oldest_history_item(history);
        history[current_history_items].date = date;
        history[current_history_items].import = operation + to_string(amount);
        current_history_items++;
    }
}

class CC {
    string owner, id;
    float balance, interest_rate;

    //Array of Bill items records.
    history_item history[MAX_HISTORY_ITEMS];

    public:
        //Balance amount init.
        CC(float init_balance, float init_interest_rate){
            balance = init_balance;
            interest_rate = init_interest_rate;
        }

        //Withdrawal money.
        void withdrawal(float amount){
            //Getting current date.
            time_t now = time(0);
            string date = ctime(&now);

            if(balance >= amount && amount > 0){
                balance -= amount;
                cout<<"Saldo attuale: " <<balance <<endl;

                register_process(history, '-', amount);
            } else if(amount < 0) {
                cout<<"Importo inserito non valido" <<endl;
            } else {
                cout<<"Non e' possibile effettuare l'operazione desiderata, saldo insufficiente." <<endl
                    <<"Saldo attuale: " <<balance <<endl;
            }
        }

        //Deposit money.
        void deposit(float amount){
            //Getting current date.
            time_t now = time(0);
            string date = ctime(&now);

            if(amount > 0){
                balance += amount;
            cout<<"Saldo attuale: " <<balance <<endl;
            } else {
                cout<<"Importo inserito non valido." <<endl;
            }

            register_process(history, '+', amount);
        }

        //Print CC informations.
        void print_info(){
            cout<<"Intestatario: " <<owner <<endl
                <<"Numero conto: " <<id <<endl
                <<"Saldo attuale: " <<balance <<endl
                <<"Interesse attuale: " <<interest_rate <<endl;
        }

        //Register CC informations.
        void register_info(){
            cout<<"Inserire cognome intestatario: ";
            cin>>owner;
            cout<<"Inserire numero conto: ";
            cin>>id;
            cout<<"Inserire il tasso di interesse: ";
            cin>>interest_rate;
        }

        //Modify interest rate.
        void modify_interest_rate(float new_interest_rate){
            interest_rate = new_interest_rate;
        }

        //Apply interest to balance.
        void apply_interest(){
            balance += balance / 100 * interest_rate;
            cout<<"Saldo attuale: " <<balance <<endl;
        }

        //Print bill history.
        void print_bill_history(){
            for(int i=0; i<current_history_items; i++){
                cout<<"Data: " <<history[i].date <<"Operazione: " <<history[i].import <<endl
                    <<"-" <<endl;
            }
        }
};

int main(){
    //CC init.
    CC bill(0, 0);
    bill.register_info();

    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Prelievo." <<endl 
            <<"- 2: Versameto." <<endl
            <<"- 3: Stampa informazioni relative al conto." <<endl
            <<"- 4: Modifica il tasso di interesse." <<endl
            <<"- 5: Applica il tasso di interesse attuale al saldo." <<endl
            <<"- 6: Stampa l'elenco delle operazioni effettuate." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {   
                    float amount;
                    cout<<"Inserire la quantita' di denaro che si desidera prelevare: ";
                    cin>>amount;
                    bill.withdrawal(amount);
                }
                break;
            case 2:
                {   
                    float amount;
                    cout<<"Inserire la quantita' di denaro che si desidera versare: ";
                    cin>>amount;
                    bill.deposit(amount);
                }
                break;
            case 3:
                bill.print_info();
                break;
            case 4:
                {
                    float new_interest_rate;
                    cout<<"Inserire il nuovo tasso di interesse: ";
                    cin>>new_interest_rate;
                    bill.modify_interest_rate(new_interest_rate);
                }
                break;
            case 5:
                bill.apply_interest();
                break;
            case 6:
                bill.print_bill_history();
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);

    return 0;
}