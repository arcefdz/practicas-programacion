#include <iostream>
using namespace std;

int main()
{
	double kilometros;

	cout << "Por favor, introduzca el número de kilómetros a su destino: ";
	cin >> kilometros;

	double precio = 150 + (0.1 * kilometros);

	cout << "El precio de su billete es " << precio << " euros." << endl;

		return 0;

}
