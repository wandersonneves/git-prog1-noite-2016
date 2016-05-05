#include <stdio.h>

int main()
{
    
    int lado, linha, coluna;
    
    
    printf("\nInforme o tamanho do lado:");
    scanf("%d", &lado);
    
    for(linha=1; linha<=lado; linha++)
    {
        for(coluna=1; coluna<=lado; coluna++)
        {
           if ((linha==1)||(linha==lado) || (coluna==1)||(coluna==lado))
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
          
        }
         printf("\n");
        
    }
    
    
    
    return 0;
}