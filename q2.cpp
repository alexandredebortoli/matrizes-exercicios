/*
    2 - Faça um programa que preencha uma matriz de 5X5 
    com o elemento um em todas as posições em que o índice 
    de linha tem valor igual ao da coluna.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

#define TAM 5

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    int mat [TAM][TAM] = {0}, linha, coluna;

    /*for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            if(linha == coluna)
                mat [linha][coluna] = 1;
        }
    }*/

    for (linha = 0; linha < TAM; linha++)
    {
        mat [linha][linha] = 1;
    }

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