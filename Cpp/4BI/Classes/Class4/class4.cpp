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

class Store {
    //Store attributes.

    //Products vector.
    vector<product> products;

    public:
        //Contructor.
        Store(){

        };

        //Sell a product.
        void sell_product(string code, int items_sold){
            for(int i=0; i<products.size(); i++){
                if(products[i].code == code){
                    products[i].amount -= items_sold;
                    break;
                }
            }
        }

        //Add a product.
        void add_product(string code){
            int product_pos = -1;

            //Check if product exist.
            for(int i=0; i<products.size(); i++){
                if(products[i].code == code){
                    product_pos = i;
                }
            }

            if(product_pos != -1){
                int items_to_add = 0;

                cout<<"Inserire la quantità da aggiungere per il prodotto " <<code <<": ";
                cin>>items_to_add;
                products[product_pos].amount += items_to_add;
            } else {
                product new_product;
                
                cout<<"Prodotto non registrato, fornire maggiori informazioni per inserimento finale." <<endl;
                new_product.code == code;
                cout<<"Inserire descrizione prodotto: ";
                cin>>new_product.desc;
                cout<<"Inserire quantita' prodotto: ";
                cin>>new_product.amount;
                cout<<"Inserire prezzo prodotto: ";
                cin>>new_product.price;

                products.push_back(new_product);
            }
        }

        //Print products list.
        void print_products() {
            for(int i=0; i<products.size(); i++){
                cout<<"Codice prodotto: " <<products[i].code;
            }
        }
};