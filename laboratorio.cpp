#include "laboratorio.h"

Laboratorio::Laboratorio(){
    contador = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c){
    if (contador < 5){
        arreglo[contador] = c;
        contador++;
    }
    else{
        cout<<endl<<"El arreglo está lleno"<<endl;
    }

}

void Laboratorio::mostrar(){
    int i;
    cout << left;
    cout << setw(17) << "Nombre equipo";
    cout << setw(20) << "Sistema Operativo";
    cout << setw(15) << "Memoria Ram";
    cout << setw(8) << "Capacidad";
    cout << endl << "------------------------------------------------------------" << endl;
    for (i=0; i<contador;i++){
        Computadora &c = arreglo[i];
        cout << c;
    }
    cout <<endl<< "Presione entrar para continuar..."<<endl;
    cin.get();
}