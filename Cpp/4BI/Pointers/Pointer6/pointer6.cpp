#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

enum ContactType { work, personal };

struct contact {
  string name, surname;
  ContactType contact_type;
  contact *next;
};

class AddressBook {
  // Head, end elements.
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
      p = new(contact);

      // File.
      ifstream input;
      input.open("input.txt");

      

      // Read file.
      while(!input.eof()){
        input>>p->name >>p->surname 
      }


    }

    // Print sorted work contacts.
    void save_sort_print_work(){
      vector<contact*> contacts;

      for(contact* i=head; i!=NULL; i=i->next){
        if(i->contact_type == personal){
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
          cout<<i+1 <<": " <<contacts[i]->name <<" " <<contacts[i]->surname <<" " <<contacts[i]->tel <<endl;
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
          cout<<"- " <<p->name <<" " <<p->surname <<" " <<p->tel <<" " <<p->contact_type <<endl;
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
        <<"- 1: Registra un nuovo contatto." <<endl
        <<"- 2: Salva su file i contatti personali." <<endl
        <<"- 3: Salva su un array, ordina e stampa i contatti lavorativi." <<endl
        <<"- 4: Elimina un contatto, fornendo in input nome e cognome." <<endl
        <<"- 5: Inserisci un contatto nella posizione successiva a quella fornita in input." <<endl
        <<"- 6: Stampa tutti i contatti." <<endl;

    cout<<"Selezionare l'opzione desiderata: ";
    cin>>option;
    cout<<endl;

    switch(option){
      case 0:
        cout<<"Chiusura del programma in corso.." <<endl;
        break;
      case 1:
        address_book.new_contact();
        break;
      case 2:
        address_book.save_personal_on_file();
        break;
      case 3:
        address_book.save_sort_print_work();
        break;
      case 4:
        {
          string name, surname;

          cout<<"Inserire nome contatto da eliminare: ";
          cin>>name;
          cout<<"Inserire cognome contatto da eliminare: ";
          cin>>surname;

          address_book.delete_contact(name, surname); 
        }
        break;   
      case 5:
        {
          int pos;

          cout<<"Inserire la posizione del contatto precedente a quello che si vuole inserire: ";
          cin>>pos;

          address_book.add_contact_by_previous_pos(pos);
        }
        break;
      case 6:
        address_book.print_contacts();
        break;
      default:
        cout<<"Opzione non disponibile." <<endl;
        break;
    }
  } while(option!=0);
  return 0;
}