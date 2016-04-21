#include <stdio.h>

int main ()
{
int num, resto;

printf("\nEntre com um número sem vírgulas: ");
scanf("%d", &num);

resto = num % 2;

if (resto == 1)
{
    printf("\nEste numero eh impar!\n");
}
else
{
    printf("\nEste numero eh Par!\n");
}



return 0;
}