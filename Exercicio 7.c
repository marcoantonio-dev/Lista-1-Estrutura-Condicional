#include <stdio.h>

/*
7. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, 
são quaisquer valores reais e os escreva. A seguir: 

a) Se i=1 escrever os três valores a, b, c em ordem crescente. 
b) Se i=2 escrever os três valores a, b, c em ordem decrescente. 
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.
*/

int main() {
    int i;
    float a, b, c;

    printf("Digite um numero de 1 a 3: ");
    scanf("%d", &i);
    printf("Digite valores aleatorios de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    switch(i) {
        case 1:
            if (a <= b && b <= c)
                printf("%f %f %f \n", a, b, c);
            else if (a <= c && c <= b)
                printf("%f %f %f \n", a, c, b);
            else if (b <= a && a <= c)
                printf("%f %f %f \n", b, a, c);
            else if (b <= c && c <= a)
                printf("%f %f %f \n", b, c, a);
            else if (c <= a && a <= b)
                printf("%f %f %f \n", c, a, b);
            else
                printf("%f %f %f \n", c, b, a);
            break;
        case 2:
            if (a >= b && b >= c)
                printf("%f %f %f \n", a, b, c);
            else if (a >= c && c >= b)
                printf("%f %f %f \n", a, c, b);
            else if (b >= a && a >= c)
                printf("%f %f %f \n", b, a, c);
            else if (b >= c && c >= a)
                printf("%f %f %f \n", b, c, a);
            else if (c >= a && a >= b)
                printf("%f %f %f \n", c, a, b);
            else
                printf("%f %f %f\ n", c, b, a);
            break;
        case 3:
            if (a > b && a > c)
            {
                printf("%f %f %f \n", b, a, c);
            }
            if (c > b && a < c)
            {
                printf("%f %f %f \n", b, c, a);
            }
            if (a < b && b > c)
            {
                printf("%f %f %f \n", a, b, c);
            }
            break;
        default:
            printf("Numero de 1 a 3 nao digitado! \n");
    }
}
