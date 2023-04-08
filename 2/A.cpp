#include <functional>
#include <iostream>

using namespace std;
// Cristhoper Alexander Mendez Montes
// MM22116
// mm22116@ues.edu.sv

int add(int x, int y)
{
    return x + y;
}

int multiply(int x, int y)
{
    return x * y;
}

int subtract(int x, int y)
{
    return x - y;
}

int divide(int x, int y)
{
    return x / y;
}

int invoke(int x, int y, function<int(int, int)> fun)
{
    return fun(x, y);
}

int main()
{
    int x;
    int y;

    std::cout << "Inserta el primer numero:";
    cin >> x;

    std::cout << "Inserta el segundo numero:";
    cin >> y;

    int added = invoke(x, y, add);
    int substracted = invoke(x, y, subtract);
    int multiplied = invoke(x, y, multiply);
    int divided = invoke(x, y, divide);

    std::cout << "\n La suma es:" << added;
    std::cout << "\n La resta es:" << substracted;
    std::cout << "\n El resultado de la multiplicacion es:" << multiplied;
    std::cout << "\n El resultado de la division es:" << divided;

    return 0;
}
