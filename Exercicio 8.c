#include <stdio.h>

/*
Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e mostre-os em ordem decrescente.
*/

int main()
{
    short A, B, C;
    printf("Digite tres numeros inteiros: \n");
    scanf("%hd %hd %hd", &A, &B, &C);
    if (A >= B && B >= C)
        printf("%hd %hd %hd\n", A, B, C);
    else if (A >= C && C >= B)
        printf("%hd %hd %hd\n", A, C, B);
    else if (B >= A && A >= C)
        printf("%hd %hd %hd\n", B, A, C);
    else if (B >= C && C >= A)
        printf("%hd %hd %hd\n", B, C, A);
    else if (C >= A && A >= B)
        printf("%hd %hd %hd\n", C, A, B);
    else
        printf("%hd %hd %hd\n", C, B, A);

}
