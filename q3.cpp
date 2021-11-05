/*
    3 - Faça um programa que solicita ao usuário 25 valores 
    reais e armazene em uma matriz 5x5. A seguir troque todos 
    os elementos da matriz que sejam maiores do que 100 pelo 
    valor zero. Exiba a matriz original e alterada.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

#define TAM 5

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    int mat [TAM][TAM], linha, coluna, input;

    //PREENCHENDO A MATRIZ
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            cout << "Digite o valor desejado para a linha " << linha + 1 << " e coluna " << coluna + 1 << ": ";
            cin >> mat [linha][coluna];
        }
    }

    //VERIFICANDO ELEMENTOS MAIORES QUE 100
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            if (mat [linha][coluna] > 100)
                mat [linha][coluna] = 0;
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