/*
    6 - Faça um programa que solicita ao usuário 16 valores 
    reais e armazene em uma matriz 4x4. O programa deve somar 
    os elementos de cada uma das linhas armazenando o resultado 
    da soma em um vetor. A seguir, deve multiplicar cada elemento 
    da matriz pela soma da sua respectiva linha. Exiba na tela a 
    matriz resultante.
*/
#include <iostream>
#include <locale.h>
using namespace std;

#define TAM 4

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int mat [TAM][TAM], linha, coluna, input;
    int vet [TAM] = {0};

    //PREENCHENDO A MATRIZ
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            cout << "Digite o valor desejado para a linha " << linha + 1 << " e coluna " << coluna + 1 << ": ";
            cin >> mat [linha][coluna];
        }
    }

    //SOMA ELEMENTOS DE CADA LINHA E ARMAZENA NO VETOR
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
                vet[linha] += mat[linha][coluna];
        }
    }

    //MULTIPLICAR CADA ELEMENTO DA MATRIZ PELA SOMA DE SUA LINHA
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
                mat[linha][coluna] *= vet[linha];
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