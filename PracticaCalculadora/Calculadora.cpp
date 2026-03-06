//
// Created by ESCINF on 06/03/2026.
//

#include "Calculadora.h"

Calculadora ::Calculadora() {
    this->op = nullptr;
}

void Calculadora::setOperacion(const IOperacion* operacion) {
    this->op =operacion;
}

double Calculadora::ejecutar(double a, double b) const {
    if (this->op == nullptr) {
        return 0;
    }
    return this->op->calcular(a,b);
}