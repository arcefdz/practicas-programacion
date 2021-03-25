#include <iostream>
using namespace std;

int main()
{
	double precio;

	cout << "Por favor, indique el precio de su billete: ";
	cin >> precio;

	double descuento4 = precio - (precio * 0.04);
	double descuento2 = precio - (precio * 0.02);

	cout << "Su precio reducido al 4% es: " << descuento4 <<
	" euros y su precio reducido al 2% es: " << descuento2 << " euros." << endl;

	return 0;
}
