#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	const double PI = 6 * asin(0.5);
	const double GRADOS_RADIANES = (PI / 180);
	double grados1, grados2;

	cout << "Por favor, introduzca dos valores de grados separadados por un espacio: ";
	cin >> grados1 >> grados2;

	double radianes1 = grados1 * GRADOS_RADIANES;
	double radianes2 = grados2 * GRADOS_RADIANES;

	cout << "Los radianes correspondientes a los valores aportados son: "
	<< radianes1 << " " << radianes2 << endl;

	return 0;
}
