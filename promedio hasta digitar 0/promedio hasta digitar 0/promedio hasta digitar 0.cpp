//

#include <iostream>
using namespace std;
int main()
{
	int numero;
	float promedio=0;
	int parar = false;
	int cantidad=0;
	do 
	{
		cout << "digita el un numero\n";
		cin >> numero;
			if (numero % 10 == 5) {
				promedio += numero;
					cantidad++;
			}
		if (numero == 0) {
			parar = true;
			}

	} while (parar==false);
	promedio /= cantidad;
	cout << "este es el promedio: " << promedio;

}
