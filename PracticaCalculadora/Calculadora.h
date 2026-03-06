//
// Created by ESCINF on 06/03/2026.
//

#ifndef CALCULADORA_CALCULADORA_H
#define CALCULADORA_CALCULADORA_H
#include <string>
#include "IOperacion.h"

class Calculadora {
private:
    const IOperacion* op;
public:
    Calculadora();
    void setOperacion(const IOperacion* operacion);
    double ejecutar (double a, double b)const;
};


#endif //CALCULADORA_CALCULADORA_H