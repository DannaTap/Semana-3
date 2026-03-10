//
// Created by danna on 9/3/2026.
//

#include "Circulo.h"

Circulo::Circulo(double r) {
    radio = r;
}

double Circulo::area() const {
    return 3.1416 * radio * radio;
}