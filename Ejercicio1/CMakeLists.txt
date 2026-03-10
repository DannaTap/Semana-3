cmake_minimum_required(VERSION 4.1)
project(CALCULADORA)

set(CMAKE_CXX_STANDARD 20)

add_executable(CALCULADORA main.cpp
        IOperacion.cpp
        IOperacion.h
        Suma.cpp
        Suma.h
        Resta.cpp
        Resta.h
        Calculadora.cpp
        Calculadora.h
        Multiplicacion.cpp
        Multiplicacion.h
        Division.cpp
        Division.h
        Raiz.cpp
        Raiz.h)
