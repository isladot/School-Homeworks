#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct product {
    string code;
    string desc;
    int amount;
    float price;
};

//Check if product exist.
int check_existence(vector<product> products, string code){
    int product_pos = -1;

    for(int i=0; i<products.size(); i++){
        if(products[i].code == code){
            product_pos = i;
            break;
        }
    }

    return product_pos;
}

class Store {
    //Products vector.
    vector<product> products;

    public:
        //Constructor.
        Store(){
            product new_product;
            ifstream products_input;
            products_input.open("products_input.txt");

            //Read file [code] [desc] [amount] [price x unit].
            while(!products_input.eof()){
                products_input>>new_product.code >>new_product.desc >>new_product.amount >>new_product.price;
                if(new_product.code != ""){
                    products.push_back(new_product);
                    cout<<"Prodotto " <<new_product.code <<" registrato correttamente." <<endl;
                } else{
                    cout<<"Errore nella registrazione automatica dei prodotti da file." <<endl
                        <<"Il codice prodotto non puo' essere vuoto." <<endl;
                    break;
                }
            }

            products_input.close();
        };

        //Sell a product.
        void sell_product(string code, int items_sold){
            int product_pos = check_existence(products, code);

            if(product_pos != -1){
                if(products[product_pos].amount >= items_sold){
                    products[product_pos].amount -= items_sold;
                    cout<<"Vendita registrata correttamente." <<endl;
                } else {
                    cout<<"Non e' possibile effettuare la vendita, quantita' non valida." <<endl;
                }
            } else {
                cout<<"Nessun prodotto registrato con il codice " <<code <<"." <<endl;
            }
        }

        //Add a product.
        void add_product(string code){
            int product_pos = check_existence(products, code);

            if(product_pos != -1){
                int items_to_add = 0;

                cout<<"Inserire la quantita' da aggiungere per il prodotto " <<code <<": ";
                cin>>items_to_add;
                products[product_pos].amount += items_to_add;
                cout<<"Nuova quantita' registrata correttamente." <<endl;
            } else {
                product new_product;
                
                cout<<"Prodotto non registrato, fornire maggiori informazioni per inserimento finale." <<endl;
                new_product.code = code;
                cout<<"Inserire descrizione prodotto: ";
                cin>>new_product.desc;
                cout<<"Inserire quantita' prodotto: ";
                cin>>new_product.amount;
                cout<<"Inserire prezzo prodotto: ";
                cin>>new_product.price;

                products.push_back(new_product);
                cout<<"Nuovo prodotto registrato correttamente." <<endl;
            }
        }

        //Search for a product.
        void search_product(string code) {
            int product_pos = check_existence(products, code);

            if(product_pos != -1){
                cout<<"Informazioni relative al prodotto " <<code <<": " <<endl
                    <<"  Descrizione prodotto: " <<products[product_pos].desc <<endl
                    <<"  Quantita' disponibile: " <<products[product_pos].amount <<endl
                    <<"  Prezzo x unita': " <<products[product_pos].price <<endl;
            } else {
                cout<<"Nessun prodotto registrato con il codice " <<code <<"." <<endl;
            }
        }

        //Print products list.
        void print_products() {
            if(products.size() != 0){
                for(int i=0; i<products.size(); i++){
                    cout<<"Prodotto: " <<products[i].code <<": " <<endl
                        <<"  Descrizione prodotto: " <<products[i].desc <<endl
                        <<"  Quantita' disponibile: " <<products[i].amount <<endl
                        <<"  Prezzo x unita': " <<products[i].price <<endl;
                }
            } else {
                cout<<"Nessun prodotto registrato." <<endl;
            }
        }
};

int main(){
    //Store init.
    Store store;

    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Vendi un prodotto." <<endl
            <<"- 2: Aggiungi un prodotto." <<endl
            <<"- 3: Cerca un prodotto." <<endl
            <<"- 4: Visualizza le informazioni relative ad ogni prodotto registrato." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {
                    string code;
                    int items_to_sell;

                    cout<<"Inserire il codice del prodotto da vendere: ";
                    cin>>code;
                    cout<<"Inserire la quantita' da vendere: ";
                    cin>>items_to_sell;

                    store.sell_product(code, items_to_sell);
                }
                break;
            case 2:
                {
                    string code;

                    cout<<"Inserire il codice del prodotto da aggiungere: ";
                    cin>>code;

                    store.add_product(code);
                }
                break;
            case 3:
                {
                    string code;

                    cout<<"Inserire il codice del prodotto da cercare: ";
                    cin>>code;

                    store.search_product(code);
                }
                break;
            case 4:
                store.print_products();
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);
    return 0;
}