#include <iostream>
#include "Rectangulo.h"
using namespace std;

Rectangulo::Rectangulo() { ingresarNumeros(); cout << obtenerAreaMaxima(); }


void Rectangulo::ingresarNumeros() {
    int ingresado2;
    cout << "Ingrese el size del arreglo: ";
    cin >> arrsize;
    numeros = new int[arrsize];
    for (size_t i = 0; i < arrsize; i++) {
        cout << endl << "Numero: ";
        cin >> ingresado2;
        cout << endl;
        numeros[i] = ingresado2;
    }
}

int Rectangulo::obtenerAreaMaxima() {
    int limit = 0;
    for (size_t i = 0; i < arrsize-limit; i++){
        int minim = numeros[i];
        int maxim = numeros[arrsize - limit];

        if (minim < maxim){
            altura = minim;
        }
        else {
            altura = maxim;
        }

        base = arrsize - limit - 2;

        if (altura*base > areaMax){
            areaMax = 0;
            int axb = altura * base;
            areaMax += axb;
        }



    }
    return areaMax;
}

Rectangulo::~Rectangulo() {
    delete numeros;
}
