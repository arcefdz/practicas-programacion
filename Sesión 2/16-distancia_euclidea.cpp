#include <cmath>
#include <iostream>
using namespace std;

int main ()
{
	double x_1, x_2, y_1, y_2;

	cout << "Por favor, introduzca las coordenadas del primer punto: ";
	cin >> x_1 >> y_1;

	cout << "Por favor, introduzca las coordenadas del segundo punto: ";
	cin >> x_2 >> y_2;

	double punto_1 = (x_1 - x_2) * (x_1 - x_2);
	double punto_2 = (y_1 - y_2) * (y_1 - y_2);
	double distancia = sqrt(punto_1 + punto_2);

	cout << "La distancia euclidea entre los dos puntos es: " << distancia << endl;

	return 0;
}
