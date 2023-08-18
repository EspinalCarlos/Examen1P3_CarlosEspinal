#pragma once
#include <iostream>
#include <vector>
#include <vector>
#include <string>
using namespace std;

class Numero{
	string cdigitos;
	int numero;
	char letras[26] = { 'a','b', 'c' ,'d', 'e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

public:
	Numero();
	Numero(string digits);
	Numero (int numasign);
	vector<Numero*> procesarCadena();
	void asignarLetras(int digito);
	char* getLetras();
	void obtenerSecuencias(vector<Numero*> numeros);
	~Numero();
};

