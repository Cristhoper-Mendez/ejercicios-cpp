#include <iostream>

using namespace std;

int potencia(int base, int exponente)
{
    if (exponente == 0)
    {
        return 1;
    }
    else
    {
        return base * potencia(base, exponente - 1);
    }
}

int main()
{
    std::cout << "Potencia de 2 es: \n";
    int result = potencia(2, 4);
    std::cout << result;
    return 0;
}
