#include <iostream>

using namespace std;

void concatenarCadenas(char* a, char* b) {               //b = a + b;
    while(*b != '\0') {
        b++;
    }
    while (*a != '\0') {
        *b++ = *a++;
    }
    *b = '\0';
}

int main()
{
    char a[] = "mundo";
    char b[20] = "hola ";

    cout << b << endl;

    concatenarCadenas(a, b);

    cout << b << endl;

    return 0;
}
