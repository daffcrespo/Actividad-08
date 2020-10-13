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
    for (i=0; i<contador;i++){
        Computadora &c = arreglo[i];
        cout << "Nombre del equipo: " << c.getNombre()<<endl;
        cout << "Sistema Operativo: " << c.getSistema()<<endl;
        cout << "Memoria Ram: " << c.getMemoria()<<endl;
        cout << "Capacidad: " << c.getCapacidad()<<endl<<endl;
        

    }
    cout <<endl<< "Presione entrar para continuar..."<<endl;
    cin.get();
}