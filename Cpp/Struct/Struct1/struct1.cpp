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
        //Checking max and min
        if(classroom[i].eta>classroom[max].eta){
            max=i;
        }
        if(classroom[i].eta<classroom[min].eta){
            min=i;
        }
        if(classroom[i].eta<classroom[max].eta && classroom[i].eta>classroom[min].eta){
            mid=i;
        }
    }
    cout<<"MID: " <<classroom[mid].surname <<endl;
}