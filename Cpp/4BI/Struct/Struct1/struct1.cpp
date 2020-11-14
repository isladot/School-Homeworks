/*
Eseguire il seguente programma: definire una truttura di tipo studente, 
con un campo cognome e un campo età; leggere in input tre studenti 
con età diversa tra loro e stampare il cognome dello studente che è nè il più piccolo nè il più grande. 
Per esempio se fosse mario 18, giulio 19, gianni 17, andrebbe stampato mario.
*/

#include <iostream>
#include <string>
using namespace std;

const int CLASSROOM_STUDENTS = 3;

struct student {
    string surname;
    int eta;
};

struct student classroom[CLASSROOM_STUDENTS];

int main(){
    int max=0, min=0, mid=0;
    for(int i=0; i<CLASSROOM_STUDENTS; i++){
        cout<<"Inserire cognome studente " <<i+1 <<": ";
        cin>>classroom[i].surname;
        cout<<"Inserire eta' studente " <<i+1 <<": ";
        cin>>classroom[i].eta;
    }
    //Checks
    for(int i=0; i<CLASSROOM_STUDENTS; i++){
        if(classroom[i].eta>classroom[max].eta) max=i;
    }
    for(int i=0; i<CLASSROOM_STUDENTS; i++){
        if(classroom[i].eta<classroom[min].eta) min=i;
    }
    for(int i=0; i<CLASSROOM_STUDENTS; i++){
        if(classroom[i].eta<classroom[max].eta && classroom[i].eta>classroom[min].eta) mid=i;

    }
    cout<<"MID: " <<classroom[mid].surname <<endl;
}