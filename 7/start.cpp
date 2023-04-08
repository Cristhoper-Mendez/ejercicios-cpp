#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Se usa para escribir al final de archivos     
    ofstream writer("salida.txt", ios_base::app);
    char text;
    string entrada;

    // Abrir el archivo y comprobar si fue exitoso    
    if (!writer)
    {
        cerr << "Error de apertura del archivo." << endl;
        return 1;
    }

    cout << "Ingrese un texto: " << endl;
    cin >> entrada;   
    
    writer << entrada << endl;

    ifstream reader("salida.txt");

    if(!reader){
        cerr << "Error de apertura del archivo." << endl;
        return 1;
    }

    cout << "Leyendo el archivo." << endl;

    while (!reader.eof())
    {
       reader.get(text);
        cout << text;
    }    

    // Cerrar archivo
    reader.close();   

    return 0;
}