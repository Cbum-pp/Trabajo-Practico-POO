#pragma once
#include <string>
class Cuenta {
private:
    string titular;
    double cantidad;
public:
    Cuenta(string NombreTitular, double saldoinicial)
    {
        titular = NombreTitular;
        cantidad = saldoinicial;
    }    
    string getTitular();
    double getCantidad();
    void setCantidad(double nuevaCantidad);
    void ingresar(double cantidadIngresada);
    void retirar(double cantidadRetirada);                              
};

 




