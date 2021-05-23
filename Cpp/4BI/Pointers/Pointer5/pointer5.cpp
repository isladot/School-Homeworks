#include <iostream>
#include <fstream>
#include <string>
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

      cout<<"Inserire il nome del nuovo contatto:";
      cin>>p->name;
      cout<<"Inserire il cognome del nuovo contatto:";
      cin>>p->surname;
      cout<<"Inserire il numero di telefono del nuovo contatto:";
      cin>>p->tel;
      cout<<"Inserite tipo contatto (0: Personale, 1: Lavoro):";
      cin>>type;
      if(type == 1){
        p->contact_type = work;
      } else {
        p->contact_type = personal;
      }

      p->next = head;
      head = p;
    }

    // Delete contant by name and surname.
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
          cout<<"Non sono presenti contatti registrati con nome e cognome inseriti.";
        }
      } else {
        cout<<"Non sono stati ancora registrati contatti.";
      }
    }

    void save_personal_on_file(){
      ofstream output;
      output.open("output-personal.txt");

      for(contact* i=head; i!=NULL; i=i->next){
        if(i->contact_type = personal){
          output<<i->name <<" " <<i->surname <<" " <<i->tel <<endl;
        }
      }

      cout<<"Salvataggio effettuato con successo.";

      output.close();
    }

    void save_work_on_array(){
      
    }
};
