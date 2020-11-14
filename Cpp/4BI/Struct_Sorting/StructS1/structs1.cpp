#include <iostream>
#include <string>
using namespace std;

//N. of max products.
const int MAX_PROD = 10;
//N. of current registered products.
int current_prod = 0;

//Product record.
struct product {
    int id;
    string desc;
    float cost;
};

//Array of Products records.
product products[MAX_PROD];

void register_products(int prods);
void sort_products(int option);

int main(){
    int option;

    //Registering products.
    cout<<"Inserire la quantita' di prodotti da registare: ";
    cin>>current_prod;
    register_products(current_prod);

    //Sorting products.
    cout<<"Specificare in che modo si desidera ordinare i prodotti: " <<endl
        <<"- 1: Ordine crescente. (ID)" <<endl
        <<"- 2: Ordine decrescente. (ID)" <<endl
        <<"- 3: Ordine crescente. (Prezzo)" <<endl
        <<"- 4: Ordine decrescente. (Prezzo)" <<endl;
    cin>>option;
    sort_products(option);    
}

void register_products(int prods){
    for(int i=0; i<prods; i++){
        cout<<"Inserire il codice del prodotto " <<i+1 <<": ";
        cin>>products[i].id;
        cout<<"Inserire la descrizione del prodotto " <<i+1 <<": ";
        cin>>products[i].desc;
        cout<<"Inserire il prezzo del prodotto " <<i+1 <<": ";
        cin>>products[i].cost;
        cout<<endl;
    }
}

void sort_products(int option){
    product tmp;
    switch(option){
        case 1:
            for(int i=0; i<current_prod; i++){
                for(int j=i+1; j<current_prod; j++){
                    if(products[i].id > products[j].id){
                        tmp = products[i];
                        products[i] = products[j];
                        products[j] = tmp;
                    }
                }
            }
            cout<<"Elenco ordinato in ordine crescente per ID." <<endl;
            for(int i=0; i<current_prod; i++){
                cout<<products[i].id <<"\t\t" <<products[i].desc <<"\t\t" <<products[i].cost <<endl;
            }
            break;
        case 2:
            for(int i=0; i<current_prod; i++){
                for(int j=i+1; j<current_prod; j++){
                    if(products[i].id < products[j].id){
                        tmp = products[i];
                        products[i] = products[j];
                        products[j] = tmp;
                    }
                }
            }
            cout<<"Elenco ordinato in ordine decrescente per ID." <<endl;
            for(int i=0; i<current_prod; i++){
                cout<<products[i].id <<"\t\t" <<products[i].desc <<"\t\t" <<products[i].cost <<endl;
            }
            break;
        case 3:
            for(int i=0; i<current_prod; i++){
                for(int j=i+1; j<current_prod; j++){
                    if(products[i].cost > products[j].cost){
                        tmp = products[i];
                        products[i] = products[j];
                        products[j] = tmp;
                    }
                }
            }
            cout<<"Elenco ordinato in ordine crescente per Prezzo." <<endl;
            for(int i=0; i<current_prod; i++){
                cout<<products[i].id <<"\t\t" <<products[i].desc <<"\t\t" <<products[i].cost <<endl;
            }
            break;
        case 4:
            for(int i=0; i<current_prod; i++){
                for(int j=i+1; j<current_prod; j++){
                    if(products[i].cost < products[j].cost){
                        tmp = products[i];
                        products[i] = products[j];
                        products[j] = tmp;
                    }
                }
            }
            cout<<"Elenco ordinato in ordine decrescente per Prezzo." <<endl;
            for(int i=0; i<current_prod; i++){
                cout<<products[i].id <<"\t\t" <<products[i].desc <<"\t\t" <<products[i].cost <<endl;
            }
            break;
    }
}

