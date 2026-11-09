#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 20> numeros = {
        41, 29, 37, 23, 47,                              
        71, 53, 95, 61, 57, 89, 67, 77, 59, 83,          
        13, 3, 19, 7, 15                                 
    };

    for (auto x : numeros)
        cout << x << " ";
    cout << endl;
    return 0;
}