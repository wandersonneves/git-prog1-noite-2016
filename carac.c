#include <stdio.h>

int main()
{
    char lt;
    
    printf("\nEntre com uma letra em CAIXA ALTA :");
    
    lt = getchar(); //espera por um caracter a ser digitado
    
    printf("\nCaracter lido = %c\n", lt); //todo caracter é um número no computador. Essa é a relação no programa entre %c e %d.
    printf("\nCódigo ASCii = %d\n", lt);
    printf("\nCaracter lido CAIXA BAIXA = %c\n", lt+32);// Somando 32 do LT permite diferenciar entre maiusculo e minusculo segundo a tabela ASCii.
    
    
    return 0;
}