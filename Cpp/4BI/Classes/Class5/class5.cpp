#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sector {
    string name;
    float balance;
};

class Market {
    string market_name;
    //Sectors vector.
    vector<sector> sectors;

    public:
        //Constructor.
        Market(string name, int sectors_amount){
            market_name = name;

            for(int i=0; i<sectors_amount; i++){
                sector new_sector;

                cout<<"Inserire nome settore: ";
                cin>>new_sector.name;
                cout<<"Inserire bilancio settore: ";
                cin>>new_sector.balance;
            }
        }

        string get_name(){
            return market_name;
        }

        float get_balance(){
            float current_balance;
            
            for(int i=0; i<sectors.size(); i++){
                current_balance += sectors[i].balance;
            }
            
            return current_balance;
        }

        float get_sector_balance(string sector_name){
            float sector_balance;

            for(int i=0; i<sectors.size(); i++){
                if(sectors[i].name == sector_name){
                    sector_balance = sectors[i].balance;
                    break;
                }
            }
        }

        void print_info(){
            cout<<"Nome supermecato: " <<market_name <<endl;
            cout<<"Quantità reparti registrati: " <<sectors.size() <<endl;
        }
};

int main(){
    //Market vectors init.
    vector<Market> markets;

    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Registra un nuovo supermercato." <<endl
            <<"- 2: Visualizza la rendita di un supermercato." <<endl
            <<"- 3: Visualizza le informzioni su un supermercato." <<endl
            <<"- 4: Visualizza l'incasso di un singolo reparto di un supermercato." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {
                    string market_name; 
                    int sectors_amount;

                    cout<<"Inserire il nome del supermercato: ";
                    cin>>market_name;
                    cout<<"Inserire il numero di reparti del supermercato " <<market_name <<": ";
                    cin>>sectors_amount;
                    
                    markets.push_back(Market(market_name, sectors_amount));
                }
                break;
            case 2:
                {
                    string market_target;

                    cout<<"Inserire il nome del supermercato da cercare: ";
                    cin>>market_target;

                    for(int i=0; i<markets.size(); i++){
                        if(markets[i].get_name() == market_target){
                            markets[i].print_info();
                        }
                    }
                }
                break;
            case 3:
                {
                    string market_target;

                    cout<<"Inserire il nome del supermercato da cercare: ";
                    cin>>market_target;

                    for(int i=0; i<markets.size(); i++){
                        if(markets[i].get_name() == market_target){
                            markets[i].get_balance();
                        }
                    }
                }
                break;
            case 4:
                {
                    string market_target;
                    string sector_target;

                    cout<<"Inserire il nome del supermercato: ";
                    cin>>market_target;

                    for(int i=0; i<markets.size(); i++){
                        if(markets[i].get_name() == market_target){
                            cout<<"Inserire il nome del settore: ";
                            cin>>sector_target;

                            markets[i].get_sector_balance(sector_target);
                            
                            break;
                        }
                    }
                }
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);
    return 0;
}