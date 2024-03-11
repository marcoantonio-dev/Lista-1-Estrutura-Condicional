#include<stdio.h>
#include<stdlib.h>


int main()
{
    float temperatura;
    printf("Digite a temperatura: ");
    scanf("%f", & temperatura);

    if (temperatura < 20)
    {
        printf("Esta frio");
    } 
    else if (temperatura > 30)
    {
        printf("Esta quente");
    } else
    {
        printf("Esta agradavel");
    } 
}