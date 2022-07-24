#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario = 1000, total;
    float alimentacao = 350,moradia = 500 ,saude = 100 ,outros = 150;

    alimentacao=(alimentacao*100)/salario;
    moradia=(moradia*100)/salario;
    saude=(saude*100)/salario;
    outros=(outros*100)/salario;

    printf("Alimentacao %.0f por cento%\n", alimentacao);
    printf("Moradia %0.f porcenro\n", moradia);
    printf("Saude %.0f porcento\n", saude);
    printf("Outros %.0f porcento\n", outros);
    return 0;
}
