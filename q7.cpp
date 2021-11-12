/*
    7 - Faça um programa que preenche duas matrizes, 
    uma M (4X6) e outra N (6X4). Aseguir o programa 
    deverá criar uma nova matriz que seja o produto 
    matricial de M por N.
*/
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

#define TAM1 4
#define TAM2 6

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    
    int matM [TAM1][TAM2];
    int matN [TAM2][TAM1];
    int matO [TAM1][TAM1] = {0};
    int linha, coluna;

    //PREENCHENDO A MATRIZ M
    for (linha = 0; linha < TAM1; linha++)
    {
        for (coluna = 0; coluna < TAM2; coluna++)
        {
            matM[linha][coluna] = (rand() % 15) + 1;
        }
    }

    //PREENCHENDO A MATRIZ N
    for (linha = 0; linha < TAM2; linha++)
    {
        for (coluna = 0; coluna < TAM1; coluna++)
        {
            matN[linha][coluna] = (rand() % 15) + 1;
        }
    }

    //PRODUTO MATRICIAL
    for (linha = 0; linha < TAM1; linha++)
    {
        for (coluna = 0; coluna < TAM1; coluna++)
        {
            for (int i = 0; i < TAM2; i++)
            {
                matO [linha][coluna] += (matM[linha][i] * matN[i][coluna]);
            }
        }
    }

    //COUT DA MATRIZ RESULTANTE
    for (linha = 0; linha < TAM1; linha++)
    {
        for (coluna = 0; coluna < TAM1; coluna++)
        {
            cout << matO [linha][coluna] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}