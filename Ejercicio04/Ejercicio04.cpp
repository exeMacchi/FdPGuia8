// 4. Dada una lista de 10 números enteros, cargarlos en un vector. 
//    Luego, determinar e informar si el vector está ordenado en forma creciente. 
//    Por ejemplo el vector con los valores 1, 3, 5, 7 y 9 está ordenado; el vector 1, 5, 3, 7 y 9 no lo está.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v[10], N, Min;
    bool noOrdenado = false;

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> N;
        v[i] = N;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            Min = v[i];
        }
        else if (v[i] > Min) {
            Min = v[i];
        }
        else {
            noOrdenado = true;
        }
    }

    if (!noOrdenado) {
        cout << "\nEl vector esta ordenado en forma creciente." << endl;
    }
    else {
        cout << "\nEl vector no esta ordenado en forma creciente." << endl;
    }
    return 0;
}
