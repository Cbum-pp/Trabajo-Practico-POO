#include "Cuenta.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombreTitular;
    double saldoinicial;

    cout << "Introduce el nombre del titular: ";
    cin >> nombreTitular;

    std::cout << "Introduce el saldo inicial: $";
    std::cin >> saldoinicial;

    Cuenta miCuenta(nombreTitular, saldoinicial);
    cout << "Titular: " << miCuenta.getTitular() << endl;
    cout << "Saldo inicial: $" << miCuenta.getCantidad() << endl;

    // Realiza operaciones de ingreso y retiro según sea necesario
    double cantidadIngresada, cantidadRetirada;

    cout << "Ingresa una cantidad para depositar: $";
    cin >> cantidadIngresada;
    miCuenta.ingresar(cantidadIngresada);

    cout << "Ingresa una cantidad para retirar: $";
    cin >> cantidadRetirada;
    miCuenta.retirar(cantidadRetirada);
    cout << "Saldo actual: $" << miCuenta.getCantidad() ;
    return 0;
}
