// calculandoMES.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int mes, year, dd;
	cout << "Introduce el year: ";
	cin >> year;
	cout << "Introduce el mes (numero): ";
	cin >> mes;
	switch (mes)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		dd = 31;
		break;
	case 4: case 6: case 9: case 11:
		dd = 30;
		break;
	case 2:
		dd = 28;
		break;
	default:
		cout << "El mes no es valido";
		break;

	}
	if (mes >= 1 && mes <= 12)
	{
		cout << "El mes " << mes << " del year "
			<< year << " tiene " << dd << " dias";
	}
	return 0;
}
