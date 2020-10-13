#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <string>

using namespace std;

class Computadora{
private:
    string nombreEquipo;
    string sistemaOperativo;
    int memoriaRam;
    int capacidad;
public:
    Computadora();
    Computadora(const string &nombreEquipo, const string &sistemaOperativo, int memoriaRam, int capacidad);

    void setNombre(const string &n);
    void setSistema(const string &s);
    void setMemoria(int m);
    void setCapacidad(int c);

    string getNombre();
    string getSistema();
    int getMemoria();
    int getCapacidad();

};

#endif