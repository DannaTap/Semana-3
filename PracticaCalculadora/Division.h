//
// Created by ESCINF on 06/03/2026.
//

#ifndef CALCULADORA_DIVISION_H
#define CALCULADORA_DIVISION_H
#include "IOperacion.h"

class Division:public IOperacion {
public:
    double calcular(double a, double b)const override;
};


#endif //CALCULADORA_DIVISION_H