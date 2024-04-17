/*2. Crie um programa que solicita e armazena o nome completo de um usuário em um
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o ‘\0’ na contagem e não utilize a função strlen.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int i, cont = 1;
    printf("Digite o seu nome: ");
    gets(nome);
    for (i = 0; nome[i] != '\0'; i++)
    {
        cont++;
    }
    printf("Seu nome possui %i caracteres", cont);
    return (0);
}
