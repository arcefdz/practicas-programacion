#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double precioi, preciof;

	cout << "Por favor, introduzca el precio inicial y el precio final separados "
	     << "por un espacio: ";
	cin >> precioi >> preciof;

	double variacion = abs(100 * ((precioi - preciof) / precioi));

	cout << "La variación porcentual de los precios es de: " << variacion 
	<< "%." << endl;

	return 0;
}
