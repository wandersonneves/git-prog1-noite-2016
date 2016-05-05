#include <stdio.h>

int main()
{
    int i;
    
    printf("\nTABELA ASCii:\n");
    printf("\n---------------");
    printf("\nDEC\tCHAR"); // \T TABULA, cria colunas na impressão
    
    for(i=33; i<=126; i++)
    {
       printf("\n%d\t%c\n", i, i);
    }
    
    
    
    
    return 0;
}