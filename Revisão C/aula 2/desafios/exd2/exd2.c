#include <stdio.h>
#include <stdbool.h>

bool checa_numero_perfeito(int);

int main()
{
    int numero;
    scanf("%d", &numero);

    if(checa_numero_perfeito(numero))
    {
        printf("O numero %d eh perfeito!", numero);
    } else
    {
        printf("O numero %d nao eh perfeito!", numero);
    }

    return 0;
}

bool checa_numero_perfeito(int num)
{
    int soma = 0;
    for(int i = num / 2; i > 0; i--)
    {
        if(num % i == 0)
        {
            soma = soma + i;
        }
    }
    return(soma == num ? true : false);
}