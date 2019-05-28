//3. Vector Tipo double que solo acepte notas entre 0 y 20, caso contrario
// asigna 0 a ese valor. tamaño del vector  15
#include<iostream>
using namespace std;
void main21()
{
	//EJEMPLO 3
	double *notas,nota;
	notas = new double[15];

	//Ingreso de Datos
	for (int i = 0; i < 15; i++) // Paso 3 - Operar
	{
		cout << "Ingrese nota entre 0 y 20 " << i + 1 << ": ";
		cin >> nota;
		if (nota >= 0 && nota <= 20) { 
			cout << "Ingreso nota valida , entonces se ingresara la nota";
			notas[i] = nota; }
		else {
			cout << "Ingreso nota invalida , entonces se ingresara 0 como nota";
			notas[i] = 0;
		}

	}


	//imprimir
	for (int i = 0; i < 15; i++) // Paso 3 - Operar
	{
		cout << "Los valores son : " << notas[i] << endl;
	}

	system("pause");
}
