/*
    4 - Faça um programa que preencha uma matriz de 5X5 
    com o elemento um em todas as posições em que o índice 
    de linha tem valor maior que o da coluna.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

#define TAM 5

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    //DEFININDO '0' PARA TODA MATRIZ
    int mat [TAM][TAM] = {0}, linha, coluna;

    //VERIFICANDO LINHA MAIOR QUE COLUNA E ATRIBUINDO '1'
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            if(linha > coluna)
                mat [linha][coluna] = 1;
        }
    }

    //COUT DA MATRIZ
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            cout << mat [linha][coluna] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}