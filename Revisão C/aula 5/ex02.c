#include <stdio.h>
#include <stdlib.h>
#include "FILA.h"

int contaPares(No*);

int main()
{
    int pares;
    Fila *F = NULL;

    F = CriaFila();

}

int contaPares(No *aux)
{
    int contador;

    while(aux != NULL)
    {
        if(aux->info % 2 == 0)
        {
            contador++;
        }
        aux = aux->prox;
    }
}
