/*
    8 - Faça um programa que preenche uma matriz de 4X4 
    com números reais. O programa deve exibir qual a posição 
    (linha e coluna) do elemento minimax, ou seja, o menor valor 
    que esteja na linha em que se encontra o maior valor da matriz.
*/
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

#define TAM 4

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    
    int mat [TAM][TAM], linha, coluna;
    int max, linhaMinimax = 0, colunaMinimax;

    //DEFININDO VALORES PARA A MATRIZ
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            mat[linha][coluna] = rand() % (TAM*TAM) + 1;
        }
    }

    //COUT DA MATRIZ
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            cout << mat[linha][coluna] << "\t";
        }
        cout << endl;
    }

    max = mat[0][0];

    //ENCONTRANDO MAIOR ELEMENTO E SUA RESPECTIVA LINHA
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            if(mat[linha][coluna] > max)
            {
                max = mat[linha][coluna];
                linhaMinimax = linha;
                colunaMinimax = coluna;
            }
        }
    }

    //ENCONTRANDO LINHA E COLUNA MINIMAX
    for(coluna = 0; coluna < TAM; coluna++)
    {
        if(mat[linhaMinimax][coluna] < mat[linhaMinimax][colunaMinimax])
            colunaMinimax = coluna;
    }

    cout << "\nLinha Minimax = " << linhaMinimax + 1 << endl;
    cout << "Coluna Minimax = " << colunaMinimax + 1 << endl;
    
    return 0;
}