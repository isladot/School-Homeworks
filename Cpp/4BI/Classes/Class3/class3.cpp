#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Note struct.
struct vote {
    string subject;
    float note;
};

class Student {
    //Student attributes.
    string surname, name, address, grade;
    int notes_amount = 0 ;
    float notes_sum = 0;

    //Notes vector.
    vector<vote> notes;

    public:
        //Constructor.
        Student(string init_surname, string init_name, string init_address){
            surname = init_surname;
            name = init_name;
            address = init_address;
        };
        
        //Get surname.
        string get_surname(){
            return surname;
        }
        //Add a note.
        void add_note(vote new_vote){
            if(0 < new_vote.note <= 10){
                notes.push_back(new_vote);
                notes_sum += new_vote.note;
                notes_amount++;
                
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
                <<"Media: " <<notes_sum/notes_amount <<endl;
        }
        //Change student address.
        void change_address(string new_address){
            address = new_address;

            cout<<"Nuovo indirizzo registrato correttamente." <<endl;
        }
};

class Classroom {
    //Classroom attributes.
    string grade;
    vector<Student> students;

    public:
        //Constructor.
        Classroom(string init_grade){
            grade = init_grade;
        }
        
        //Add a new student.
        void add_student(){
            string new_surname, new_name, new_address;
            
            cout<<"Inserire il cognome del nuovo studente: ";
            cin>>new_surname;
            cout<<"Inserire il nome del nuovo studente: ";
            cin>>new_name;
            cout<<"Inserire l'indirizzo del nuovo studente: ";
            cin>>new_address;

            Student new_student(new_surname, new_name, new_address);
            students.push_back(new_student);
        }
        //Add note to a student.
        void student_add_note(){
            int students_amount = students.size();
            if(students_amount != 0){
                string surname;
                vote new_vote;

                cout<<"Inserire il cognome dell'alunno: ";
                cin>>surname;
                cout<<"Inserire il voto da aggiungere: ";
                cin>>new_vote.note;
                cout<<"Inserire la materia: ";
                cin>>new_vote.subject;

                for(int i=0; i<students_amount; i++){
                    if(students[i].get_surname() == surname){
                        students[i].add_note(new_vote);
                        break;
                    }
                } 
            } else {
                cout<<"Non sono stati inseriti studenti nella classe corrente." <<endl;
            }
        }
        //Print info about a student.
        void student_print_info(){
            int students_amount = students.size();
            if(students_amount != 0){
                string surname;

                cout<<"Inserire il cognome dell'alunno: ";
                cin>>surname;

                for(int i=0; i<students_amount; i++){
                    if(students[i].get_surname() == surname){
                        students[i].print_student_info();
                        break;
                    }
                } 
            } else {
                cout<<"Non sono stati inseriti studenti nella classe corrente." <<endl;
            }
        }
};

int main(){
    //Classroom init.
    Classroom classroom("4BI");
    
    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Registra un nuovo studente." <<endl
            <<"- 2: Aggiungi un voto." <<endl 
            <<"- 3: Visualizza le informazioni relative allo studente." <<endl
            <<"- 4: Modifica l'indirizzo dello studente." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                classroom.add_student();
                break;
            case 2:
                classroom.student_add_note();
                break;
            case 3:
                classroom.student_print_info();
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);
    return 0;
}