#include <iostream>
#include <string>
using namespace std;

// Record representing a list item.
struct vehicle {
  // Vehicle identifier.
  string ID;
  // Vehicle cc.
  int cc;
  //Pointer
  vehicle *next;
};

// Cars class, acts as a list.
class Cars {
  // List "head" item.
  vehicle *first;

  public:
    // Cars class constructor.
    Cars(){
      first = NULL;
    }

    // Add an item to list.
    void push(string new_ID, int new_cc){
      vehicle *p;

      p = new(vehicle);
      p->cc = new_cc;
      p->ID = new_ID;
      p->next = first;
      first = p;
    }

    // Pop (remove) an item from list.
    void pop(){
      vehicle *p;

      if(first == NULL){
        cout<<"Non sono disponibili autovetture." <<endl;
      } else {
        p = first;
        first = p->next;
        cout<<"La vettura eliminata ha " <<p->ID <<" e cilindrata " <<p->cc <<endl;
        delete p;
      }
    }

    // Print list values.
    void print(){
      vehicle *p;

      if(first == NULL){
        cout<<"Non sono state registrate autovetture." <<endl;
      } else {
        cout<<"Elenco vetture disponibili: " <<endl;
        for(p=first; p!=NULL; p=p->next){
          cout<<p->ID <<"\t" <<p->cc <<endl;
        }
      }
    }

    // Cars class deconstructor.
    ~Cars(){
      vehicle *p;

      while(first != NULL){
        p = first;
        first = first->next;
        delete p;
      }
    }
};

int main(){
  // Cars list var.
  Cars garage;

  //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Inserisci auto." <<endl
            <<"- 2: Elimina auto." <<endl
            <<"- 3: Visualizza la lista delle auto disponibili." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {
                    string ID;
                    int cc;
                    
                    cout<<"Inserire la targa della nuova macchina da registrare: ";
                    cin>>ID;
                    cout<<"Inserire la cilindrata della nuova macchina da registrare: ";
                    cin>>cc;

                    garage.push(ID, cc);
                }
                break;
            case 2:
                garage.pop();
                break;
            case 3:
                garage.print();
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);
    return 0;
}