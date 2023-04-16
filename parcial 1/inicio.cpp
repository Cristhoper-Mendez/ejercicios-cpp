#include <iostream>
#include <fstream>
using namespace std;

void mostrarTabla(int val)
{
    cout << "" << endl;
    cout << "Tabla de " << val << ": " << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << val << "X" << i << "=" << val * i << endl;
    }
}

int main()
{
    int lenght = 4;
    int numbers[lenght];
    bool esValido = false;
    for (int i = 0; i < lenght; i++)
    {
        do
        {
            int val;
            cout << "Ingrese un numero entre 1 y 10" << endl;
            cin >> val;

            numbers[i] = val;

            if (val > 0 && val < 11)
            {
                esValido = true;

                for (int j = 0; j < i; j++)
                {
                    if (val == numbers[j])
                    {
                        esValido = false;
                        break;
                    }
                }
            }

            if (!esValido)
            {
                cout << "El numero ingresado no es invalido." << endl;
            }

        } while (!esValido);
    }

    for (int i = 0; i < lenght; i++)
    {
        mostrarTabla(numbers[i]);
    }

    return 0;
}