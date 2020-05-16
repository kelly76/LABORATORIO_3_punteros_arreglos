#include <iostream>

using namespace std;

int tamCadenaR(char* cadena) {           //funcion recursiva
    if (*cadena == '\0')
        return 0;
    else
        return (1 + tamCadenaR(++cadena));
}

int tamCadenaI(char* cadena) {           //funcion iterativa
    int tam = 0;
    while (*cadena != '\0') {
        cadena++;             //recorre toda la cadena
        tam++;
    }
    return tam;
}

int main()
{
    char cadena[] = "Hola mundo";

    cout << "metodo iterativo: " << tamCadenaI(cadena) << endl;

    cout << "metodo recursivo: " << tamCadenaR(cadena) << endl;

    return 0;
}
