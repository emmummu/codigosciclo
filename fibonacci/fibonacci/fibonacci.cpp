// fibonacci.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main()
{
     unsigned int numeroanterior =0;
     int numeroanterior2 = 1;
     unsigned int numero = 1;
    for (numero; numero <= 1000; numero=numeroanterior +numeroanterior2) {
        
       
        cout << numero << endl;
         numeroanterior2 = numeroanterior;
        numeroanterior = numero;
    }
}

