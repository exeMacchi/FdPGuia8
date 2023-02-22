// 2. Hacer un programa que solicite 50 números enteros y los guarde en un vector. 
//    Luego recorrer todos los elementos del vector y determinar cuál es el valor máximo y su posición dentro del vector.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v[50], N, vMax, pMax;

    for (int i = 0; i < 50; i++)
    {
        cout << i + 1 << ". Ingrese un numero: "; cin >> N;
        v[i] = N;
    }

    for (int i = 0; i < 50; i++)
    {
        if (i == 0)
        {
            vMax = v[i];
            pMax = i + 1;
        }
        else if (v[i] > vMax)
        {
            vMax = v[i];
            pMax = i + 1;
        }
    }

    cout << "\nValor maximo: " << vMax;
    cout << "\nPosicion: " << pMax << endl;
    return 0;
}