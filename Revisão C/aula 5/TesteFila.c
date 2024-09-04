#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include "FILA.h"

// Programa de teste da biblioteca Pilha

int main()
{
    Fila *F = CriaFila();
    Fila *Fimpar = CriaFila();
    Fila *Fpar = CriaFila();

    InsereFila(F, 1);
    InsereFila(F, 15);
    InsereFila(F, 3);
    InsereFila(F, 4);
    InsereFila(F, 15);
    InsereFila(F, 6);
    InsereFila(F, 15);


    imprimeFila(F);

    inverteFila(F);

    imprimeFila(F);

    liberaFila(F);
    liberaFila(Fpar);
    liberaFila(Fimpar);
    return 0;
}
