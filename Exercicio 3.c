#include <stdio.h>
#include <stdlib.h>

// 3. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
/*
infantil A =  5 -  7 anos
infantil B =  8 - 10 anos
juvenil  A = 11 - 13 anos
juvenil  B = 14 - 17 anos
adulto = maiores de 18 anos
*/

int main()
{

    short idadeNadador;
    printf("Digite a idade do nadador: ");
    scanf("%hd", &idadeNadador);

    if (idadeNadador >= 5 && idadeNadador <= 7)
    {
        printf("O nadador se enquadra na categoria Infantil A");
    }

    if (idadeNadador >= 8 && idadeNadador <= 10)
    {
        printf("O nadador se enquadra na categoria Infantil B");
    }

    if (idadeNadador >= 11 && idadeNadador <= 13)
    {
        printf("O nadador se enquadra na categoria Juvenil A");
    }

    if (idadeNadador >= 14 && idadeNadador <= 17)
    {
        printf("O nadador se enquadra na categoria Juvenil B");
    }

    if (idadeNadador >= 18)
    {
        printf("O nadador se enquadra na categoria Adulto ");
    }

    if (idadeNadador <= 4)
    {
        printf("O nadador nao se enquadra em nehuma categoria! ");
    }
}