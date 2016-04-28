#include <stdio.h>

int main()
{
    int teclado;
    teclado=0;
    
    
    while(teclado<1 || teclado>10)
    {
       printf("Entre com um número de 1 a 10.:");
       scanf("%d", &teclado); 
    }
    

    return 0;
}