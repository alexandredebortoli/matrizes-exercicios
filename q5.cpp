/*
    5 - Faça um programa que leia uma matriz 4 x 4 
    e que logo em seguida realize o somatório de todos 
    elementos contidos na diagonal principal. 
    Exiba o resultado.
*/
#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

#define TAM 4

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));
    
    int mat [TAM][TAM], linha, coluna, soma = 0;

    //DEFININDO VALORES PARA A MATRIZ
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            mat[linha][coluna] = rand() % (TAM*TAM) + 1;
        }
    }

    //SOMANDO VALORES DA DIAGONAL PRINCIPAL
    for (linha = 0; linha < TAM; linha++)
    {
        soma += mat[linha][linha];
    }

    //COUT DA MATRIZ E SOMA DIAGONAL PRINCIPAL
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            cout << mat [linha][coluna] << "\t";
        }
        cout << endl;
    }

    cout << "Soma diagonal principal: " << soma;
    
    return 0;
}