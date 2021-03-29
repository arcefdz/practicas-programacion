#include <iostream>
using namespace std;

int main ()
{
	char cota_inf, esp, cota_sup;
	double num_a, num_b;

	cout << "Por favor, escriba su intervalo. Utilice () para indicar que es abierto "
	<< "y [] para indicar que es cerrado: ";
	cin >> cota_inf >> num_a >> esp >> num_b >> cota_sup;

	cout << "Su intervalo es: " << cota_inf << num_a << " " << esp << " " << num_b
	<< cota_sup << endl;

	return 0;
}
