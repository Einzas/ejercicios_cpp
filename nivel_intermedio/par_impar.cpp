#include <iostream>

/**
 * Programa que determina si un numero es par o impar
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
    *  Se determina si el numero es par o impar
    *  Si el residuo de la division del numero entre 2 es 0, entonces el numero es par
    *  caso contrario, el numero es impar
    */
    if (numero % 2 == 0) {
        std::cout << "El numero es par" << std::endl;
    } else {
        std::cout << "El numero es impar" << std::endl;
    }

    /**
     * Finalizamos el programa
     */

    return 0;




}