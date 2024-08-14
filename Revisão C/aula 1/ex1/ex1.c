#include <stdio.h>

int main()
{
    int number, qnt_7 = 0;

    printf("\nType a number: ");
    scanf("%d", &number);

    do
    {
        if(number % 10 == 7)
        {
            qnt_7++;
        }
        number = number / 10;

    } while(number != 0);

    printf("\nQuantidade de numeros 7: %d\n", qnt_7);

    return 0;
}