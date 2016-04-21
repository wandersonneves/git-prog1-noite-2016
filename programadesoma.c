#include <stdio.h>
#include <math.h>

int main()
{
    //primeiro se declara as variáveis
    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;
    
    //pedir e ler o primeiro número
    printf("\nEntre com o numero 1:");
    scanf("%d", &num1); 
    //ler o segundo número
    printf("\nEntre com o numero 2:");
    scanf("%d", &num2); 
    
    //depois deve-se indicar como o programa deve ler as operações matemáticas
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = (float)num1 / num2;
    
    //indicar como imprimir os resultados
    printf("\nSoma = %d", soma);
    printf("\nSubtracao = %d", subtracao);
    printf("\nMultiplicacao = %d", multiplicacao);
    printf("\nDivisao = %f\n", divisao);
    
    //relevante lembrar que C é bastante sensível a pequenos erros, como falta de " ou ; ou qualquer outro símbolo
   
    
    
    return 0;
}