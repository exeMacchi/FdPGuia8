// 3. Hacer un programa que solicite 100 números enteros y los guarde en un vector. 
//    Luego recorrer ese vector para calcular el promedio. Mostrar por pantalla los valores del vector que son 
//    mayores al promedio calculado.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int const numTotales = 100;
    int v[numTotales], N, Acu = 0;
    float Promedio;
 
    for (int i = 0; i < numTotales; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> N;
        v[i] = N;
        Acu += v[i];
    }

    Promedio = Acu / numTotales;
    cout << "\n-------------------------------------------" << endl;
    cout << "Promedio calculado: " << Promedio << endl;

    for (int i = 0; i < numTotales; i++) {
        if (v[i] > Promedio) {
            cout << "\nValor mayor al promedio calculado: " << v[i];
        }
    }
    cout << "\n-------------------------------------------" << endl;

    return 0;
}
