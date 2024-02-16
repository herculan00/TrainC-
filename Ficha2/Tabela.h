#pragma once

#include<vector>
#include<sstream>

using namespace std;

class Tabela
{
public:
	Tabela(int linhas=3, int colunas=3, int valor=3);
	~Tabela();
	string listarTabela();
	int obtemValor(int linha, int coluna);
	void alteraValor(int linha, int coluna, int valor);
		

private:
	vector<vector<int>> matrix;
	int linhas;
	int colunas;
};

