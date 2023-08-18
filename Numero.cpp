#include "Numero.h"
#include <cstring>
#include <iostream>
using namespace std;

Numero::Numero() {  }

Numero::Numero(string digits) {
	cdigitos = digits;
}

Numero::Numero(int numasign) {
	numero = numasign;
}

Numero::~Numero() {
}

vector<Numero*> Numero::procesarCadena() {
	vector<Numero*> vnumero;
	for (size_t i = 0; i < cdigitos.size(); i++){
		Numero* a;

		a = new Numero((int)cdigitos[i] - 48-2);
		a->asignarLetras(a->getAssNumero());
		vnumero.push_back(a);
		
	}
	
	return vnumero;
}
void Numero::asignarLetras(int digito) {
	assletras = letras[digito];
}

int Numero::getAssNumero() {
	return numero;
}

void Numero::obtenerSecuencias(vector<Numero*> v) {
	Numero* obj1 = v[0];
	Numero* obj2 = v[1];

	string ob1letters = obj1->getAssLetras();
	string ob2letters = obj2->getAssLetras();
	for (int i = 0; i < ob1letters.size(); i++){
		char temp = ob1letters[i];
		for (size_t j = 0;  j < ob2letters.size();  j++){
			cout << temp << ob2letters[j] << " ";
		}
	}
	delete obj1;
	delete obj2;

	
}

void Numero::general() {
	vector<Numero*> pc = procesarCadena();
	obtenerSecuencias(pc);
	cout << "\n";
}

string Numero::getAssLetras() {
	return assletras;
}

