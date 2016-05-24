#include <stdio.h>
#include <time.h>

int geraAleat (int limMax)
{
    int num;
    num = rand() % limMax;
    return num;
}

int ehpar (int num)
{
    
    if((num % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
   
}

main()
{
    int i, num;
    srand((unsigned) time (NULL));
    
    for(i=1; i<=10; i++)
    {
       num = geraAleat(100);
       printf("\nNumero %d: %d", i, num); 
       
       if (ehpar(num))
       {
           printf("\t - é par");
       }
       else
       {
           printf("\t - é ímpar");
       }
    }
       
    

    return 0;
}