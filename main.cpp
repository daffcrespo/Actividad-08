#include <iostream>
#include <string>
#include "laboratorio.h"

using namespace std;

main(){
    Computadora pc1 = Computadora("Dafne Crespo", "Windows", 8, 256);
    Computadora pc2 = Computadora("Jaqueline Romo", "Linux", 12, 128);
    Computadora pc3 = Computadora("Sam Glez", "Windows", 12, 256);
    Computadora pc4 = Computadora("Esperancita", "iOS", 12, 256);
    //Computadora pc5 = Computadora("Carlos H", "Linux", 8, 128);

    Laboratorio lc;

    lc << pc1 << pc2 << pc3 << pc4;
    Computadora pc5;
    cin >> pc5;
    lc.agregarComputadora(pc5);

    /*lc.agregarComputadora(pc1);
    lc.agregarComputadora(pc2);
    lc.agregarComputadora(pc3);
    lc.agregarComputadora(pc4);
    lc.agregarComputadora(pc5);*/
    lc.mostrar();

    /*pc1.setCapacidad(33);

    cout << pc1.getCapacidad() << endl;
    */

    return 0;
}