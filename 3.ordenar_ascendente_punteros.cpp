#include <iostream>

using namespace std;

void mostrarArr(int *arr, int tam) {
    for (int i = 0; i < tam; i++)
        cout << " " << *arr++;
    cout << endl;
}

void intercambiar(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void ordenarAscendentePtr(int *arr, int tam) {
    int* ptr;                                          //puntero auxiliar
    for (int i = 0; i < tam - 1; i++) {
        ptr = arr;
        for (int j = i + 1; j < tam; j++) {
            ptr++;
            if (*arr > *ptr)
                intercambiar(arr, ptr);            
        }
        arr++;
    }
}

int main()
{
    int arr[] = { 5,2,3,1,4 };
    int tam = sizeof(arr)/sizeof(arr[0]);

    mostrarArr(arr, tam);

    ordenarAscendentePtr(arr, tam);

    mostrarArr(arr, tam);

    return 0;

}
