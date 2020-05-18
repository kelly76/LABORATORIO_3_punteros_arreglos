#include <iostream>

using namespace std;

/*
int sumEnterosR(int* arr, int tam) {              //funcion recursiva
    if (tam == 1)
        return *arr;
    else
        return *arr + sumEnterosR(arr++, --tam);
}
*/

void mostrar(int* arr, int tam) {
    for (int i = 0; i < tam; i++)
        cout << " " << *arr++;
    cout << endl;
}

int sumEnterosI(int* arr, int tam) {              //funcion iterativa
    int sum = 0;
    for (int i = 0; i < tam; i++)
        sum += *arr++;
    return sum;
}

int main()
{
    int arr[] = { 1,2,3,4 };
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout << "Metodo iterativo: " << sumEnterosI(arr, tam) << endl;
    
    return 0;
}
