#include <iostream>
/**
 *Calculadora simple, se ejecuta el comando, se selecciona el menu y se sale del programa
 */

int main() {
    /**
     * Variables
     */
    float numero_uno, numero_dos;
    int opcion;
    float resultado;

    /**
     * Menu
     */

    std::cout << "======================================" << std::endl;
    std::cout << "| Bienvenido a la calculadora simple |" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicación" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Salir" << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Seleccione una opción: ";
    std::cin >> opcion;

    /**
     * Switch
     */
    switch (opcion) {
        case 1:
            /**
             * Suma
             */
            std::cout << "Ingrese un numero: ";
            std::cin >> numero_uno;
            std::cout << "Ingrese otro numero: ";
            std::cin >> numero_dos;
            resultado = numero_uno + numero_dos;
            std::cout << "La suma de los numeros es: " << resultado << std::endl;
            break;
        case 2:
            /**
             * Resta
             */
            std::cout << "Ingrese un numero: ";
            std::cin >> numero_uno;
            std::cout << "Ingrese otro numero: ";
            std::cin >> numero_dos;
            resultado = numero_uno - numero_dos;
            std::cout << "La resta de los numeros es: " << resultado << std::endl;
            break;
        case 3:
            /**
             * Multiplicación
             */
            std::cout << "Ingrese un numero: ";
            std::cin >> numero_uno;
            std::cout << "Ingrese otro numero: ";
            std::cin >> numero_dos;
            resultado = numero_uno * numero_dos;
            std::cout << "La multiplicación de los numeros es: " << resultado << std::endl;
            break;
        case 4:
            /**
             * Division
             */
            std::cout << "Ingrese un numero: ";
            std::cin >> numero_uno;
            std::cout << "Ingrese otro numero: ";
            std::cin >> numero_dos;
            resultado = numero_uno / numero_dos;
            std::cout << "La division de los numeros es: " << resultado << std::endl;
            break;
        case 5:
            /**
             * Salir
             */
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        default:
            /**
             * Opción no válida
             */
            std::cout << "Opción no válida" << std::endl;
            break;
    }

    return 0;
}
