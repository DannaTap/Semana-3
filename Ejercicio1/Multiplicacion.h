//
// Created by ESCINF on 06/03/2026.
//

#ifndef CALCULADORA_MULTIPLICACION_H
#define CALCULADORA_MULTIPLICACION_H
#include "IOperacion.h"


class Multiplicacion:public IOperacion {
    public:
    double calcular (double a, double b) const override;
};


#endif //CALCULADORA_MULTIPLICACION_H