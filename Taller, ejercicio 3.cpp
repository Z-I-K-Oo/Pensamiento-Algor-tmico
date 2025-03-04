#include <iostream>
#include <cmath>

int main() {
    float numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    float resultado = pow(numero, 2) + 3.0f / 5.0f;

    std::cout << resultado << std::endl;

    return 0;
}