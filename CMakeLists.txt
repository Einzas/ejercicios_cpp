cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        nivel_base/suma_numeros.cpp
        nivel_base/calculadora_simple.cpp
        nivel_intermedio/par_impar.cpp
        nivel_intermedio/tabla_multiplicar.cpp
        nivel_intermedio/factorial_numero.cpp
        nivel_intermedio/numero_mayor_arreglo.cpp
        nivel_avanzado/numero_primo.cpp
        nivel_avanzado/fibonacci.cpp
        nivel_avanzado/palindromo.cpp
)
