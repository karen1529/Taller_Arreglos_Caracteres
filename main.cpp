#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    int opcion;
    int numCaracteresIzq, numCaracteresDer;
    string cadena;
    string letra;
    string cadenaFinal;
    char vacio = ' ';
    char borrar;
    string borrada = "";
    string comparar = "";
    string interseccion = "";

    cout<<"Ingrese una frase o cadena de texto: ";
    //cin>>cadena;
    getline(cin, cadena, '\n');
    fflush(stdin);
    cout<<"5. Desea rellenar por izquierda: "<<
    "\n 6.Desea rellenar por derecha: "<<
    "\n 7. Desea borrar caracteres de una cadena"<<
    "\n 8. Desea interseccionar dos cadenas  \n";
    cin>>opcion;

    switch (opcion) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            cout<<"Ingrese el numero de veces que aparecera el caracter por izquierda: ";
            cin>>numCaracteresIzq;

            cout<<"Ingrese el caracter: ";
            cin>>letra;
            //cin.getline(llenarIzq, numCaracteresIzq, '\n');

            for (int i = 0; i < numCaracteresIzq; ++i) {
                cadenaFinal += letra;

            }

            cadenaFinal += cadena;
            cout<<cadenaFinal<<endl;

            break;
        case 6:
            cout<<"Ingrese el numero de veces que aparecera el caracter por derecha: ";
            cin>>numCaracteresDer;

            cout<<"Ingrese el caracter: ";
            cin>>letra;
            //cin.getline(llenarDer, numCaracteresDer, '\n');

            for (int i = 0; i < numCaracteresDer; ++i) {
                if (i == 0){
                    cadenaFinal += cadena;
                }
                cadenaFinal += letra;
            }
            //cadena += cadenaFinal;
            cout<<cadenaFinal<<endl;

            break;

        case 7:


            cout<<"Ingrese la letra que desea borrar: "<<endl;
            cin>>borrar;

            for (int i = 0; i < cadena.length(); ++i) {

                if (cadena[i] == borrar){
                    cadena[i] = vacio;
                }else{
                    borrada += cadena[i];
                }
            }

            cout<<borrada<<"\n";
            //cout<<cadena;

            break;

        case 8:

            cout<<"Ingrese la palabra a comparar";
            fflush(stdin);
            //cin>>comparar;
            getline(cin, comparar, '\n');

            for (int i = 0; i < comparar.length(); ++i) {
                int band = 1;
                for (int j = 0; j < cadena.length(); ++j) {
                    if (comparar[i] == cadena[j]){
                        band++;
                    }
                }
                cout<<"\n band "<<band;
                if (band != 1){
                    int band2 = 1;
                    for (int j = 0; j < interseccion.length(); ++j) {
                        if (comparar[i] == interseccion[j]){
                            band2++;
                        }
                        cout<<"FUNCIONA!";
                    }
                    cout<<"\n band2 "<<band2;
                    if (band2 == 1){
                        interseccion += comparar[i];
                    }
                }
            }

            cout<<"\n Interseccion "<<interseccion<<endl;
            break;

       default:
            cout<<"Opcion ingresada **INCORRECTA**";

    }

    getch();
    return 0;
}