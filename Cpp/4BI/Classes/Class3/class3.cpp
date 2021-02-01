#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
    //Student attributes.
    string surname, name, address, grade;
    int interrogations_amount = 0;
    float notes_average = 0;

    //Notes vector.
    vector<float> notes;

    public:
        //Constructor.
        Student(string init_surname, string init_name, string init_address){
            surname = init_surname;
            name = init_name;
            address = init_address;
        };

        //Add a note.
        void add_note(float note){
            if(0 < note <= 10){
                notes.push_back(note);
                notes_average += note;
                interrogations_amount++;

                cout<<"Voto registrato correttamente." <<endl;
            } else {
                cout<<"Si prega di inserire un voto valido." <<endl;
            }
        }

        //Print student info.
        void print_student_info(){
            cout<<"Nome: " <<name <<endl
                <<"Cognome: " <<surname <<endl
                <<"Indirizzo: " <<address <<endl
                <<"Media: " <<notes_average/interrogations_amount <<endl;
        }

        //Change student address.
        void change_address(string new_address){
            address = new_address;

            cout<<"Nuovo indirizzo registrato correttamente." <<endl;
        }
};

int main(){
    //Student init.
    Student student("Rossi", "Mario", "Via del Corso 1");

    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Aggiungi un voto." <<endl 
            <<"- 2: Visualizza le informazioni relative allo studente." <<endl
            <<"- 3: Modifica l'indirizzo dello studente." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {
                    float note;
                    cout<<"Inserire il voto da aggiungere: ";
                    cin>>note;
                    student.add_note(note);
                }
                break;
            case 2:
                student.print_student_info();
                break;
            case 3:
                {
                    string new_address;
                    cout<<"Inserire il nuovo indirizzo dello studente: ";
                    cin>>new_address;
                    student.change_address(new_address);
                }
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);

    return 0;
}