#include <iostream>

/**
 * Programa que imprime la tabla de multiplicar de un numero
 */

int main() {
    /**
     * Variables
     */
    int numero;

    /**
     * Se pide al usuario que ingrese un numero
     */
    std::cout<<"Ingrese un numero: ";
    std::cin >> numero;

    /**
     * Se imprime la tabla de multiplicar
     */
    for (int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    /**
     * Finalizamos el programa
     */

    return 0;
}