// menu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <string>
#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;
void pausa();

int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Conversiones" << endl;
		cout << "-----------" << endl << endl;
		cout << "\t1 .- Binario-Decimal" << endl;
		cout << "\t2 .- Decimal-Binario" << endl;
		cout << "\t3 .- Binario-Decimal" << endl;
		cout << "\t4 .- Binario-Hexadecimal" << endl;
		cout << "\t5 .- Salir" << endl;
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "Has elejido Binario-Decimal. \n";
			{
				int exp, digito;
				double binario, decimal;
				cout << "Introduce numero: ";
				cin >> binario;
				exp = 0;
				decimal = 0;
				while (((int)(binario / 10)) != 0)
				{
					digito = (int)binario % 10;
					decimal = decimal + digito * pow(2.0, exp);
					exp++;
					binario = (int)(binario / 10);
				}
				decimal = decimal + binario * pow(2.0, exp);
				cout << endl << "Decimal: " << decimal << endl;
			}
			pausa();
			break;
		case '2':
			system("cls");
			pausa();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Binario-Decimal. \n";
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Binario-Hexadecimal. \n";
			pausa();
			break;
		case '5':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} while (bandera != true);
	return 0;

}
//Desarrollamos la función
void pausa()
{
	cout << "Pulsa una tecla para continuar... ";
	getwchar();
	getwchar();
}
