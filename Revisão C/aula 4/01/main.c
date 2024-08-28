#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha* p;
    int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int y[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    p = CriaPilha();
    push(p, x[0]);
    push(p, x[1]);
    push(p, x[2]);
    push(p, x[3]);

    imprimePilha(p);
    invertePilha();
    imprimePilha(p);


    return 0;
}

int contaPilha(Pilha* p)
{
    No* aux;
    int i = 0;
    aux = p->Topo;
    while(aux != NULL)
    {
        i++;
        aux = aux->prox;
    }
    return i;
}

void invertePilha(Pilha* p)
{
    No* aux1;
    No* aux2;
    No* aux3;
    aux3 = NULL;
    aux1 = p->Topo;
    while(aux1 != NULL)
    {
        aux2 = aux1;
        aux1 = aux1->prox;
        aux2->prox = aux3;
        aux3 = aux2;
    }
    p->Topo = aux3;
}
