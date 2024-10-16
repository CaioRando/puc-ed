#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main()
{
    Arvore* arvore1 = criaArvore();

    insereArvore(arvore1, 5);
    insereArvore(arvore1, 7);
    insereArvore(arvore1, 6);
    insereArvore(arvore1, 10);
    insereArvore(arvore1, 20);
    insereArvore(arvore1, 1);
    insereArvore(arvore1, 2);
    insereArvore(arvore1, 3);

    imprimeArvoreCrescente(arvore1);

    NoArvore* no = buscaArvore(arvore1, 0);
    if(no != NULL){
        printf("%d", no->info);
    }
    return 0;
}
