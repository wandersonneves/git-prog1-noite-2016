#include <stdio.h>

int main()
{
    char nomes[5][20]; //vetor de nomes [quantida de entrada][caracteres maximos de cada entrada]
    float salarios[5];
    int i;
    
    
    for(i=0; i<5; i++)
        {
            
              printf("\nEntre com o nome do funcionário %d:", i+1);
              scanf("%s", nomes[i]); //strings nao precisam de & para gravar na variável
              
              printf("\nEntre com o salário do funcionário %d:", i+1);
              scanf("%f", &salarios[i]);
            
        }
       
       // gerando o relatório
       
       printf("\nNome\tsal.bruto\tsal.liq");
       printf("\n------------------------------------------");
       
       for(i=0; i<5; i++)
       {
           printf("\n%s\t%.2f\t\t%.2f", nomes[i], salarios[i], salarios[i]*0.8);
       }
      printf("\n------------------------------------------\n");

    return 0;
}