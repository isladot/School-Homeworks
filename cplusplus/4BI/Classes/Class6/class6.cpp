#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Terrain {
  string code;
  float extension, build_perc, price_mq;

  public:
    Terrain(string code_init, float extension_init, float build_perc_init, float price_mq_init){
      code = code_init;
      extension = extension_init;
      build_perc = build_perc_init;
      price_mq = price_mq_init;
    }

    string get_terrain_code(){
      return code;
    }

    float get_terrain_price(){
      return extension * price_mq;
    }

    float get_buildable_mq(){
      return extension/100*build_perc;
    }

    void print_terrain_info(){
      cout<<"Codice terreno: " <<code <<endl
          <<"Estensione terreno: " <<extension <<endl
          <<"Percentuale edificabile: " <<build_perc <<endl
          <<"Prezzo al mq: " <<price_mq <<endl;
    }
};

int main(){
  //Terrains vectors init.
  vector<Terrain> terrains;

  //Menu.
  int option;
  do{
      cout<<endl
          <<"- 0: Termina il programma." <<endl
          <<"- 1: Registra un nuovo terreno." <<endl
          <<"- 2: Visualizza la rendita di un terreno." <<endl
          <<"- 3: Visualizza la percentuale edificabile di un terreno." <<endl
          <<"- 4: Visualizza le informazioni di un terreno." <<endl;

      cout<<"Selezionare l'opzione desiderata: ";
      cin>>option;
      cout<<endl;

      switch(option){
          case 0:
              cout<<"Chiusura del programma in corso.." <<endl;
              break;
          case 1:
              {
                string code;
                float extension, build_perc, price_mq;

                cout<<"Inserire il codice del terreno: ";
                cin>>code;
                cout<<"Inserire l'estensione del terreno: ";
                cin>>extension;
                cout<<"Inserire la percentuale edificabile del terreno: ";
                cin>>build_perc;
                cout<<"Inserire il prezzo per mq del terreno: ";
                cin>>price_mq;
                
                terrains.push_back(Terrain(code, extension, build_perc, price_mq));
              }
              break;
          case 2:
              {
                string code;

                cout<<"Inserire il codice del terreno: ";
                cin>>code;

                for(int i=0; i<terrains.size(); i++){
                  if(terrains[i].get_terrain_code() == code){
                    cout<<"Il prezzo del terreno e': " <<terrains[i].get_terrain_price() <<endl;
                  }
                }
              }
              break;
          case 3:
              {
                string code;

                cout<<"Inserire il codice del terreno: ";
                cin>>code;

                for(int i=0; i<terrains.size(); i++){
                  if(terrains[i].get_terrain_code() == code){
                    cout<<"La percentuale edificabile del terreno e': " <<terrains[i].get_buildable_mq() <<"%" <<endl;
                  }
                }
              }
              break;
          case 4:
              {
                string code;

                cout<<"Inserire il codice del terreno: ";
                cin>>code;

                for(int i=0; i<terrains.size(); i++){
                  if(terrains[i].get_terrain_code() == code){
                    terrains[i].print_terrain_info();
                  }
                }
              }
              break;
          default:
              cout<<"Opzione non disponibile." <<endl;
              break;
      }
  } while(option!=0);
  return 0;
}