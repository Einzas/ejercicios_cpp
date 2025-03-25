#include <iostream>

/**
 * Programa que determina el numero mayor de un arreglo
 */

int main() {
    /**
     * Variables
     */
    int resultado = 0;
    /**
    * Se inicializa el resultado con el primer elemento del arreglo
    */

    int arreglo[5] = {1, 222, 351, 44, 5};

    /**
     * Se recorre el arreglo y se compara el valor actual con el resultado
     * este for es distinto al for que se uso en la tabla de multiplicar
     * este for se llama for each y recorre todos los elementos del arreglo
     */
    for (int i : arreglo) {
        if (i > resultado) {
            resultado = i;
        }
    }

    /**
     * Se imprime el resultado
     */
    std::cout <<"El numero mayor es: " << resultado << std::endl;

    /**
     * Finalizamos el programa
     */
    return 0;

}