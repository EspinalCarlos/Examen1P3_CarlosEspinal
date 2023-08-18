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
        switch (opcion) {
            case 1:
                cout << "Ingrese una cadena de dos numeros: ";
                cin.ignore();
                getline(cin, sdigitos);
                Numero n = Numero(sdigitos);
                n.procesarCadena();



        }
    } while (opcion != 3);

    
}