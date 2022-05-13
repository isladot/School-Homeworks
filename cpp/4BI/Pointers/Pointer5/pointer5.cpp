#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

enum ContactType { work, personal };

struct contact {
  string name, surname, tel;
  ContactType contact_type;
  contact *next;
};

class AddressBook {
  // Head element.
  contact *head;

  public:
    // AddressBook class constructor.
    AddressBook(){
      head = NULL;
    }

    // New contact.
    void new_contact(){
      int type;
      contact *p;
      p = new(contact);

      cout<<"Inserire il nome del nuovo contatto: ";
      cin>>p->name;
      cout<<"Inserire il cognome del nuovo contatto: ";
      cin>>p->surname;
      cout<<"Inserire il numero di telefono del nuovo contatto: ";
      cin>>p->tel;
      cout<<"Inserite tipo contatto (0: Personale, 1: Lavoro): ";
      cin>>type;
      if(type == 1){
        p->contact_type = work;
      } else {
        p->contact_type = personal;
      }

      p->next = head;
      head = p;
    }

    // Delete contact by name and surname.
    void delete_contact(string name, string surname){
      contact *p = NULL;
      contact *p_prec;

      if(head != NULL){
        for(contact *i=head; i!=NULL; i=i->next){
          if(i->name == name && i->surname == surname){
            p=i;
            break;
          }
          p_prec = i;
        }

        if(p!=NULL){
          if(p!= head){
            p_prec->next = p->next;
            delete p;      
          } else {
            head = p->next;
            delete p;
          }
        } else {
          cout<<"Non sono presenti contatti registrati con nome e cognome inseriti." <<endl;
        }
      } else {
        cout<<"Non sono stati ancora registrati contatti." <<endl;
      }
    }

    // Add contact by previus position.
    void add_contact_by_previous_pos(int p_pos){
      int type, pos = 0;
      contact *p, *prec_p = NULL;
      p = new(contact);

      cout<<"Inserire il nome del nuovo contatto: ";
      cin>>p->name;
      cout<<"Inserire il cognome del nuovo contatto: ";
      cin>>p->surname;
      cout<<"Inserire il numero di telefono del nuovo contatto: ";
      cin>>p->tel;
      cout<<"Inserite tipo contatto (0: Personale, 1: Lavoro): ";
      cin>>type;
      if(type == 1){
        p->contact_type = work;
      } else {
        p->contact_type = personal;
      }

      for(contact* i=head; i!=NULL; i=i->next){
        if(pos == p_pos){
          prec_p = i;
          break;
        }
        pos++;
      }

      if(head != NULL){
        if(prec_p != NULL){
          p->next = prec_p->next;
          prec_p->next = p;
        } else {
          cout<<"Non sono presenti contatti nella posizione indicata." <<endl;
        }
      } else {
        cout<<"Non sono stati ancora registrati contatti." <<endl;
      }
    }

    // Save personal contacts on file.
    void save_personal_on_file(){
      ofstream output;
      output.open("output-personal.txt");

      for(contact* i=head; i!=NULL; i=i->next){
        if(i->contact_type == personal){
          output<<i->name <<" " <<i->surname <<" " <<i->tel <<endl;
        }
      }

      cout<<"Salvataggio effettuato con successo." <<endl;

      output.close();
    }

    // Print sorted work contacts.
    void save_sort_print_work(){
      vector<contact*> contacts;

      for(contact* i=head; i!=NULL; i=i->next){
        if(i->contact_type == work){
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

        cout<<"Elenco contatti lavorativi:" <<endl;
        for(int i=0; i<contacts.size(); i++){
          cout<<i+1 <<": " <<contacts[i]->name <<" " <<contacts[i]->surname <<" " <<contacts[i]->tel <<endl;
        }
      } else {
        cout<<"Non sono presenti contatti lavorativi registrati." <<endl;
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