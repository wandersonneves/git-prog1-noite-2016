#include <stdio.h>
 
 void cabecalho() //função para imprimir um cabeçalho
 {
     printf("\n----------------------------------------");
     printf("\nTutorial Funções");
     printf("\n----------------------------------------");
 }
 
 float media_lasalle (float av1, float av2, float av3) // função para calcular uma média
 {
     float media;
     media = (av1+av2+av3)/3;
     return media;
 }
 
 int main()
 {
   float av1, av2, av3, media;
   av1 = 6;
   av2 = 7;
   av3 = 8;
   media = media_lasalle(av1, av2, av3);
   
   cabecalho();
   
   printf("\nMedia = %.2f\n", media);
   
   return 0;
 }