/*1. Escreva um programa que solicita e armazena oito valores inteiros em um vetor,
denominado de A, e exibe os valores armazenados, porém na ordem inversa.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[8], i;

    // Armazenamento de valores em vet
    for (i = 0; i <= 7; i++)
    {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &vet[i]);
    }
    // Exibição dos valores de vet
    printf("\nValores invertidos do vetor:\n");
    for (i = 7; i >= 0; i--)
    {
        printf("%i", vet[i]);
    }
    return (0);
}