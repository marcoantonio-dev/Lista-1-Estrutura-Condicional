#include<stdio.h>
#include<stdlib.h>

/*
Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
*/

int main()
{

    short idade;
    printf("Digite a sua idade em dias: \n");
    scanf("%d",& idade);
    printf("\n");

    short meses;
    meses = (idade % 365) / 30;
    short dias = idade;
    short ano = (idade % 365) % 30;

    printf("Voce tem %hd anos de vida: \n", ano);
    printf("Voce tem: %hd meses de vida\n", meses);
    printf("Voce tem: %d dias de vida\n", dias);

}

