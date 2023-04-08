#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Se usa para leer archivos
    ifstream reader;

    string text;

    // Abrir el archivo y comprobar si fue exitoso
    reader.open("salida.txt", ios::in);
    if (!reader)
    {
        cerr << "Error de apertura del archivo." << endl;
    }

    // Obtener primer linea del archivo
    getline(reader, text);
    while (!reader.eof())
    {
        cout << text << endl;

        getline(reader, text);
    }

    // Cerrar archivo
    reader.close();

    // Se usa para escribir en archivos
    // Abrir el archivo y comprobar si fue exitoso
    ofstream writer("salida.txt");
    if (writer.is_open())
    {
        // Escribir en el archivo
        writer << "hola 2 " << endl;
        writer << 55 << endl;
    }
    else
    {
        cerr << "Error de apertura del archivo." << endl;
    }

    // Permite ambos flujos, lectura y escritura
    // Abrir el archivo y comprobar si fue exitoso
    fstream both("salida.txt");
    if (!both)
    {
        cerr << "Error de apertura del archivo." << endl;
    }

    // Obtener primer linea
    getline(both, text);
    while (!both.eof())
    {
        cout << text << endl;

        getline(both, text);
    }

    // Escribir en el archivo
    both << "hola desde fstram " << endl;
    both << 543 << endl;

    return 0;
}