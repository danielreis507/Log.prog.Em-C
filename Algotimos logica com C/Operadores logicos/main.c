#include <stdio.h>
#include <stdlib.h>

int main()
{

        printf("%d", 20 == 20 || (5 = 5 && 10 > 10));
        int numero1, numero2;
        printf("Digite o primeiro numero para ser comparado a dez e vinte: ");
        scanf("%d", &numero1);
        printf("Digite o segundo numero para ser comparado a dez e vinte: ");
        scanf("%d", &numero2);
        printf("%d > 10 E %d > 20 ? %d\n", numero1, numero2, numero1 > 10 && numero2 > 20 );
        printf("%d < 10 E %d < 20 ? %d\n", numero1, numero2, numero1 < 10 && numero2 < 20 );
        printf("%d != 10 ou %d != 20 ? %d\n", numero1, numero2, numero1 != 10 || numero2 != 20);
        printf("NAO %d > 10 E %d NAO %D > 20 ? %d\n", numero1, numero2, !(numero1 > 10 && numero2 > 20));
        printf("NAO %d < 10 E NAO %d < 20 ? %d\n", numero1, numero2, !(numero1 < 10 && numero2 < 20 ));
        printf("NAO %d E != 10 ou %d NAO != 20 ? %d\n", numero1, numero2, !(numero1 != 10 || numero2 != 20));

        return 0;
}
