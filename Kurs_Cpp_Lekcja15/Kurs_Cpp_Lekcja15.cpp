// Kurs_Cpp_Lekcja15.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Nagłówek.h"
using namespace std; 

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    cout << "Zwykly sposob: " << endl;
    wyswietl(tab, sizeof(tab) / sizeof(int));
    cout << "Przez wskaznik: " << endl;
    wyswietl2(tab, sizeof(tab) / sizeof(int));


    cout << "----------" << endl; 

    cout << tab[0] << " == " << *tab << endl;
    cout << &tab[1] << " == " << (tab + 1) << endl;
    return 0;
}

void wyswietl(int tab[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << tab[i] << endl;
    }
}

void wyswietl2(int *tab, int l)
{
    for (int* i = tab; i < tab + l; i++)
    {
        cout << *i << endl; 
    }
}
