#include <iostream>
using namespace std;

int main()
{
	const double BASE = 150;
	const double PRECIO_KM = 0.1;
	double kilometros;

	cout << "Por favor, introduzca el número de kilómetros a su destino: ";
	cin >> kilometros;

	double precio = BASE + (PRECIO_KM * kilometros);

	cout << "El precio de su billete es " << precio << " euros." << endl;

		return 0;

}
