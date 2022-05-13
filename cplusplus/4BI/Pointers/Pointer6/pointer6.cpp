/*
Un file contiene record di contatti telefonici, ogni record ha i seguenti campi:
- Cognome, Nome,Tipo. Tipo può assumere 2 valori: “privato” o “lavoro”.
- Scrivere un programma che legge il file ed inserisce i record in una coda.
- Dalla precedente coda leggere i dati e inserirli in un array solo i contatti con Tipo=”privato”.
- Ordinare l’array secondo il campo cognome,in ordine crescente, e stamparlo.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct contact {
  string name, surname;
  /*
   * w: "lavoro"
   * p: "privato"
  */
  char contact_type;
  contact *next;
};

class AddressBook {
  contact *head, *end;

  public:
    // AddressBook class constructor.
    AddressBook(){
      head = end = NULL;
    }

    // Add contacts from file.
    void get_contacts_from_file(){
      // Pointers.
      contact *p;

      // Open file.
      ifstream input;
      input.open("input.txt");

      // Read file.
      while(!input.eof()){
        p = new(contact);

        input>>p->name >>p->surname >>p->contact_type;
        p->next = NULL;

        if(p->name != ""){
          if(head == NULL){
            head = end = p;
          } else {
            end->next = p;
            end = p;
          }
        }
      }

      // Close file.
      input.close();
    }

    // Print sorted personal contacts.
    void save_sort_print_personal(){
      vector<contact*> contacts;

      for(contact* i=head; i!=NULL; i=i->next){
        if(i->contact_type == 'p'){
          contacts.push_back(i);
        }
      }
      
      contact* tmp;
      if(contacts.size() != 0){
        for(int i=0; i<contacts.size(); i++){
          for(int j=i+1; j<contacts.size(); j++){
            if(contacts[i]->surname > contacts[j]->surname){
              tmp = contacts[i];
              contacts[i] = contacts[j];
              contacts[j] = tmp;
            }
          }
        }

        cout<<"Elenco contatti personali:" <<endl;
        for(int i=0; i<contacts.size(); i++){
          cout<<i+1 <<": " <<contacts[i]->name <<" " <<contacts[i]->surname <<endl;
        }
      } else {
        cout<<"Non sono presenti contatti personali registrati." <<endl;
      }
    }

    // Print all contacts.
    void print_contacts(){
      contact *p;

      if(head == NULL){
        cout<<"Non sono stati ancora registrati contatti." <<endl;
      } else {
        cout<<"Elenco contatti:" <<endl;
        for(p=head; p!=NULL; p=p->next){
          cout<<"- " <<p->name <<" " <<p->surname  <<" " <<p->contact_type <<endl;
        }
      }
    }
};

int main(){
  AddressBook address_book;

  //Menu.
  int option;
  do{
    cout<<endl
        <<"- 0: Termina il programma." <<endl
        <<"- 1: Registra nuovi contatti da file." <<endl
        <<"- 2: Salva su un array, ordina e stampa i contatti personali." <<endl
        <<"- 3: Stampa tutti i contatti."<<endl ;

    cout<<"Selezionare l'opzione desiderata: ";
    cin>>option;
    cout<<endl;

    switch(option){
      case 0:
        cout<<"Chiusura del programma in corso.." <<endl;
        break;
      case 1:
        address_book.get_contacts_from_file();
        break;
      case 2:
        address_book.save_sort_print_personal();
        break;
      case 3:
        address_book.print_contacts();
        break;
      default:
        cout<<"Opzione non disponibile." <<endl;
        break;
    }
  } while(option!=0);
  return 0;
}