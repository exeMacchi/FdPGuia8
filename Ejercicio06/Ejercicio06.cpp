// 6. Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el vector hay algún elemento repetido. 
//    De haberlo, indicarlo con un cartel aclaratorio “Hay repetidos”, de lo contrario indicar “No hay repetidos”.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v[10], N, R, Aux;
    bool banRepetido = false;

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> N;
        v[i] = N;
    }

    for (int i = 0; i < 10; i++) {
        if (!banRepetido) {
            R = 0;
            Aux = v[i];
            for (int x = 0; x < 10; x++) {
                if (Aux == v[x]) {
                    R++;
                }
            }
            if (R > 1) {
                banRepetido = true;
            }
        }
    }

    if (!banRepetido) {
        cout << "\n-----------------------------";
        cout << "\nNo hay numeros duplicados en la lista.";
        cout << "\n-----------------------------" << endl;
    }
    else {
        cout << "\n-----------------------------";
        cout << "\nHay numeros repetidos en la lista.";
        cout << "\n-----------------------------" << endl;
    }
    return 0;
}
