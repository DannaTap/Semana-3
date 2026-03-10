#include <iostream>
using namespace std;
#include "Animal.h"

int main()
{
    Animal a;
    int opcion;

    cout << "Ingrese el nuumero del animal que desee escuchar: " << endl;
    cout << "1. Perro" << endl;
    cout << "2. Gato" << endl;
    cout << "3. Pajaro" << endl;
    cin >> opcion;

    a.sonido(opcion);

    return 0;
}
