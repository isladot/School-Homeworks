#include <iostream>
#include <string>
using namespace std;

// Patient struct with personal data.
// Pointer to next item in queue.
struct patient {
  string name;
  int num;
  patient *next;
};

// Queue class.
class queue {
  // Queue head item.
  patient *head;
  // Queue end item.
  patient *end;
  // Current num.
  int num;

  public:
  // Class constructor, queue init as empty.
  queue(){
    head = NULL;
    end = NULL;
    num = 1;
  }
  
  // Adding a new element to the queue.
  void push(){
    patient *p;
    p = new(patient);

    cout<<"Inserire nome paziente: ";
    cin>>p->name;
    p->num = num++;
    cout<<"Il paziente " <<p->name <<" ha il numero " <<p->num <<endl;
    p->next = NULL;
    // Checking if the queue is empty.
    if (head == NULL){
      head = end = p;
    } else {
      end->next = p;
      end = p;
    }
  }

  // Removing an element from the queue.
  void pop(){
    patient *p;
    
    // Checking if the queue is empty.
    if(head == NULL){
      cout<<"Non sono presenti pazienti in attesa." <<endl;
    } else {
      p = head;
      head = p->next;
      cout<<"Il prossimo paziente da visitare e' " <<p->name <<", con il numero " <<p->num <<endl;
      if (head == NULL){
        end = NULL;
      }
      delete p;
    }
  }

  //Printing elements.
  void print(){
    patient *p;

    if(head == NULL){
      cout<<"Non sono presenti pazienti in attesa." <<endl;
    } else {
      cout<<"Elenco pazienti in attesa:" <<endl;
      for(p=head; p!=NULL; p=p->next){
        cout<<p->name <<"\t" <<p->num <<endl;
      }
    }
  }

  //Priority patients.
  void push_priority(){
    patient *p;
    p = new(patient);

    cout<<"Inserire nome paziente con priorita': ";
    cin>>p->name;
    p->num = num++;
    cout<<"Il paziente " <<p->name <<" ha il numero " <<p->num <<endl; 
    p->next = head;
    head = p;   
  }

  ~queue(){
    patient *p;

    while(head != NULL){
      p = head;
      head = head->next;
      delete p;
    }
  }
};

int main(){
  queue medical_office;

  //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Inserisci paziente." <<endl
            <<"- 2: Inserisci paziente con priorita'." <<endl
            <<"- 3: Rimuovi paziente." <<endl
            <<"- 4: Visualizza elenco pazienti in attesa." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                medical_office.push();
                break;
            case 2:
                medical_office.push_priority();
                break;
            case 3:
                medical_office.pop();
                break;
            case 4:
                medical_office.print();
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);
    return 0;
}