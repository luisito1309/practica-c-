/*
Titulo: Generacion de numeros aleatorios. 
Autor:Jose Andres Salame Lijeron
Descripcion: Escribir un programa que imprina "N" numeros aleatorios entre 0 - 99, donde "N" sea ingresado por el usuario. 
Fecha:2024 - 01 - 17
*/

#include <iostream>
#include <cstdlib> // Necesario para la funcion rand()
#include <ctime>   // Necesario para la funcion time()

// Utilizamos el espacio de nombres std para evitar la repeticion de std::
using namespace std;

int main() {
	int cantidad;
	
	// Mensaje para solicitar al usuario que ingrese la cantidad de numeros a generar
	cout << "Ejercicio 2: Generacion de NUmeros Aleatorios\n";
	cout << "Cuantos numeros quiere generar? ";
	cin >> cantidad;
	
	// Inicializar la semilla para obtener numeros realmente aleatorios
	srand(time(0));
	
	// Mostrar los numeros aleatorios generados
	cout << "Numeros aleatorios generados: ";
	for (int i = 0; i < cantidad; ++i) {
		// Generar numeros aleatorios entre 0 y 99 y mostrarlos
		cout << rand() % 100;
		// Agregar una coma y un espacio entre los numeros (excepto el ultimo)
		if (i < cantidad - 1) {
			cout << ", ";
		}
	}
	cout << endl;
	
	return 0;
}
