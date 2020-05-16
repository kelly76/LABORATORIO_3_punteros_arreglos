#include <iostream>

using namespace std;

void mostrarArr(int* arr, int tam) {
    for (int i = 0; i < tam; i++)
        cout << " " << *arr++;
    cout << endl;
}

void intercambiar(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void invertirArrI(int* arr, int tam) {
    int* ptr = arr + (tam - 1);                                 //funcion iterativa
    for (int i = 0; i < tam / 2; i++)
        intercambiar(arr++, ptr--);
}

void invertirArrR(int* arr, int tam) {       //funcion recursiva  
    int* ptr2 = arr + (tam - 1);
    if (tam <= 1) {}
    else {
        intercambiar(arr, ptr2--);           
        invertirArrR(++arr, tam - 2);         
    }
}

int main()
{
    int arr[] = { 1,2,3,4,5 };
    int tam = sizeof(arr) / sizeof(arr[0]);

    mostrarArr(arr, tam);                //muestra el arreglo original

    invertirArrI(arr, tam);              //invertimos el arreglo, su resultado seria {5,4,3,2,1}
    cout << "Metoddo iterativo: ";
    mostrarArr(arr, tam);

    invertirArrR(arr, tam);              //invertimos una vez mas, el resultado seria {1,2,3,4,5}
    cout << "Metodo recursivo: ";
    mostrarArr(arr, tam);

    return 0;
}
