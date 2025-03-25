#include <iostream>
/**
 * Programa que permite sacar el resultante factorial de un numero entero
 */

int main() {
    /**
     * Variables
     */
    int numero, resultado = 1;

    /**
     * Se pide al usuario que ingrese un numero
     */
    std::cout<<"Ingrese un numero: ";
    std::cin >> numero;

    /**
     * Se calcula el factorial del numero
     */

    if (numero != 0) {
        for (int i = numero; i >= 1; i--) {
                resultado = resultado * i;
        }
    }

    /**
     * Se imprime el resultado
     */
    std::cout << resultado << std::endl;

    /**
     * Finalizamos el programa
     */
    return 0;


}