#include <iostream>

int main() {
    int numero_uno, numero_dos;

    /**
     * Primera instancia: se pide al usuario que ingrese un numero
     * std::cout: Imprime en la consola
     * std::cin: Lee de la consola
    */
    std::cout << "Ingrese un numero: ";
    std::cin >> numero_uno;

    /**
     * Segunda instancia: se pide al usuario que ingrese un numero
     *
    */
    std::cout << "Ingrese otro numero: ";
    std::cin >> numero_dos;

    /**
     * Tercera instancia: se imprime la suma de los dos numeros
    */

    int resultado = numero_uno + numero_dos;

    /**
     * std::endl: Salto de linea
    */
    std::cout << "La suma de los numeros es: " << resultado << std::endl;

    /**
     * Finalizamos el programa
    */
    return 0;
}
