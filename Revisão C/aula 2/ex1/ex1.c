#include <stdio.h>
#include <math.h>

float le_medidas();

float calcula_hipotenusa(float, float);

int main()
{
    float cateto1, cateto2;

    printf("Digite o valor do cateto 1: ");
    cateto1 = le_medidas();

    printf("Digite o valor do cateto 2: ");
    cateto2 = le_medidas();

    printf("A hipotenusa eh: %.2f", calcula_hipotenusa(cateto1, cateto2));

    return 0;
}

float le_medidas()
{
    float numero;
    scanf("%f", &numero);
    return numero;
}

float calcula_hipotenusa(float cateto1, float cateto2)
{
    return (sqrt(cateto1*cateto1 + cateto2*cateto2));
}