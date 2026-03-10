//
// Created by ESCINF on 06/03/2026.
//

#ifndef CALCULADORA_RAIZ_H
#define CALCULADORA_RAIZ_H
#include "IOperacion.h"

class Raiz:public IOperacion {
    public:
    double calcular (double a, double b)const override;
};


#endif //CALCULADORA_RAIZ_H