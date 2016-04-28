#include <stdio.h>

int main()
//multiplicação (tabuada) utilizando FOR.
{
    int i, multiplicar, numteclado;
    numteclado=0;
     
     while(numteclado<1 || numteclado>10)
    {
       printf("Entre com um número de 1 a 10.:");
       scanf("%d", &numteclado); 
    }
    
    
    printf("\nTabuada do %d ", numteclado);
    printf("\n_______________________");
    
    
    for(i=1; i<=10; i++) 
     {
    
       multiplicar = numteclado*i;
       printf("\n %d x %d = %d", numteclado, i, multiplicar);
    
     }




    return 0;
}
