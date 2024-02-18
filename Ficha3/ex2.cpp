// Ficha3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Ponto.h"
#include "Triangulo.h"

using namespace std;

int main()
{
    Ponto a(1, 0), b(2, 0); 

    Ponto pontos[3]{ {1,3}, {2, 4}, {5, 7} };

    Triangulo t1("t1", a, b, pontos[0]);
    Triangulo t2("t2", a, b, pontos[1]);
    

    cout << "Qqr letra para continuar..." << endl;
    cin.ignore();
}

