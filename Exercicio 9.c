#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
*/

int main()
{
    int anos, meses, dias, idadeTotalDias;
    printf("Digite a sua idade em Anos, Meses e Dias: \n");
    scanf("%d %d %d", &anos, &meses, &dias);

    idadeTotalDias = (anos * 365) + (meses * 30) + dias;
    printf("A sua idade em dias e: %d", idadeTotalDias);
}