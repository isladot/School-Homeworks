#include <iostream>
#include <math.h>
using namespace std;

class Triangle {
    float side1, side2, side3;

    public:
        //Equilateral.
        Triangle(float s1){
            side1=side2=side3=s1;
        }
        //Isosceles.
        Triangle(float s1, float s2){
            side1=s1;
            side2=side3=s2;
        }
        //Scalene.
        Triangle(float s1, float s2, float s3){
            side1=s1;
            side2=s2;
            side3=s3;
        }

        //Get perimeter.
        float perimeter(){
            return (side1+side2+side3);
        }

        //Get area.
        float area(){
            //Semiperimeter.
            float p = perimeter()/2;
            return sqrt(p*(p-side1)*(p-side2)*(p-side3));
        }
};

int main(){
    //Menu.
    int option;
    do{
        cout<<endl
            <<"- 0: Termina il programma." <<endl
            <<"- 1: Triangolo equilatero." <<endl 
            <<"- 2: Triangolo isoscele." <<endl
            <<"- 3: Triangolo scaleno." <<endl;

        cout<<"Selezionare l'opzione desiderata: ";
        cin>>option;
        cout<<endl;

        switch(option){
            case 0:
                cout<<"Chiusura del programma in corso.." <<endl;
                break;
            case 1:
                {   
                    float a;
                    cout<<"Inserire la misura del lato del triangolo Equilatero: ";
                    cin>>a;
                    Triangle triangle(a);
                    cout<<"Perimetro: " <<triangle.perimeter() <<endl;
                    cout<<"Area: " <<triangle.area() <<endl;
                }
                break;
            case 2:
                {
                    float a, b;
                    cout<<"Inserire le misure del lato del triangolo Isoscele:" <<endl;
                    cin>>a >>b;
                    Triangle triangle(a, b);
                    cout<<"Perimetro: " <<triangle.perimeter() <<endl;
                    cout<<"Area: " <<triangle.area() <<endl;
                }
                break;
            case 3:
                {
                    float a, b, c;
                    cout<<"Inserire le misure del lato del triangolo Scaleno:" <<endl;
                    cin>>a >>b >>c;
                    Triangle triangle(a, b, c);
                    cout<<"Perimetro: " <<triangle.perimeter() <<endl;
                    cout<<"Area: " <<triangle.area() <<endl;
                }
                break;
            default:
                cout<<"Opzione non disponibile." <<endl;
                break;
        }
    } while(option!=0);

    return 0;
}