#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
    const int DICE_FACES = 6;
    const int DICE_SHOTS = 100;
    int n, p1=0, p2=0, p3=0, p4=0, p5=0, p6=0;
    float cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
    srand(time(0));
    for (int i = 0; i < DICE_SHOTS; i++){
        n = (rand() % 6) + 1;
        switch(n){
            case 1:
            cont1++;
            break;
            case 2:
            cont2++;
            break;
            case 3:
            cont3++;
            break;
            case 4:
            cont4++;
            break;
            case 5:
            cont5++;
            break;
            case 6:
            cont6++;
            break;
        }
    }
    p1 = (cont1/DICE_SHOTS)*100;
    p2 = (cont2/DICE_SHOTS)*100;
    p3 = (cont3/DICE_SHOTS)*100;
    p4 = (cont4/DICE_SHOTS)*100;
    p5 = (cont5/DICE_SHOTS)*100;
    p6 = (cont6/DICE_SHOTS)*100;
    cout<<p1 <<"% , " <<p2 <<"% , " <<p3 <<"% , " <<p4 <<"% , " <<p5 <<"% , " <<p6 <<"%" <<endl;
    return 0;
}