#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, quadrado_num = 0, impares = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        quadrado_num += impares;
        impares += 2;
    }

    printf("%d^2 = %d", num, quadrado_num);
    return 0;
}