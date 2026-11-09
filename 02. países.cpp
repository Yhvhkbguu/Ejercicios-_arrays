#include <array>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    array<string, 12> paises = {
        "Argentina", "Bolivia", "Brasil", "Chile", "Colombia",
        "Ecuador", "Guyana", "Paraguay", "Peru", "Surinam"
    };

    paises.at(10) = "Uruguay";
    paises[11]    = "Venezuela";

    cout << "B. Paises que inician con C o P:" << endl;
    for (auto p : paises)
        if (p[0] == 'C' || p[0] == 'P')
            cout << p << endl;

    cout << "\nC. Primero: " << paises.front() << endl;
    cout << "   Ultimo: " << paises.back() << endl;

    sort(paises.begin(), paises.end());
    cout << "\nD. Paises ordenados:" << endl;
    for (auto p : paises)
        cout << p << endl;

    return 0;
}
