#include <array>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    array<string, 10> nombres       = {"Juan", "Maria"};
    array<int, 10>    nacimientos   = {2000, 2005};
    array<double, 10> gpas          = {3.4, 2.8};

    for (int i = 2; i <= 3; i++)
    {
        cout << "Estudiante " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> nombres.at(i);
        cout << "Anio de nacimiento: ";
        cin >> nacimientos.at(i);
        cout << "GPA: ";
        cin >> gpas.at(i);
    }

    string nom[] = {"Gaby", "Patty", "Diana"};
    int    nac[] = {2002, 2004, 2006};
    double gp[]  = {3.8, 3.0, 2.9};
    for (int i = 0; i < 2; i++)
    {
        nombres[4 + i]     = nom[i];
        nacimientos[4 + i] = nac[i];
        gpas[4 + i]        = gp[i];
    }

    ifstream archivo("datos.txt");
    int k = 6;
    while (k < 10 && archivo >> nombres[k] >> nacimientos[k] >> gpas[k])
        k++;

    int anio_actual = 2026;
    cout << "\nNombre\tNacimiento\tEdad\tGPA\tBeca" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << nombres[i] << "\t" << nacimientos[i] << "\t\t"
             << anio_actual - nacimientos[i] << "\t" << gpas[i] << "\t";
        if (gpas[i] >= 3.5)
            cout << "Si" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}