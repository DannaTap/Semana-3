//
// Created by ESCINF on 06/03/2026.
//

#ifndef CALCULADORA_SUMA_H
#define CALCULADORA_SUMA_H
#include "IOperacion.h"


class Suma:public IOperacion {
    public:
    double calcular(double a, double b) const override;
};


#endif //CALCULADORA_SUMA_H