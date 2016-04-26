#include <stdio.h>

int main()
{
    int idade;
    
    printf(" \nInsira a sua idade.\n");
    scanf("%d", &idade);
    
    if (idade<16)
    {
        printf("\nVocê ainda não pode votar.\n");
    }
    else if (idade == 16 || idade == 17 || idade>70)
    {
        printf("\nSeu voto é facultativo.\n");
    }
    else
    {
        printf("\nSeu voto é obrigatório\n");
    }
    
    
    return 0;
}