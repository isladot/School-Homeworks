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

  // Add an activity to the queue.
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

  // Remove an activity from the queue, specified by its own code.
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
      } else if(p != head) {
        prec_p->next = p->next;
        if (p == NULL){
          end = NULL;
        }
        delete p;
      } else {
        head = p->next;
        if (p == NULL){
          end = NULL;
        }
        delete p;
      }
    } else {
      cout<<"Non sono presenti attivita con il codice inserito." <<endl;
    }
  }

  void add_activity_by_prec_code(int code){
    activity *p, *prec_p = NULL;
    p = new(activity);

    cout<<"Inserire codice attivita: ";
    cin>>p->code;
    cout<<"Inserire descrizione attivita: ";
    cin>>p->desc;
    cout<<"Inserire nome titolare attivita: ";
    cin>>p->name;

    for(activity* i=head; i!=NULL; i=i->next){
      if(i->code == code){
        prec_p=i;
        break;
      }
    }

    if(head != NULL){
      if(prec_p != NULL){
        p->next = prec_p->next;
        prec_p->next = p;
      } else {
        cout<<"Non sono presenti attivita registrate con il codice inserito." <<endl;
      }
    } else {
      cout<<"Non sono presenti attivita registrate." <<endl;
    }
  }

  // Print all activities in the queue.
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

  // Print all activites for a specific user.
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
        <<"- 4: Stampa tutte le attivita specificando il nome del titolare." <<endl
        <<"- 5: Aggiungi attivita specificando il codice dell'attivita precedente." <<endl;

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
      case 5:
        {
          int code;

          cout<<"Inserire codice attivita' precedente all'attivita da aggiungere: ";
          cin>>code;

          schedule.add_activity_by_prec_code(code);
        }
        break;
      default:
        cout<<"Opzione non disponibile." <<endl;
        break;
    }
  } while(option!=0);
  return 0;
}