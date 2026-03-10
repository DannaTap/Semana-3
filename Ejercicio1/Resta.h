//
// Created by ESCINF on 06/03/2026.
//

#ifndef CALCULADORA_RESTA_H
#define CALCULADORA_RESTA_H
#include "IOperacion.h"


class Resta:public IOperacion {
public:

    double calcular (double a, double b)const override;
};


#endif //CALCULADORA_RESTA_H