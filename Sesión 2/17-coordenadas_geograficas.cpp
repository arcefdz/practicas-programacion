#include <cmath>
#include <iostream>
using namespace std;

int main ()
{
	const double PI = 6 * asin(0.5);
	const double GRADOS_RADIANES = (PI / 180);

	double glat_1, glat_2, glon_1, glon_2;

	cout << "Introduzca las coordenadas del primer lugar en grados, " <<
	        "primero las latitudinales y después las longitudinales: ";
	cin >> glat_1 >> glon_1;

	cout << "Introduzca las coordenadas del segundo lugar en grados, " <<
	        "primero las latitudinales y después las longitudinales: ";
	cin >> glat_2 >> glon_2;

	double lat_1 = glat_1 * GRADOS_RADIANES;
	double lat_2 = glat_2 * GRADOS_RADIANES;
	double lon_1 = glon_1 * GRADOS_RADIANES;
	double lon_2 = glon_2 * GRADOS_RADIANES;

	double alpha = pow(sin(0.5 * (lat_2 - lat_1)), 2)
	             + cos(lat_1) * cos(lat_2) *
	               pow(sin(0.5 * (lon_2 - lon_1)), 2);

	cout << "El valor de alpha para los valores aportados es: " << alpha << endl;

	return 0;
}
