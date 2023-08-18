#pragma once
#include <string>
#include <iostream>
#include <vector>
class Rectangulo{
	int* numeros;
	int arrsize;
	int base;
	int altura;
	int areaMax = 0;

public:
	Rectangulo();
	~Rectangulo();
	void ingresarNumeros();
	int obtenerAreaMaxima();
};

