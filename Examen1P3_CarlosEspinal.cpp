#include <iostream>
#include <string>
#include "Numero.h";
#include "Rectangulo.h"
using namespace std;
//menu
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
             //llamado de la clase
                n = Numero(sdigitos);
                n.general();
                    break;
            case 2:
                //llamado de la clase
                Rectangulo();

                    break;



        }
    } while (opcion != 3);

    
}