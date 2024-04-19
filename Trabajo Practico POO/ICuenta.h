#pragma once
#include <string>
class ICuenta {
public:

    virtual ~ICuenta() {}
    virtual std::string getTitular() const = 0;
    virtual double getCantidad() const = 0;
    virtual void setCantidad(double nuevaCantidad) = 0;
    virtual void ingresar(double cantidadIngresada) = 0;
    virtual void retirar(double cantidadRetirada) = 0;
};

 




