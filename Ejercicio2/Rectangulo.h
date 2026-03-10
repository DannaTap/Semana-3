//
// Created by danna on 9/3/2026.
//

#ifndef SEMANA3EJE2_RECTANGULO_H
#define SEMANA3EJE2_RECTANGULO_H


#include "Figura.h"

class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double h);
    double area() const override;
};


#endif //SEMANA3EJE2_RECTANGULO_H