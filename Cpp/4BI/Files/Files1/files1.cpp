/*
Inserire in una cartella un file di testo contenente per ogni riga età e cognome di studenti. 
Supponiamo che abbia 10 righe. Scrivere un programma che legga il file e inserisca in un array le età degli studenti superiori alla media. 
Successivamente si legga tale array.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//N. of max students.
const int MAX_STUDENTS = 30;
//N. of current registered students.
int current_students = 0;

//Student record.
struct student {
    int age;
    string surname;
};

//Students array of Student records.
student students[MAX_STUDENTS];

//Main function.
int main(){
    float average = 0;
    fstream input;

    input.open("input.txt", ios::in);

    //Read the file.
    while(!input.eof()){
        //Get ages and surnames from file and put them in students records array.
        input>>students[current_students].age >>students[current_students].surname;
        //Update average;
        average += students[current_students].age;
        //Update actual students;
        current_students++;
    }
    //Calculate the average age.
    average /= current_students;
    //Print students with age > average.
    cout<<"L'eta' media tra gli studenti e': " <<average <<endl;
    for(int i=0; i<current_students; i++){
       if(students[i].age > average){
           cout<<students[i].surname <<": " <<students[i].age <<endl;
       }
    }

    return 0;
}
