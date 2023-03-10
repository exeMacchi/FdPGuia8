/*
   7. Una empresa comercializa 15 tipos de art?culos y por cada venta realizada genera un registro con los
      siguientes datos:
         ? N?mero de art?culo (1 a 15).
         ? Cantidad vendida.
      Puede haber varios registros para el mismo art?culo y el ?ltimo se indica n?mero de art?culo igual a cero.
      Se pide determinar e informar :
         a. El n?mero de art?culo que m?s se vendi? en total.
         b. Los n?meros de art?culos que no registraron ventas.
         c. La cantidad de unidades vendidas para el art?culo n?mero 10.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int vAcu[15], numArt, canVendida, x, maxAcu, maxNumArtVen;

    for (int i = 0; i < 15; i++)
    {
        vAcu[i] = 0;
    }

    cout << "Numero de articulo (1-15): "; cin >> numArt;
    if (numArt >= 1 && numArt <= 15)
    {
        cout << "Cantidad vendida: "; cin >> canVendida;
    }
    else
    {
        cout << "\nError: escriba un numero entre 1 y 15 (inclusives)." << endl;
        return 0;
    }

    while (numArt != 0)
    {
        x = numArt - 1;
        vAcu[x] += canVendida;

        cout << "\nNumero de articulo (1-15): "; cin >> numArt;
        if (numArt != 0 && (numArt >= 1 && numArt <= 15))
        {
            cout << "Cantidad vendida: "; cin >> canVendida;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < 15; i++)
    {
        if (i == 0)
        {
            maxAcu = vAcu[i];
            maxNumArtVen = i + 1;
        }
        else if (vAcu[i] > maxAcu)
        {
            maxAcu = vAcu[i];
            maxNumArtVen = i + 1;
        }
    }

    cout << "\n---------------------------------------------------------";

    cout << "\nEl numero del articulo que mas se vendio en total: " << maxNumArtVen << " (" << maxAcu
        << " articulos vendidos)" << endl;

    if (vAcu[9] > 0)
    {
        cout << "\nEl articulo numero 10 vendio " << vAcu[9] << " unidades en total." << endl;
    }

    for (int i = 0; i < 15; i++)
    {
        if (vAcu[i] == 0)
        {
            cout << "\nEl numero de articulo " << i + 1 << " no registro ninguna venta.";
        }
    }

    cout << "\n---------------------------------------------------------" << endl;
    return 0;
}