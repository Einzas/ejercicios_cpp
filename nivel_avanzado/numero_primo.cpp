#include <iostream>

/**
 * Programa que determina si un numero es primo
 */

int main() {
    /**
     * Variables
     */
    int numero, contador = 0;

    /**
     * Se pide al usuario que ingrese un numero
     */
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;
    /**
     * Se determina si el numero es primo
     */
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
         std::cout<<"Numero primo"<<std::endl;
    } else {
        std::cout<<"Numero no primo"<<std::endl;
    }

    /**
     * Finalizamos el programa
     */

    return 0;
}
