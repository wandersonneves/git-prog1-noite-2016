#include <stdio.h>

main()
{
    float peso,somapeso=0;
    float salario, somasalario=0;
    char sexo;
    int ifem=0, imasc=0, i;
    float media;
    
    
    for(i=1; i<10; i++)
    {
        printf("\nEntre com o peso:");
        scanf("%f", &peso);
        
        printf("\nEntre com o salário:");
        scanf("%f", &salario);
        
        printf("\nEntre com o sexo do indivíduo(m/f):");
        scanf("%c", &sexo);
    }
    
    //mostrar a media do peso das mulheres com mais de 50kg
    
    if(sexo=='f'&& peso >50)
    {
            somapeso+=peso; //somapeso = somapeso + peso
            ifem++;
        
    }
    else if(sexo=='m') //mostrar media dos homens que recebem entre 1000 e 3000 de salario
    {
        if(salario>=1000 && salario<=3000)
        {
          somasalario+=salario;
          imasc++;
        }
    }
    
    printf("\nMedia do peso das mulheres com mais de 50kg = %f", somapeso/ifem);
    printf("\nMedia dos salarios dos homens que recebem entre 1000 e 3000 = %f", somasalario/imasc);
    
  return 0;  
}