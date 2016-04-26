#include <stdio.h>

int main()
{
    int hora;
    
    printf("\nSão que horas neste momento? Informe apenas a hora, sem os minutos.\n");
    scanf("%d", &hora);
    
    if (hora<12)
    {
        printf("\nBOM DIA!\n");
    }
    else if (hora<18)
    {
        printf("\nBOA TARDE!\n");
    }
    else if(hora<24)
    {
        printf("\nBOA NOITE!\n");
    }
    else
    {
        printf("\nNUMERO INVÁLIDO\n");
    }

 return 0;   
}