/*
    1 - Faça um programa que preencha uma matriz de 5X5 
    com o elemento um em todas as posições.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

#define TAM 5

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    int mat [TAM][TAM], linha, coluna;

    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            mat [linha][coluna] = 1;
        }
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