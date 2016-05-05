#include <stdio.h>

int main()
{
    int maiornum=-1, menornum=999999, opcao, num;
    
    do
    {
    
    printf("\nEntre com um número:\n");
    scanf("%d", &num);
    
         if (num > maiornum)
         {
             maiornum = num;
         }
         if(num < menornum)
         {
             menornum = num;
         }
   
    
    printf("\nDeseja continuar?\n1 - Sim\n2 - Não\n");
    scanf("%d", &opcao);
    
    }while (opcao==1);
   
        
       
        printf("Maior número foi: %d\n", maiornum);
        printf("Menor número foi: %d", menornum);
    
    
   
    
    
    
    return 0;
}