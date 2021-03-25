#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double numero, potencia;

	cout << "Por favor, indique el número decimal que quiere redondear: ";
	cin >> numero;

	cout << "Por favor, indique el número de decimales que quiere redondear: ";
	cin >> potencia;

	numero = numero * pow(10, potencia);
	numero = round(numero);
	numero = numero * pow(10, -potencia);

	cout << "Su número decimal redondeado es: " << numero << "." << endl;

	return 0;
}
