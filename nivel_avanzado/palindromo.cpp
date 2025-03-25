#include <iostream>
#include <string.h>
#include <cctype>
/**
 * Programa que determina si una frase y palabra es palindromo
 */

int main() {
    /**
     * Variables
     */
    std::string frase = "anita lava la tina";
    std::string frase_nueva;
    /**
     * Se imprime la frase
     */
    std::cout<<frase<<std::endl;

    /**
     * Se convierte la frase a minusculas
     * y limpiamos los espacios en blanco
     */

    for(char c : frase) {
        if (c != ' ') {
            frase_nueva += std::tolower(c);
        }
    }
    /**
     * Se determina si la frase es palindromo
     */
    unsigned long long lenght = frase_nueva.length();
    for(int i = 0; i <  lenght /2; ++i) {
        if (frase_nueva[i] != frase_nueva[lenght - i - 1]) {
            std::cout<<"No es palindromo"<<std::endl;
            return 0;
        }
    }

    /**
     * Se imprime el resultado
     */
    std::cout<<"La frase es palindromo"<<std::endl;

    /**
     * Finalizamos el programa
     */

    return 0;

}
