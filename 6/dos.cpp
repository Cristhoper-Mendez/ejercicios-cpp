// #include <fstream>
// #include <iostream>
// using namespace std;

// int main()
// {
//     float R = 1234.86;
//     int i, N;
//     fstream fichbin("F.dat", ios::binary | ios::out); // Apertura como salida
//     fichbin.write(*R, sizeof(float));
//     for (i = 1; i <= 20; i++)
//         fichbin.write(i, sizeof(int));
//     fichbin.close();
//     fichbin.open("F.dat", ios::binary | ios::in); // Apertura como entrada
//     fichbin.read(R, sizeof(float));
//     cout << endl
//          << "R= " << R << endl;
//     for (i = 1; i <= 20; i++)
//     {
//         fichbin.read(N, sizeof(float));
//         cout << endl
//              << i << "= " << N << endl;
//     }
// }