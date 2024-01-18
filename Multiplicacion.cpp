/*
Titulo: Tabla de Multiplicar. 
Autor:Jose Andres Salame Lijeron
Descripcion: Escribir un programa que imprima la tabla de multiplicar de un numero dado por el usuario. 
Fecha:2024 - 01 - 17
*/

#include <iostream>

// Realizaremos el espacio de nombres std para evitar la repetici�n de std::
using namespace std;

int main() {
	int numero;
	
	// Mensaje para solicitar al usuario que ingrese un n�mero
	cout << "Ejercicio 1: Tabla de Multiplicar\n";
	cout << "Ingrese el n�mero para realizar la tabla: ";
	cin >> numero;
	
	// Mostrar la tabla de multiplicar del n�mero ingresado
	cout << "Tabla de multiplicar del " << numero << ":\n";
	for (int i = 1; i <= 10; ++i) {
		// Mostrar cada multiplicaci�n en una l�nea
		cout << numero << "x" << i << "=" << (numero * i) << "\n";
	}
	
	return 0;
}
