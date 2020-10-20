#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla(){
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(17) << "Nombre equipo";
        archivo << setw(20) << "Sistema Operativo";
        archivo << setw(15) << "Memoria Ram";
        archivo << setw(8) << "Capacidad";
        archivo << endl << "------------------------------------------------------------" << endl;
        for (size_t i = 0; i < contador; i++){
            Computadora &c = arreglo[i];
            archivo << c;

        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("compus.txt");
    if (archivo.is_open()){
        for (size_t i=0; i < contador; i++){
            Computadora &c = arreglo[i];
            archivo << c.getNombre() << endl;
            archivo << c.getSistema() << endl;
            archivo << c.getMemoria() << endl;
            archivo << c.getCapacidad() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("compus.txt");
    if (archivo.is_open()){
        string temp;
        int memoria;
        int capacidad;

        Computadora c;

        while (true){
            getline(archivo, temp);
            if (archivo.eof()){
                break;
            }
            c.setNombre(temp);

            getline(archivo, temp);
            c.setSistema(temp);

            getline(archivo, temp);
            memoria = std::stoi(temp);
            c.setMemoria(memoria);

            getline(archivo, temp);
            capacidad = std::stoi(temp);
            c.setCapacidad(capacidad);

            agregarComputadora(c);

        }
    }
    archivo.close();
}