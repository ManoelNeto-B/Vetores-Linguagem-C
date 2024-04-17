/*3. Faça um programa que solicita e armazena cinco números inteiros em um vetor. Em
seguida, o programa deve percorrer o vetor e somar todos os seus valores. Ao final,
o programa deve exibir o resultado da soma.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[5], i, s = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &v[i]);
    }

    //for (i = 0)
}