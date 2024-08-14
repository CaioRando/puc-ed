#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, qnt = 0, qnt_mult3 = 0, sum_mult3_maior10 = 0, qnt_mult7 = 0;
    float percent_mul_7;
    int positive = 1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num >= 0)
        {
            if(num % 3 == 0)
            {
                qnt_mult3++;
                if(num > 10)
                {
                    sum_mult3_maior10 += num;
                }
            }

            if(num % 7 == 0)
            {
                qnt_mult7++;
            }
        } else
        {
            positive = 0;
        }

        qnt++;
    }while(positive == 1);
    qnt--;
    percent_mul_7 = (float)qnt_mult7 * 100 / qnt;
    
    printf("\n Quantidade de numeros lidos: %d", qnt);
    printf("\n Soma dos multiplos de 3 e maior que 10: %d", sum_mult3_maior10);
    printf("\n Quantidade de multiplos de 3: %d", qnt_mult3);
    printf("\n Percentual de multiplos de 7: %.0f%%", percent_mul_7);

    return 0;
}