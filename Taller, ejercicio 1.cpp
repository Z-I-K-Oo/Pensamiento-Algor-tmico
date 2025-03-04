#include <iostream>
#include <cmath>

int main() {
    int numero;

    std::cout << "De un numero entero: ";
    std::cin >> numero;

    int operacion = pow(numero, 2);
    std::cout << operacion << std::endl;

    return 0;
}