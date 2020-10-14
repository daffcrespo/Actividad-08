#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "computadora.h"

#include <iostream>
#include <string>

using namespace std;

class Laboratorio{
private:
    Computadora arreglo[5];
    size_t contador;
public:
    Laboratorio();

    void agregarComputadora(const Computadora &c);
    void mostrar();
    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.agregarComputadora(c);

        return l;
    }
};



#endif 