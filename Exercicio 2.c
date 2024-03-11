#include <stdio.h>
#include <stdlib.h>

// 2. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem:
//"São múltiplos" ou "Não são múltiplos".

int main()
{

    short a;
    short b;

    printf("Digite o valor de A:");
    scanf("%hd", &a);
    printf("Digite o valor de B:");
    scanf("%hd", &b);

    if (a % b == 0 || b % a == 0)
    {
        printf("Os numeros A e B sao multiplos");
    }
    else
    {
        printf("Os numeros A e B nao sao multiplos");
    }
}