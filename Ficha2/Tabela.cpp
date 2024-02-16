#include "Tabela.h"



Tabela::Tabela(int linhas, int colunas, int valor):linhas(linhas),colunas(colunas) {

	matrix = vector<vector<int>>(linhas, vector<int>(colunas,valor));
}

string Tabela::listarTabela() {

	ostringstream ss;

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			ss << matrix[i][j] << " ";
		}

		ss << '\n';
	}

	return ss.str();
}



int Tabela::obtemValor(int linha, int coluna) {

	if (linha >0 && linha<= this->linhas && coluna > 0 && linha <= this->colunas)
	{
		return matrix[linha-1][coluna-1];
	}

	return -1;
}


void Tabela::alteraValor(int linha, int coluna, int valor) {

	if (linha > 0 && linha <= this->linhas && coluna > 0 && linha <= this->colunas)
	{
		matrix[linha - 1][coluna - 1] = valor;
	}

}

Tabela::~Tabela(){

}

