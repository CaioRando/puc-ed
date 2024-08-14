#include <stdio.h>

int conta_quantos_cinco(int);

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("O numero %d tem %d cincos", numero, conta_quantos_cinco(numero));
    return 0;
}

int conta_quantos_cinco(int n)
{   
    if(n != 0)
    {
        if(n % 10 == 5)
        {
            return 1 + conta_quantos_cinco(n / 10);
        }
            return conta_quantos_cinco(n / 10);
    }
    return 0;
}