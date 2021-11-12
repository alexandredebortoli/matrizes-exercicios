/*
    9 - Elabore um algoritmo que leia uma matriz 5 x 5, calcule e imprima 
    a soma de todos seus valores. 
*/
#include <iostream>
#include <locale.h>
using namespace std;

#define TAM 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int mat [TAM][TAM], linha, coluna, soma = 0;

    //PREENCHENDO A MATRIZ
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            cout << "Digite o valor desejado para a linha " << linha + 1 << " e coluna " << coluna + 1 << ": ";
            cin >> mat [linha][coluna];
        }
    }

    //SOMANDO TODOS OS VALORES
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            soma += mat[linha][coluna];
        }
    }

    //COUT DA SOMA
    cout << "\nSoma = " << soma << endl;
    
    return 0;
}