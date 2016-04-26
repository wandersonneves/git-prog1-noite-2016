#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    
    printf("\nInsira o valor da AV1.\n");
    scanf("%f", &nota1);
    
    printf("\nInsira o valor da AV2.\n");
    scanf("%f", &nota2);
    
    media = (nota1+nota2)/2;
    
    if (media<5)
    {
        printf("\nREPROVADO.\n");
    }
    else if (media>5 && media<7)
    {
        printf("\nRECUPERAÇÃO\n");
    }
    else
    {
        printf("\nAPROVADO.\n");
    }
    
    
    
    return 0;
}