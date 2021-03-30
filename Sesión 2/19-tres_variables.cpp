#include <iostream>
using namespace std;

int main ()
{
	int val_x, val_y, val_z, intercambia;

	cout << "Introduzca tres valores separados por espacios: ";
	cin >> val_x >> val_y >> val_z;

	intercambia = val_x;
	val_x = val_z;
	val_z = val_y;
	val_y = intercambia;

	cout << "Los tres valores intercambiados son: " <<
	        " " << val_x << " " << val_y << " " << val_z << endl;

	return 0;
}
