#include <iostream>
#include <string>
#include "Numero.h";
using namespace std;

void menu() {
    cout << "---- MENU PRINCIPAL ----\n" << "Opcion 1: \n" << "Opcion 2: \n" << "Opcion 3: SALIDA \n\n" << "Ingrese la opcion:  ";
}

int main(){
    int opcion;
    do {
        menu();
        cin >> opcion;
        
        string sdigitos;
        Numero n;
        int arrsize, ingresado2;
        switch (opcion) {
            case 1:
                
                    cout << "Ingrese una cadena de dos numeros: ";
                    cin.ignore();
                    getline(cin, sdigitos);
             
                n = Numero(sdigitos);
                n.general();
                    break;
            case 2:
                cout << "Ingrese el size del arreglo: ";
                cin >> arrsize;
                int* arr = new int[arrsize];
                for (size_t i = 0; i < arrsize; i++){
                    cin >> ingresado2;
                    arr[i] = ingresado2;
                }

                    break;



        }
    } while (opcion != 3);

    
}