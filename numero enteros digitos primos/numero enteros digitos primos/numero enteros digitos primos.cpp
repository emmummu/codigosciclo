

#include <iostream>
using namespace std;
int main()
{
    int numero;
    int unidades;
    int decenas;
    int intento;
    int primo=0;
    cout << "ingrese el numero" << endl;
    cin >> numero;
    unidades = (numero % 10) / 1;
    decenas = (numero % 100) / 10;
    
    numero = abs(unidades + decenas);
   
    for (int i = 1; i <= 10; i++) {
        intento = numero % i;

        if (intento == 0) {
            primo++;
        }
        
    }

    if (primo == 2) {
        cout << "es un primo";
    }
    else {
        cout << "no es un primo";
    }
}

