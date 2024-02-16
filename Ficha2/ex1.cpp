// Ficha2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>



struct Tabela
{
    int** matriz;
    int linhas;
    int colunas;

};

void criaTabela(Tabela* tabela, int linhas, int colunas) {

    tabela->linhas = linhas;
    tabela->colunas = colunas;
    tabela->matriz = (int**)malloc(linhas * sizeof(int*));

    if (tabela->matriz == NULL) {
        printf("Erro ao alocar memória para as linhas da tabela.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < linhas; i++)
    {
        tabela->matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (tabela->matriz[i] == NULL) {
            printf("Erro ao alocar memória para as colunas da tabela.\n");
            exit(EXIT_FAILURE);
        }

    }
}

void libertaTabela(Tabela* tabela) {

    for (int i = 0; i < tabela->linhas; i++)
    {
        free(tabela->matriz[i]);
    }

    free(tabela->matriz);

    tabela->matriz = NULL;
    tabela->linhas = 0;
    tabela->colunas = 0;

}

void preencher_Mostrar_Tabela(Tabela* tabela, int valor) {


    for (int i = 0; i < tabela->linhas; i++)
    {
        for (int j = 0; j < tabela->colunas; j++)
        {
            tabela->matriz[i][j] = valor;
            printf("%d ", valor);
        }
        printf("\n");
    }
}

int main()
{
    Tabela tabela;
    criaTabela(&tabela, 5, 3);
    preencher_Mostrar_Tabela(&tabela,1);
    libertaTabela(&tabela);
}

