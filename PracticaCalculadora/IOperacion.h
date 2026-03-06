//
// Created by ESCINF on 06/03/2026.
//

#ifndef CALCULADORA_IOPERACION_H
#define CALCULADORA_IOPERACION_H


class IOperacion {
public:
    virtual double calcular(double a, double b)const;
    virtual ~IOperacion();
};


#endif //CALCULADORA_IOPERACION_H