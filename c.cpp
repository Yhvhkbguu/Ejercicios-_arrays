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

    ifstream archivo("datos.txt");

    int i = 6;
    while (i < 10 && archivo >> nombres[i] >> nacimientos[i] >> gpas[i])
        i++;
    for (int j = 6; j < i; j++)
        cout << nombres[j] << " " << nacimientos[j] << " " << gpas[j] << endl;

    return 0;
}