#include <iostream>
using namespace std;

int main ()
{
	double capital, interes;

	cout << "Por favor, introduzca su capital: ";
	cin >> capital;

	cout << "Por favor, introduzca el interés de su cuenta: ";
	cin >> interes;

	capital = capital + (capital * (interes / 100));

	cout << "El total de su capital con intereses es de: " << capital << " euros."
	<< endl;

	return 0;
}
