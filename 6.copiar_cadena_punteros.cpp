#include <iostream>

using namespace std;

void copiarCadena(char* a, char* b) {
    while (*a != '\0') {
        *b++ = *a++;
    }
    *b = '\0';
}

int main()
{
    char a[] = "hola";
    char b[] = "mundo";

    cout << a << " " << b << endl;

    copiarCadena(a, b);

    cout << a << " " << b << endl;
}
