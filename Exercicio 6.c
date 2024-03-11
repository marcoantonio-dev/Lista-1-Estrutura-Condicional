#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6. Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. 
um algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo:

Código do Produto	Preço unitário
1001			5,32
1324			6,45
6548			2,37
0987			5,32
7623			6,45
*/

int main()
{
    char codigoEmString[5];
    short codigo;
    short quantidade;
    float totalPagar;
    short verificarCodigo = 1;

        if (verificarCodigo == 1)
        {
        
        printf("Digite o codigo do produto: ");
        scanf("%hd", &codigo);

        printf("Digite a quantidade: ");
        scanf("%hd", &quantidade);

        sprintf(codigoEmString, "%hd", codigo);
        //strcmp serve para comparar duas strings
        if (strcmp(codigoEmString, "0987"))
        {
            totalPagar = quantidade * 5.32;
            printf("O valor a pagar e: %.2f\n", totalPagar);
        }
        else if (codigo == 1001)
        {
            totalPagar = quantidade * 5.32;
            printf("O valor a pagar e: %.2f\n", totalPagar);
        }
        else if (codigo == 1324)
        {
            totalPagar = quantidade * 6.45;
            printf("O valor a pagar e: %.2f\n", totalPagar);
        }
        else if (codigo == 6548)
        {
            totalPagar = quantidade * 2.37;
            printf("O valor a pagar e: %.2f\n", totalPagar);
        }
        else if (codigo == 7623)
        {
            totalPagar = quantidade * 6.45;
            printf("O valor a pagar e: %.2f\n", totalPagar);
        }
        else
        {
            printf("Voce digitou um codigo invalido!\n");
        }

        printf("Codigo invalido!");
    }

    return 0;
}
