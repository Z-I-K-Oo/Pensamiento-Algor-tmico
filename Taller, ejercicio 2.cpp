#include <iostream>

int main() {
    float numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    float operacion = numero / 2;

    std::cout << operacion << std::endl; // Imprimimos el resultado

    return 0;
}