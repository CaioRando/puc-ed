#include <stdio.h>

int soma_digitos(int);

int maior_digito(int);

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nNumero: %d", numero);
    printf("\nSoma dos digitos: %d", soma_digitos(numero));
    printf("\nMaior digito: %d", maior_digito(numero));
    return 0;
}

int soma_digitos(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

int maior_digito(int num)
{
    int digito = 0;
    while(num != 0)
    {
        if(num % 10 > digito)
        {
            digito = num % 10;
        }
        num = num / 10;
    }

    return digito;
}