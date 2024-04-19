#pragma once
#include <string>
#include "ICuenta.h"

class Cuenta : public ICuenta {
private:
    std::string titular;
    double cantidad;

public:
    // Constructor
    Cuenta(const std::string& NombreTitular, double saldoinicial);

    // Implementación de los métodos de la interfaz
    std::string getTitular() const override;
    double getCantidad() const override;
    void setCantidad(double nuevaCantidad) override;
    void ingresar(double cantidadIngresada) override;
    void retirar(double cantidadRetirada) override;
};
