#include <iostream>
using namespace std;
#include "Rectangulo.h"
#include "Figura.h"
#include "Circulo.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
        Circulo c(5);
        Rectangulo r(4,6);

        Figura* f1 = &c;
        Figura* f2 = &r;

        cout << "Area del circulo: " << f1->area() << endl;
        cout << "Area del rectangulo: " << f2->area() << endl;

        return 0;
}