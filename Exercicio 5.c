#include <stdio.h>
#include <stdlib.h>

/*
5. Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino e ?F? feminino), construa um algoritmo que
calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7*h)-58
- para mulheres: (62.1*h)-44.7
*/

int main()
{

    float altura;
    char sexo;
    float pesoIdeal;
    short verificarSexo = 1;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite F(feminino) ou M(masculino)");
    scanf(" %c", &sexo);

    if (verificarSexo = 1)
    {
        if (sexo == 'f' || sexo == 'F')
        {
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("O peso ideial é: %f", pesoIdeal);
        }
        else if (sexo == 'm' || sexo == 'M')
        {
            pesoIdeal = (72.7 * altura) - 58;
            printf("O peso ideial é: %f", pesoIdeal);
        }
        else
        {
            printf("Letra do sexo nao inserida!");
        }
    }
}
