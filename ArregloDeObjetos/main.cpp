#include "Object.h"
#include "String.h"
#include "Char.h"
#include "Integer.h"
#include <iostream>

using namespace std;

int main()
{
	int opcion = 0;
	int numStr = 0;
	int numChar = 0;
	int numInt = 0;
	Object *array[4] = {0, 0, 0, 0};

	while (opcion != 3)
	{
		cout << "1 - Agregar Objeto" << endl;
		cout << "2 - Imprimir Arreglo" << endl;
		cout << "3 - Salir" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Indique el tipo de objeto (1 == Char, 2 == String, 3 == Integer)" << endl;
			int tipoCrear;
			cin >> tipoCrear;
			

			if (tipoCrear == 1)
			{
				char valorChar;
				cout << "Ingrese el valor: " << endl;
				cin >> valorChar;
				Char *tmp = new Char(valorChar);

				for (int i = 0; i < 5; i++)
				{
					if (i == 4)
					{
						cout << "El arreglo esta lleno" << endl;
						break;
					}
					if (array[i] == 0)
					{
						array[i] = tmp;
						numChar++;
						break;
					}
				}
			}

			if (tipoCrear == 2)
			{
				std::string valorString;
				cout << "Ingrese el valor: " << endl;
				cin >> valorString;
				String *tmp = new String(valorString);

				for (int i = 0; i < 5; i++)
					{
					if (i == 4)
					{
						cout << "El arreglo está lleno" << endl;
						break;
					}
				
					if (array[i] == 0)
					{
						array[i] = tmp;
						numStr++;
						break;
					}
				}
			}

			if (tipoCrear == 3)
			{
				int valorInt;
				cout << "Ingrese el valor: " << endl;
				cin >> valorInt;
				Integer *tmp = new Integer(valorInt);

				for (int i = 0; i < 5; i++)
				{
					if (i == 4)
					{
						cout << "El arreglo está lleno" << endl;
						break;
					}
					if (array[i] == 0)
					{
						array[i] = tmp;
						numInt++;
						break;
					}
				}
			}
		}
		if (opcion == 2)
		{
			for (int i = 0; i < 4; i++)
			{
				if (array[i] != 0)
				{
					array[i]->Imprimir();
					cout << endl;
				}
			}
			cout << "Numero de Chars: " << numChar << endl;
			cout << "Numero de Strings: " << numStr << endl;
			cout << "Numero de Integers: " << numInt << endl << endl;
		}
		if (opcion == 3)
			system("exit");
	}


	/*array[0] = new String("Hola");
	array[1] = new Integer(100);
	array[2] = new Char('U');
	array[3] = new String("Mundo");*/

	system("pause");

	return 0;
}