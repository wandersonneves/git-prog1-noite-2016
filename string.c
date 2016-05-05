#include <stdio.h> // os programas em C clássico leem os códigos em sequência, sempre.

int main()
{
    
    
    char nome[100];
    float av1, av2, resultado;

    
    printf("\nDigite seu nome:\n");
    scanf("%s", nome);
    
    printf("\nEntre com o valor da av1:\n");
    scanf("%f", &av1);
    
    printf("\nEntre com o valor da av2:\n");
    scanf("%f", &av2);
    
    resultado = (av1+av2)/2;
    
    printf("\nOlá %s, sua média foi %.2f\n", nome, resultado);
    
    
    
    return 0;
}