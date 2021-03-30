#include <cmath>
#include <iostream>
using namespace std;

int main ()
{
	const double PI = 6 * asin(0.5);

	double media, desviacion, abscisa;

	cout << "Introduzca el valor de la media de la función gausiana: ";
	cin >> media;

	cout << "Introduzca el valor de la desviación típica de la función gausiana: ";
	cin >> desviacion;

	cout << "Introduzca el valor de abscisa de la función gausiana: ";
	cin >> abscisa;

	double gausiana = (1 / (desviacion * sqrt(2 * PI))) *
	                  exp(-0.5 * pow(((abscisa - media) / desviacion), 2));

	cout << "La función gausiana para " << abscisa << " tiene un valor de: "
	     << gausiana << endl;

	return 0;
}
