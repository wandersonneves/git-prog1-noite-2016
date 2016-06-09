#include <stdio.h>


void fibo (int termo)
{
    int i, num1=0, num2=1, aux;
    
    printf("\n0 ");
    
    if (termo >=2 )
      printf("1 ");
    
    for(i=3; i<=termo; i++)
    {
        aux = num1 + num2;
        printf("%d ", aux);
        num1 = num2;
        num2 = aux;
    }

}

int sigma(int n)
{
    int sigma;
    
    for(sigma=0; n>=1;n--)
        sigma = sigma + n;
        
    return sigma;
    
}

int fat(int n)
{
    int fatorial;
    
    for(fatorial=1; n>=1;n--)
        fatorial = fatorial * n;
        
    return fatorial;
    
}

int menu()
{
    int opc;
    
    printf("\n***********************************");
    printf("\n*Funções matemáticas");
    printf("\n***********************************");
    printf("\n1 - Imprimir fibonati");
    printf("\n2 - Imprimir fatorial");
    printf("\n3 - Imprimir sigma");
    printf("\n***********************************");
    printf("\n*digite opção:*");
    
    scanf("%d", &opc); // opc = opção; função acima.
    
    return opc;
    
    
}


main()
{
 
  int opc, num, result;
  char continuar='n';
  
  do
  {
   opc = menu(); // imprime como menu
  
   printf("\n***********************************");
   printf("\n*Entre com um número:*");
   scanf("%d", &num);
  
  switch(opc)
  {
      case 1: //fibonati
            fibo(num);
      break;
      
      case 2: //fatorial
           result = fat(num);
           printf("\nFatorial de %d = %d", num, result);
      break;
      
      case 3: //sigma
           result = sigma(num);
           printf("\nSigma de %d = %d", num, result);
      break;
           
  }
   printf("\n***********************************");
   printf("\n*Continuar?(s/n):*");
   
   //limpando o buffer. Importante em leitura de char após números.
  fflush(stdin);
   __fpurge(stdin);
   
   scanf("%c", &continuar);
  }while(continuar=='s' || continuar=='S');
  
  return 0;
}