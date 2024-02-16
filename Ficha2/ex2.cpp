#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include "Tabela.h"

using namespace std;

int main() {

	Tabela matrix(3, 3, 1);

	cout << matrix.listarTabela() << endl;

	cout << matrix.obtemValor(1, 3) << endl;

	matrix.alteraValor(2, 2, 5);

	cout << matrix.listarTabela() << endl;

	return 0;
}