#pragma once
#include <iostream>
#include <vector>
#include <vector>
#include <string>
using namespace std;

class Numero{
	string cdigitos;
	int numero;
	string letras[8] = { "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	string assletras;

public:
	Numero();
	Numero(string digits);
	Numero (int numasign);
	vector<Numero*> procesarCadena();
	void asignarLetras(int digito);
	char* getLetras();
	void obtenerSecuencias(vector<Numero*> numeros);
	void general();
	int getAssNumero();
	string getAssLetras();
	~Numero();
};

