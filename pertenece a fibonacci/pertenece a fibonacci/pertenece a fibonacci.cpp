// pertenece a fibonacci.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    int numerodig;
    cout << "digita numero de 2 digitos\n";
    cin >> numerodig;
    unsigned int numeroanterior = 0;
    int numeroanterior2 = 1;
    unsigned int numero = 1;
    bool si; 
    int comprobacion;
  
        for (numero; numero <= 100; numero = numeroanterior + numeroanterior2) {


           
            numeroanterior2 = numeroanterior;
            numeroanterior = numero;
            comprobacion = numerodig % numero;
            if (comprobacion == 0&&numero>10) {
                cout << "esta dentro de la sucesion\n";
                return 0;
            }
        }
        cout<<"no esta dentro de la sucecion"
        
    
}


