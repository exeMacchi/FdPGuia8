// 8. Se ingresa una lista de 20 números en un vector. Se pide ordenar dichos números en forma decreciente 
//    (de mayor a menor). Mostrar el listado ordenado informando también la posición original de cada número
//    en el vector.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v[20], vPos[20], N, Aux;

    for (int i = 0; i < 20; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> N;
        v[i] = N;
        vPos[i] = i + 1;
    }

    for (int i = 0; i < 20; i++) {
        for (int x = 0; x < 19; x++) {
            if (v[x] < v[x + 1]) {
                Aux = v[x];
                v[x] = v[x + 1];
                v[x + 1] = Aux;

                Aux = vPos[x];
                vPos[x] = vPos[x + 1];
                vPos[x + 1] = Aux;
            }
        }
    }

    cout << "\n-----------------------------------------------------" << endl;
    for (int i = 0; i < 20; i++) {
        if (i < 19) {
            cout << v[i] << " (" << vPos[i] << "), ";
        }
        else {
            cout << v[i] << " (" << vPos[i] << ").";
        }
    }
    cout << "\n-----------------------------------------------------" << endl;
    return 0;
}
