#include <iostream>
#include "Class.h"
using namespace std;
Cuenta::Cuenta(string NombreTitular, double saldoinicial) {
    Cuenta::titular;
    Cuenta::cantidad;
}
string Cuenta:: getTitular()
    {
        return titular;
    }
    double Cuenta::getCantidad()
    {
        return cantidad;
    }
    void Cuenta::setCantidad(double nuevaCantidad) {
        cantidad = nuevaCantidad;
    }
    void Cuenta::ingresar(double cantidadIngresada) {
        if (cantidadIngresada > 0) {
            cantidad += cantidadIngresada;
        }
    }
    void Cuenta::retirar(double cantidadRetirada) {
        if (cantidadRetirada > 0) {
            if (cantidadRetirada <= cantidad) {
                cantidad -= cantidadRetirada;
            }
            else {
                cantidad = 0.0;
            }
        }
    }


