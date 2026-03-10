//
// Created by danna on 9/3/2026.
//

#include "Rectangulo.h"


Rectangulo::Rectangulo(double b, double h) {
    base = b;
    altura = h;
}

double Rectangulo::area() const {
    return base * altura;
}