#include <iostream>
#include <string>
using namespace std;

struct activity {
  int code;
  string desc;
  string name;
  activity *next;
};

class Schedule {
  activity *head;
  activity *end;

  public:
  Schedule(){
    head = NULL;
    end = NULL;
  }

  void add_activity(){
    activity *p;
    p = new(activity);

    cout<<"Inserire codice attivita: ";
    cin>>p->code;
    cout<<"Inserire descrizione attivita: ";
    cin>>p->desc;
    cout<<"Inserire nome titolare attivita: ";
    cin>>p->name;
    p->next = NULL;

    if(head == NULL){
      head = end = p;
    } else {
      end->next = p;
      end = p;
    }
  }

  void remove_activity_by_code(int code){
    activity *p = NULL;
    activity *prec_p;

    for(activity* i=head; i!=NULL; i=i->next){
      if(i->code == code){
        p=i;
        break;
      }
      prec_p = i;
    }

    if(p != NULL){
      if(head == NULL){
        cout<<"Non sono state registrate attivita." <<endl;
      } else {
        prec_p->next = p->next;
        if (p == NULL){
          end = NULL;
        }
        delete p;
      }
    } else {
      cout<<"Non sono presenti attivita con il codice inserito." <<endl;
    }
  }

  //Printing elements.
  void print_activities(){
    activity *p;

    if(head == NULL){
      cout<<"Non sono presenti attivita registrate." <<endl <<endl;
    } else {
      cout<<"Elenco attivita registrate:" <<endl;
      for(p=head; p!=NULL; p=p->next){
        cout<<"- " <<p->code <<"\t" <<p->desc <<"\t" <<p->name <<endl;
      }
    }
  }

  void print_activities_by_name(string name){
    activity *p = NULL;

    if(head == NULL){
      cout<<"Non sono presenti attivita registrate." <<endl;
      return;
    } else {
      cout<<"Elenco attivita registrate a nome di " <<name <<":" <<endl <<endl;
      for(activity *i=head; i!=NULL; i=i->next){
        if(i->name == name){
          p = i;
          cout<<"- " <<p->code <<"\t" <<p->desc <<"\t" <<p->name <<endl;
        }
      }
    }

    if(p == NULL){
      cout<<"Non sono presenti attivita registrate a nome di " <<name <<"." <<endl;
    }
  }
};

int main(){
  Schedule schedule;

  //Menu.
  int option;
  do{
    cout<<endl
        <<"- 0: Termina il programma." <<endl
        <<"- 1: Registra una nuova attivita." <<endl
        <<"- 2: Elimina un'attivita specificando il codice." <<endl
        <<"- 3: Stampa tutte le attivita registrate." <<endl
        <<"- 4: Stampa tutte le attivita specificando il nome del titolare." <<endl;

    cout<<"Selezionare l'opzione desiderata: ";
    cin>>option;
    cout<<endl;

    switch(option){
      case 0:
        cout<<"Chiusura del programma in corso.." <<endl;
        break;
      case 1:
        schedule.add_activity();
        break;
      case 2:
        {
          int code;

          cout<<"Inserire codice attivita' da eliminare: ";
          cin>>code;

          schedule.remove_activity_by_code(code);
        }
        break;
      case 3:
        schedule.print_activities();
        break;
      case 4:
        {
          string name;

          cout<<"Inserire il nome del titolare delle attivita' da stampare: ";
          cin>>name;

          schedule.print_activities_by_name(name);
        }
        break;
      default:
        cout<<"Opzione non disponibile." <<endl;
        break;
    }
  } while(option!=0);
  return 0;
}