#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    printf(" Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf(" Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    printf(" O resto de %d dividido por %d eh %d", n1, n2, n1%n2);
    return 0;
}
