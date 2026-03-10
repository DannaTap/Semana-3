//
// Created by danna on 9/3/2026.
//

#ifndef SEMANA3EJE3_ANIMAL_H
#define SEMANA3EJE3_ANIMAL_H
#include <iostream>
using namespace std;
class Animal {
public:
    void sonido(int tipo){
        if(tipo == 1){
            cout << "Guau" << endl;
        }
        if(tipo == 2){
            cout << "Miau" << endl;
        }
        if(tipo == 3){
            cout << "Pio" << endl;
        }
        if(tipo < 1 || tipo > 3){
            cout << "Opcion invalida" << endl;
        }
    }
};


#endif //SEMANA3EJE3_ANIMAL_H