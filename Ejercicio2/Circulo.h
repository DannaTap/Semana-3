//
// Created by danna on 9/3/2026.
//

#ifndef SEMANA3EJE2_CIRCULO_H
#define SEMANA3EJE2_CIRCULO_H


#include "Figura.h"

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(double r);
    double area() const override;
};



#endif //SEMANA3EJE2_CIRCULO_H