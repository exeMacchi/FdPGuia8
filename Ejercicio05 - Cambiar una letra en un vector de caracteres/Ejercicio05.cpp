/*
   5. Hacer un programa que solicite una serie de valores de tipo char (caracteres).
      Se entiende por carácter a cada elemento que se obtiene de presionar una tecla.
      Por ejemplo el valor “25” tiene dos caracteres (si quisiéramos guardarlo en variables enteras nos alcanza
      con una, pero si queremos guardarlo en variables char, necesitaremos dos); la frase “maxi programa” tiene 13
      (se incluye el espacio como un carácter).
      La cantidad de valores será como máximo 50, pero el programa puede cortar antes si se ingresa el carácter “.”
      (punto). Una vez cargado el vector de char, recorrerlo y reemplazar todas las apariciones de la letra “a” por
      la letra “e”, por ejemplo :
         Vector char original: “Hola muchachada cómo están”.
         Vector char modificado: “Hole muchechede cómo esten”.
      Finalmente, mostrar el resultado en pantalla.
*/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char vChar[50];
    int i = 0;

    cout << "Escriba: "; cin.getline(vChar, 50, '\n');

    for (int i = 0; i < 50; i++)
    {
        if (vChar[i] == 'a')
        {
            vChar[i] = 'e';
        }
        else if (vChar[i] == 'A')
        {
            vChar[i] = 'E';
        }
    }

    i = 0;
    cout << endl;
    while (vChar[i] != '\0')
    {
        cout << vChar[i];
        i++;
    }
    cout << endl;
    return 0;
}