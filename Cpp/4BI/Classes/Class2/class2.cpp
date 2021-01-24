#include <iostream>
#include <string>
using namespace std;

class CC {
    string owner, id;
    float balance;

    public:
        //Balance amount init.
        CC(float init_balance){
            balance = init_balance;
        }

        //Get some money.
        void get_money(float amount){
            if(balance >= amount){
                balance -= amount;
                cout<<"Saldo attuale: " <<balance <<endl;
            } else {
                cout<<"Non e' possibile effettuare l'operazione desiderata, saldo insufficiente." <<endl
                    <<"Saldo attuale: " <<balance <<endl;
            }   
        }

        //Put some money.
        void put_money(float amount){
            balance += amount;
            cout<<"Saldo attuale: " <<balance <<endl;
        }

        //Print CC informations.
        void print_info(){
            cout<<"Intestatario: " <<owner <<endl
                <<"Numero conto: " <<id <<endl
                <<"Saldo attuale: " <<balance <<endl;
        }

        //Register CC informations.
        void register_info(){
            cout<<"Inserire cognome intestatario: ";
            cin>>owner;
            cout<<"Inserire numero conto: ";
            cin>>id;
        }
};

int main(){
    //CC init.
    CC bill(0);
    bill.register_info();

    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Prelievo." <<endl 
            <<"- 2: Versameto." <<endl
            <<"- 3: Stampa informazioni relative al conto." <<endl;

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
                    bill.get_money(amount);
                }
                break;
            case 2:
                {   
                    float amount;
                    cout<<"Inserire la quantita' di denaro che si desidera versare: ";
                    cin>>amount;
                    bill.put_money(amount);
                }
                break;
            case 3:
                bill.print_info();
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);

    return 0;
}