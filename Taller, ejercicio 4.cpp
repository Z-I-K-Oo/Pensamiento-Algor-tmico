#include <iostream>
#include <cmath>
int main() {
    int numero;

    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    double resultado = sqrt(numero);

    std::cout << resultado << std::endl;

    return 0;
}