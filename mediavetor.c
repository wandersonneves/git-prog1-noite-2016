#include <stdio.h>

int main()
{
    float av1[10];
    float media, somaav1=0;
    int i, contadormaior=0;
    float maior=0;
    float qtdmaior;
    
    for(i=0; i<=9; i++) // não colocar ; com a fórmula FOR.
    {
        printf("\nEntre com a av1 do aluno %d:\n", i+1 ); //usar o mesmo contador pra AV1 e pro contador de alunos. Soma +1 pra não imprimir 0.
        scanf("%f", &av1[i]);
       
        somaav1=somaav1 + av1[1];
        
        if(av1[i]>maior)
        {
            maior = av1[i];
        }
        
    }  
    
    media = somaav1 / i; // o i acumulou até 10.
    
    printf("\nA média da turma é: %.2f\n", media);
    
    
    
    for(i=0; i<=9; i++)
    {
        if(av1[i] >= media)
        {
            printf("\n Nota maior do que a média: %.2f \n", av1[i]);
        }
        
    
        if(av1[i] == maior)
        {
            contadormaior++;
        }
        
        if(av1[i]>=6)
        {
            qtdmaior++;
        }
        
        
        
    }
    qtdmaior =(float)qtdmaior/i;
    
    printf("\n %d alunos tiraram a maior nota, que foi %.2f\n", contadormaior, maior);
    printf("\nPercentual de alunos com a maior nota: %.2f", qtdmaior * 100);
    
        
        
        
    
    
    return 0;
}