#include <stdio.h>

main()
{
    float notas[4][3];
    int i, j;
    float somaAv1=0, media;
    
    
    //leitura para a matriz
    
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("\nInsira a av%d do aluno %d:", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
        
    }
    
    //imprimir as notas em forma de tabela    
        
        printf("\n NOTAS \n");
        printf("-------------------------------------------");
        printf("\nNOME ALUNO\tAV1\tAV2\tAV3");
       
       for(i=0; i<=3; i++)
       {
           printf("\nAluno %d\t", i+1);
           for(j=0; j<=2; j++)
           {
               printf("\t%.2f",notas[i][j]);
               
           }
           printf("\n-------------------------------------------\n");
       }
    
    //média da av1 dos alunos
     somaAv1=somaAv1+notas[i][0];
     
    
    
       
    
    return 0;
}