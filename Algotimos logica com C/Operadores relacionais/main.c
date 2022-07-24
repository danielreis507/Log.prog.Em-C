#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
   printf("Digite um numero: ");
   scanf("%d", &numero);
   printf("O numero %d eh maior que 10 ? %d\n", numero, numero > 10);
   printf("O numero %d eh menor que 10 ? %d\n", numero, numero < 10);
   printf("O numero %d eh maior e igual a 10 ? %d\n", numero, numero >= 10);
   printf("O numero %d eh menor e igual a 10 ? %d\n", numero, numero <= 10);
   printf("O numero %d eh diferente de 10 ? %d\n", numero, numero != 10);
   printf("O numero %d eh igual a 10 ? %d\n", numero, numero == 10);
}
