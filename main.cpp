#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int sizeS = 5;
const int sizeF = 5;

int main() {

	string frases[sizeS];
	float flotantes[sizeF];


	// Pedir datos al usuario
	cout << "Ingrese 5 frases:" << endl;
	for (int i = 0; i < sizeS; i++) {

		getline(cin, frases[i]);

	}

	cout << "Ingrese 5 números flotantes:" << endl;

	for (int i = 0; i < sizeF; i++) {

		cin >> flotantes[i];

	}

	cin.ignore(); // Limpiar buffer




	// Guardar FRASES en archivo de texto
	ofstream archivoTexto("datos.txt");

	if (archivoTexto.is_open()) {
		cout << "\nEscribiendo en archivo txt: " << endl;

		for (string frase : frases) {
			archivoTexto << frase << endl;
		}
		archivoTexto.close();
	}

	else {
		cout << "Error al abrir archivo de texto." << endl;
	}



	// Guardar FLOTANTES en archivo de texto
	ofstream archivoTexto2("datos2.txt");
	if (archivoTexto2.is_open()) {
		cout << "\nEscribiendo en archivo txt: " << endl;

		for (float numero : flotantes) {
			archivoTexto2 << numero << endl;
		}
		archivoTexto2.close();
	}


	else {
		cout << "Error al abrir archivo de texto." << endl;
	}


	// Leer FRASES desde archivo de texto
	cout << "\nLeyendo desde archivo de texto:" << endl;
	ifstream archivoTextoLectura("datos.txt");
	if (archivoTextoLectura.is_open()) {
		string linea;

		while (getline(archivoTextoLectura, linea)) {
			cout << linea << endl;
		}
		archivoTextoLectura.close();
	}

	else {
		cout << "Error al leer archivo de texto." << endl;
	}

	// Leer FLOTANTES desde archivo de texto
	cout << "\nLeyendo desde archivo de texto:" << endl;

	ifstream archivoTextoLectura2("datos2.txt");
	float floatLeidos[sizeF];
	float paso;

	if (archivoTextoLectura2.is_open()) {
		for (int i = 0; i < 5; i++) {
			archivoTextoLectura2 >> paso;
			cout << paso << " ";
			floatLeidos[i] = paso;

		}
		archivoTextoLectura2.close();
	}

	else {
		cout << "Error al leer archivo de texto." << endl;
	}
}