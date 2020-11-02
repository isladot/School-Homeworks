#include <iostream>
#include <string>
using namespace std;

struct persona {
    string surname;
    string name;
    int eta;
};

int main(){
    persona pers1, pers2;
    cout<<"Inserire il cognome della persona: ";
    cin>>pers1.surname;
    cout<<"Inserire il nome della persona: ";
    cin>>pers1.name;
    cout<<"Inserire l'eta della persona: ";
    cin>>pers1.eta;
    //Pers2
    cout<<"Inserire il cognome della persona: ";
    cin>>pers2.surname;
    cout<<"Inserire il nome della persona: ";
    cin>>pers2.name;
    cout<<"Inserire l'eta della persona: ";
    cin>>pers2.eta;

    if(pers1.eta>pers2.eta){
        cout<<"Il piu' grande e' " <<pers1.cognome <<endl;
    } else{
        cout<<"Il piu' grande e' " <<pers2.cognome <<endl;
    }
}