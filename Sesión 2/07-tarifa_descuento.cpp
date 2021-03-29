#include <iostream>
using namespace std;

int main()
{
	const double FACTOR_DESCA = 4;
	const double FACTOR_DESCB = 2;
	double precio;

	cout << "Por favor, indique el precio de su billete: ";
	cin >> precio;

	double descuentoa = precio - (precio * (FACTOR_DESCA / 100));
	double descuentob = precio - (precio * (FACTOR_DESCB / 100));

	cout << "Su precio reducido al " << FACTOR_DESCA << "% es: " << descuentoa <<
	" euros y su precio reducido al " << FACTOR_DESCB << "% es: " << descuentob <<
	" euros." << endl;

	return 0;
}
