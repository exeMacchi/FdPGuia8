// 1. Hacer un programa que solicite 50 n�meros enteros y los guarde en un vector. 
//    Luego recorrer el vector y determinar e informar cu�l es la suma de los valores del mismo.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v[50], N, acu = 0;

    for (int i = 0; i < 50; i++)
    {
        cout << i + 1 << ". Ingrese un numero: "; cin >> N;
        v[i] = N;
    }

    for (int i = 0; i < 50; i++)
    {
        acu += v[i];
    }

    cout << "\nLa suma total es: " << acu << endl;

    return 0;
}