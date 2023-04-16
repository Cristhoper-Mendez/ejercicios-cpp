#include <iostream>
#include <fstream>
using namespace std;

void asignarValor(int array[], int posicion, int valor){
    array[posicion] = valor;
}

void llenar(int array[], int tamano)
{
    int x1 = 0;
    int x2 = 1;
    int x3 = 1;

    for (int i = 0; i < tamano; i++)
    {
        x3 = x1 + x2;
        asignarValor(array, i, x3);
        x1 = x2;
        x2 = x3;
    }
}

void mostrar(int array[], int tamano){
    int aux = tamano;
    for (int i = 0; i < tamano; i++)
    {
        aux -=1;
        int val = array[aux];
        cout << val << endl;
    }
    
}

int main()
{
    int tamano = 20;
    int numbers[tamano];

    llenar(numbers, tamano);
    mostrar(numbers, tamano);

    return 0;
}