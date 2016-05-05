#include <stdio.h>
#include <math.h>

int main()
{
    int menu;
    int num1;
    int continuar;
    int resultado;
    //menu
    
    do{
        printf("\nQual operação você deseja?");
        printf("\n1 - POTENCIA");
        printf("\n2 - RAIZ QUADRADA");
        
        
        printf("\n\nopção:");
        scanf("%d", &menu);
        
         printf("\nEntre com num1:");
         scanf("%d", &num1);
         
        
        switch(menu) //use BREAK antes do próximo CASE. Isso evita que o programa execute todas as operações, em vez de apenas a escolhida.
        {
            case 1: //POTENCIA
              resultado= pow(num1);
              printf("\nResultado: pot(%d) ao quadrado = %.2f", num1, resultado);
              break;
              
            case 2: //RAIZ
              resultado=sqrt(num1);
              printf("\nResultado: raiz de %d = %.2f", num1, resultado);
              break;
              
              
            default:
            printf("\nOpção Inválida!");
              
              
        } // fim do SWITCH
        
        printf("\nDeseja continuar?\n1 - Sim\n2 - Não\n");
        scanf("%d", &continuar);
    
        
    }while(continuar == 1);
    
    
    return 0;
}