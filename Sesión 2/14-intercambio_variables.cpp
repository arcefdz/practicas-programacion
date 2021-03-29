#include <iostream>
using namespace std;

int main ()
{
	double caja_izda, caja_dcha, intercambia;

	cout << "Por favor introduzca el valor de la caja de la izquierda: ";
	cin >> caja_izda;

	cout << "Por favor, introduzca el valor de la caja de la derecha: ";
	cin >> caja_dcha;

	intercambia = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = intercambia;

	cout << "La caja de la izquierda vale " << caja_izda
	     << " y la caja de la derecha vale " << caja_dcha << "." << endl;

	return 0;
}
