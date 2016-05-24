#include <stdio.h>

float media_lasalle(float av1, float av2, float av3)
{
    float media;
    
    if (av1>= av2 && av2>=av3)
       media = (av1+av2)/2;
    else if (av1>= av2 && av2<=av3)
       media = (av1+av3)/2;
    else 
       media = (av2+av3)/2;
    
   
    return media;
}

main()
{
    float media; 
    
    media=media_lasalle(10,6,4);
    if (media == 8)
       printf("\n1. Caso de teste Ok!");
    else
       printf("\n1. Caso de teste Falhou!");
       
       media=media_lasalle(10,6,8);
    if (media == 9)
       printf("\n2. Caso de teste Ok!");
    else
       printf("\n2. Caso de teste Falhou!");
       
       
       media=media_lasalle(1,2,8);
    if (media == 5)
       printf("\n3. Caso de teste Ok!");
    else
       printf("\n3. Caso de teste Falhou!");
       
       
       media=media_lasalle(10,10,8);
    if (media == 10)
       printf("\n4. Caso de teste Ok!");
    else
       printf("\n4. Caso de teste Falhou!");
       
       
    return 0;
}