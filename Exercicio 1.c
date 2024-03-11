#include <stdio.h>
#include <stdlib.h>

// 1. Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A seguir,
// encontre o maior dos 3 valores e o escreva com a mensagem : "É o maior ".

int main()
{

    float a;
    float b;
    float c;

    printf("Digite o valor de A:");
    scanf("%f", &a);
    printf("Digite o valor de B:");
    scanf("%f", &b);
    printf("Digite o valor de C:");
    scanf("%f", &c);

    if (a > b && a > c)
    {
        printf("A e o maior valor: %f", a);
    }

    if (a < b && b > c)
    {
        printf("B e o maior valor: %f", b);
    }

    if (c > b && a < c)
    {
        printf("C e o maior valor: %f", c);
    }
}