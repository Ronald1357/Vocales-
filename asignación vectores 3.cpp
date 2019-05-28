//3. Vector Tipo double que solo acepte notas entre 0 y 20, caso contrario
// asigna 0 a ese valor. tamaño del vector  15
#include<iostream>
using namespace std;
void main()
{
	//EJEMPLO 3
	double *notas, nota;
	notas = new double[15];

	//Ingreso de Datos
	for (int i = 0; i < 15; i++) // Paso 3 - Operar
	{
		cout << "Ingrese nota entre 0 y 20 " << endl;
		cout<<i + 1 << ": ";
		cin >> nota;
		if (nota >= 0 && nota <= 20) {
			cout << "Ingreso nota valida , entonces se ingresara la nota"<<endl;
			notas[i] = nota;
		}
		else {
			cout << "Ingreso nota invalida , entonces se ingresara 0 como nota"<<endl;
			notas[i] = 0;
		}

	}

	cout << "Los valores son : "<<endl;
	//imprimir
	for (int i = 0; i < 15; i++) // Paso 3 - Operar
	{
		cout << notas[i] << endl;
	}

	system("pause");
}
