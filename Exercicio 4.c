#include <stdio.h>
#include <stdlib.h>

/*
4. O cardápio de uma lanchonete é o seguinte:

Especificação	Código	Preço
Cachorro quente	100	    1,20
Bauru simples	101	    1,30
Bauru com ovo	102	    1,50
Hambúrger	    103	    1,20
Cheeseburguer	104	    1,30
Refrigerante	105	    1,00

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por
aquele lanche. Considere que a cada execução somente será calculado um item.
*/

int main()
{

    short codigo;
    short quantidade;

    printf("Digite o codigo do produto: ");
    scanf("%hd", &codigo);

    printf("Digite a quantidade do produto: ");
    scanf("%hd", &quantidade);

    if (codigo == 100)
    {
        float totalPagar = quantidade * 1.20;
        printf("O valor a pagar é: %f", totalPagar);
    }
    else if (codigo == 101)
    {
        float totalPagar = quantidade * 1.30;
        printf("O valor a pagar é: %f", totalPagar);
    }
    else if (codigo == 102)
    {
        float totalPagar = quantidade * 1.50;
        printf("O valor a pagar é: %f", totalPagar);
    }
    else if (codigo == 103)
    {
        float totalPagar = quantidade * 1.20;
        printf("O valor a pagar é: %f", totalPagar);
    }
    else if (codigo == 104)
    {
        float totalPagar = quantidade * 1.30;
        printf("O valor a pagar é: %f", totalPagar);
    }
    else if (codigo == 105)
    {
        short totalPagar = quantidade * 1;
        printf("O valor a pagar é: %hd", totalPagar);
    }
}