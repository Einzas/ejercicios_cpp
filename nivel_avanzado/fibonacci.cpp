#include <iostream>

/**
 * Programa que imprime la serie de fibonacci
 */

int main() {
    /**
     * Variables
     */
    int numeros;

    /**
     * Se pide al usuario que ingrese un numero
     */
    std::cout<<"Ingrese un numero: ";
    std::cin>>numeros;

    /**
     *Se declara las variables como long long para que pueda almacenar numeros grandes
     *el unsigned es para que no se pueda ingresar numeros negativos o se desborde el numero
     */
    unsigned long long  a = 0, b = 1, c = 0;

    for (int i = 0; i < numeros; i++) {
       {
           /**
            * Se imprime la serie de fibonacci
            */
           std::cout<< c << std::endl;

           /**
            * Se calcula la serie de fibonacci
            * esto en base a la formula de fibonacci
            * donde c es la suma de a y b
            * a toma el valor de b
            * y b toma el valor de c
            * en la siguiente iteracion
            * se repite el proceso
            */

           a = b;
           b = c;
           c = a + b;
        }
    }

    /**
     * Finalizamos el programa
     */
    return 0;
}
