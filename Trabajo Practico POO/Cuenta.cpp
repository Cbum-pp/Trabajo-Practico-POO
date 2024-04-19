#include "Cuenta.h"
#include <iostream>

// Constructor
Cuenta::Cuenta(const std::string& NombreTitular, double saldoinicial)
    : titular(NombreTitular), cantidad(saldoinicial) {}

// Getter para el titular de la cuenta
std::string Cuenta::getTitular() const {
    return titular;
}

// Getter para la cantidad actual en la cuenta
double Cuenta::getCantidad() const {
    return cantidad;
}

// Setter para la cantidad
void Cuenta::setCantidad(double nuevaCantidad) {
    cantidad = nuevaCantidad;
}

// Método para ingresar dinero en la cuenta
void Cuenta::ingresar(double cantidadIngresada) {
    if (cantidadIngresada > 0) {
        cantidad += cantidadIngresada;
        std::cout << "Ingresado: " << cantidadIngresada << std::endl;
    }
    else {
        std::cout << "El monto a ingresar debe ser positivo." << std::endl;
    }
}

// Método para retirar dinero de la cuenta
void Cuenta::retirar(double cantidadRetirada) {
    if (cantidadRetirada > 0) {
        if (cantidadRetirada <= cantidad) {
            cantidad -= cantidadRetirada;
            std::cout << "Retirado: " << cantidadRetirada << std::endl;
        }
        else {
            std::cout << "Fondos insuficientes para retirar." << std::endl;
        }
    }
    else {
        std::cout << "El monto a retirar debe ser positivo." << std::endl;
    }
}
