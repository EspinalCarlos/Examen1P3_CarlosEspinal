#include "Rectangulo.h"
#include <iostream>
#include <string>

void Rectangulo::ingresarNumeros() {
    cout << "Ingrese el size del arreglo: ";
    cin >> arrsize;
    int* arr = new int[arrsize];
    for (size_t i = 0; i < arrsize; i++) {
        cin >> ingresado2;
        arr[i] = ingresado2;
    }
}
