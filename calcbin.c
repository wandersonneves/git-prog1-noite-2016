#include <stdio.h>

main()
{
    int bin[100];
    int num,i=0, j=0;
    int resto, resul;
    
    printf("\nEntre com um número inteiro:");
    scanf("%d", &num);
    
    //calculadora para converter inteiro em binario.
    do
    {
       resul=num/2;
       resto=num%2;
       bin[i]=resto;
       num=resul;
       i++;
       
    }while(resul !=0);
    
    //imprimir vetor na ordem inversa
     printf("\nEquivalente binário:");
    for(j=i-1; j>=0; j--)
    {
    printf("%d", bin[j]);
    }
    
    
    
    return 0;
}