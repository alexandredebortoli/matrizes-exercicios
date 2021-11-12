/*
    10 - Faça um algoritmo que realize as seguintes tarefas com 
    matrizes 3 x 5 de números inteiros:
    a) Ler uma matriz A.
    b) Ler uma matriz B.
    c) Gerar uma matriz C com a soma dos elementos da matriz A e B.
    d) Mostrar todos os elementos da linha 2 da matriz C.
    e) Mostrar todos os elementos da coluna 3 da matriz C. 
*/
#include <iostream>
#include <locale.h>
using namespace std;

#define TAM1 3
#define TAM2 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int matA [TAM1][TAM2];
    int matB [TAM1][TAM2];
    int matC [TAM1][TAM2];
    int linha, coluna;

    //PREENCHENDO A MATRIZ A
    for (linha = 0; linha < TAM1; linha++)
    {
        for (coluna = 0; coluna < TAM2; coluna++)
        {
            cout << "Digite o valor para matriz A, linha " << linha + 1 << " e coluna " << coluna + 1 << ": ";
            cin >> matA [linha][coluna];
        }
    }

    //PREENCHENDO A MATRIZ B
    for (linha = 0; linha < TAM1; linha++)
    {
        for (coluna = 0; coluna < TAM2; coluna++)
        {
            cout << "Digite o valor para matriz B, linha " << linha + 1 << " e coluna " << coluna + 1 << ": ";
            cin >> matB [linha][coluna];
        }
    }

    //SOMANDO MATRIZ A E MATRIZ B E GERANDO MATRIZ C
    for (linha = 0; linha < TAM1; linha++)
    {
        for (coluna = 0; coluna < TAM2; coluna++)
        {
            matC[linha][coluna] = matA[linha][coluna] + matB[linha][coluna];
        }
    }

    //COUT MATRIZ C
    cout << endl << "Matriz C:" << endl;
    for (linha = 0; linha < TAM1; linha++)
    {
        for (coluna = 0; coluna < TAM2; coluna++)
        {
            cout << matC[linha][coluna] << "\t";
        }
        cout << endl;
    }

    //COUT TODOS ELEMENTOS LINHA 2 MATRIZ C
    cout << "\n Elementos linha 2 Matriz C: ";
    for(coluna = 0; coluna < TAM2; coluna++)
    {
        cout << matC[1][coluna] << " ";
    }

    //COUT TODOS ELEMENTOS COLUNA 3 MATRIZ C
    cout << "\n Elementos coluna 3 Matriz C: ";
    for(linha = 0; linha < TAM1; linha++)
    {
        cout << matC[linha][2] << " ";
    }
    
    return 0;
}