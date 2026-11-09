#include <array>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    array<int, 20> numeros = {
        41, 29, 37, 23, 47,
        71, 53, 95, 61, 57, 89, 67, 77, 59, 83,
        13, 3, 19, 7, 15
    };

    cout << "A. Todos los elementos:" << endl;
    for (auto x : numeros)
        cout << x << " ";
    cout << endl;

    cout << "\nB. Mayores de 20 y menores de 50:" << endl;
    for (auto x : numeros)
        if (x > 20 && x < 50)
            cout << x << " ";
    cout << endl;

    sort(numeros.begin(), numeros.end());
    cout << "\nC. Elementos ordenados:" << endl;
    for (auto x : numeros)
        cout << x << " ";
    cout << endl;

    cout << "\nD. Indices impares menores de 10:" << endl;
    for (int i = 1; i < 10; i += 2)
        cout << "indice " << i << ": " << numeros[i] << endl;

    return 0;
}
