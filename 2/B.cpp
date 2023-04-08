#include <functional>
#include <iostream>

using namespace std;
// Cristhoper Alexander Mendez Montes
// MM22116
// mm22116@ues.edu.sv

int main()
{
    int lenght;

    std::cout << "Inserta la cantidad de elementos del array:";
    cin >> lenght;

    int nums[lenght] = {};

    for (size_t i = 0; i < lenght; i++)
    {
        int value;
        std::cout << "Inserta el valor #" << i + 1 << " ";
        cin >> value;
        nums[i] = value;
    }

    std::cout << "Total ingresado: " << lenght;
    int total = 0, *nPt;

    nPt = nums;

    for (size_t i = 0; i < lenght; i++)
    {
        total = total + *nPt++;
    }

    std::cout << "\nTotal de los elementos del arreglo es: " << total;

    return 0;
}