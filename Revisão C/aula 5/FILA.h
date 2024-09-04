#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

/* FUN��ES DE MANIPULA��O DE PFILA

Fila* CriaFila()  CRIA A FILA

int VaziaFila (Fila* f) VERIFICA SE A FILA EST� VAIZA

void InsereFila (Fila* f, int v) INSER��O

int RetiraFila (Fila* f) REMO��O

Fila* liberaFila (Fila* f) LIBERA A FILA

void imprimeFila (Fila* f)IMPRIME A FILA

int contaParFila (No* aux) CONTA NUMEROS PARES

void apaga15Fila (Fila* f) REMOVE 15

Fila* parImparFila (Fila* f, Fila* par, Fila* impar) Mantem F e separa par e impar
*/
typedef struct nos
{
    int info;
    struct nos *prox;
}Nos;

typedef struct fila
{
    Nos * ini;
    Nos * fim;
} Fila;

int VaziaFila (Fila* f)
{
    if (f->ini==NULL) return 1;
    return 0;

}


Fila* CriaFila ()
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

Nos* ins_fim (Nos *fim, int A)
{
    Nos *p = (Nos*)malloc(sizeof(Nos));
    p->info = A;
    p->prox = NULL;
    if (fim != NULL) /* verifica se lista n�o estava vazia */
    fim->prox = p;
    return p;
}

void InsereFila (Fila* f, int v)
{
    f->fim = ins_fim(f->fim,v);
    if (f->ini==NULL) /* fila antes vazia? */
    f->ini = f->fim;
}

Nos* retira_ini (Nos* ini)
{
    Nos* p = ini->prox;
    free(ini);
    return p;
}

int RetiraFila (Fila* f)
{
    int v;
    if (VaziaFila(f))
    {
        printf("Fila vazia.\n");
        exit(0); /* aborta programa */
    }
    v = f->ini->info;
    f->ini = retira_ini(f->ini);
    if (f->ini == NULL) /* fila ficou vazia? */
    f->fim = NULL;
    return v;
}

void imprimeFila (Fila* f)
{
    Nos* q;
    printf("\n\t\t");
    for (q=f->ini; q!=NULL; q=q->prox)
    {
        printf("%d - ",q->info);
    }
    printf("\n");
}


Fila* liberaFila (Fila* f)
{
    Nos* q = f->ini;
    while (q!=NULL)
    {
        Nos* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
    return NULL;
}

int contaParFila(Nos *aux)
{
    int contador = 0;

    while(aux != 0)
    {
        if(aux->info % 2 == 0)
        {
            contador++;
        }
        aux = aux->prox;
    }

    return contador;
}

void apaga15Fila(Fila* f)
{
    Fila *auxf = CriaFila();
    int num = 0;

    while(!VaziaFila(f))
    {
        num = RetiraFila(f);
        if(num != 15)
        {
            InsereFila(auxf, num);
        }
    }

    f->ini = auxf->ini;
    f->fim = auxf->fim;

    free(auxf);
}

void parImparFila(Fila* f, Fila* par, Fila* impar)
{
    Fila *auxf = CriaFila();
    int num = 0;

    while(!VaziaFila(f))
    {
        num = RetiraFila(f);
        if(num % 2 == 0)
        {
            InsereFila(par, num);
        }
        else
        {
            InsereFila(impar, num);
        }
        InsereFila(auxf, num);
    }

    f->ini = auxf->ini;
    f->fim = auxf->fim;

    free(auxf);
}

void inverteFila(Fila* f)
{
    Nos* aux1;
    Nos* aux2;
    Nos* aux3;
    aux3 = NULL;
    aux1 = f->ini;
    while(aux1 != f->fim)
    {
        aux2 = aux1;
        aux1 = aux1->prox;
        aux2->prox = aux3;
        aux3 = aux2;
    }
    aux2 = aux1;
    aux2->prox = aux3;
    aux3 = aux2;

    f->ini = f->fim;
    f->fim = aux1;
}

#endif // FILA_H_INCLUDED
