#include <iostream>
using namespace std;

struct Persona
{
    string Nombre,
        Apellido,
        Telefono;
    int Edad;
};

int main()
{
    int lenght = 2;
    Persona LstPersonas[lenght] = {};

    for (size_t i = 0; i < lenght; i++)
    {
        Persona persona = Persona();
        cout << "\nEscriba el Nombre de la persona " << i + 1 << ": ";
        cin >> persona.Nombre;

        cout << "\nEscriba el Apellido de la persona " << i + 1 << ": ";
        cin >> persona.Apellido;

        cout << "\nEscriba el Telefono de la persona " << i + 1 << ": ";
        cin >> persona.Telefono;

        cout << "\nEscriba la Edad de la persona " << i + 1 << ": ";
        cin >> persona.Edad;

        LstPersonas[i] = persona;

        cout << "\n";
    }

    for (size_t i = 0; i < lenght; i++)
    {
        cout << "\nLos datos de la persona N#" << i + 1 << " son:";
        cout << "\nNombre: " << LstPersonas[i].Nombre;
        cout << "\nApellido: " << LstPersonas[i].Apellido;
        cout << "\nTelefono: " << LstPersonas[i].Telefono;
        cout << "\nEdad: " << LstPersonas[i].Edad;
        cout << "\n";
    }

    return 0;
}