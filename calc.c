#include <stdio.h>

int main()
{
    int menu;
    int num1;
    int num2;
    int continuar;
    int resultado;
    //menu
    
    do{
        printf("\nQual operação você deseja?");
        printf("\n1 - ADIÇÃO");
        printf("\n2 - SUBTRAÇÃO");
        printf("\n3 - MULTIPLICAÇÃO");
        printf("\n4 - DIVISÃO");
        
        printf("\n\nopção:");
        scanf("%d", &menu);
        
         printf("\nEntre com num1:");
         scanf("%d", &num1);
         
         printf("\nEntre com num2:");
         scanf("%d", &num2);
        
        switch(menu) //use BREAK antes do próximo CASE. Isso evita que o programa execute todas as operações, em vez de apenas a escolhida.
        {
            case 1: //adição
              resultado=num1+num2;
              printf("\nResultado: %d + %d =%d", num1, num2, resultado);
              break;
              
            case 2: //subtraçaõ
              resultado=num1-num2;
              printf("\nResultado: %d - %d =%d", num1, num2, resultado);
              break;
              
            case 3: //multiplicação
              resultado=num1*num2;
              printf("\nResultado: %d * %d =%d", num1, num2, resultado);
              break;
              
            case 4: //divisão
              resultado=(float)num1/num2;
              printf("\nResultado: %d / %d =%d", num1, num2, resultado);
              break;
              
            default:
            printf("\nOpção Inválida!");
              
              
        } // fim do SWITCH
        
        printf("\nDeseja continuar?\n1 - Sim\n2 - Não\n");
        scanf("%d", &continuar);
    
        
    }while(continuar == 1);
    
    
    return 0;
}