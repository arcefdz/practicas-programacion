#include <iostream>
using namespace std;

int main()
{
	const int SEG_EN_MIN = 60;
	const int SEG_EN_HOR = 3600;

	int hor_ini, min_ini, seg_ini,
		 hor_fin, min_fin, seg_fin;

	cout << "Por favor, introduzca las horas, minutos y segundos iniciales en este "
	<< "orden y separados por espacios: ";
	cin >> hor_ini >> min_ini >> seg_ini;

	cout << "Por favor, introduzca las horas, minutos y segundos finales en este "
	<< "orden y separados por espacios: ";
	cin >> hor_fin >> min_fin >> seg_fin;

	int seg_tot =
		(hor_fin - hor_ini) * SEG_EN_HOR +
		(min_fin - min_ini) * SEG_EN_MIN +
		(seg_fin - seg_ini);

	cout << "Han pasado un total de " << seg_tot << " segundos." << endl;

	return 0;
}
