#ifndef PILHA_H     //definição do header
#define PILHA_H

/*  FUNCTIONS
Pilha* CriaPilha ()     CRIA A PILHA

No* ins_ini (No* t, int a)  AUXILIAR DA INSER��O

void push (Pilha* p, int v) INSER��O

No* ret_ini (No* l)         AUXILIAR DA REMO��O

int pop (Pilha* p)          REMOVE RETORNANDO O VALOR QUE FOI REMOVIDO

void libera (Pilha* p)      LIBERA A PILHA

void imprime (Pilha* p)     IMPRIMA A PILHA

int vaziaPilha(Pilha *p)	    VERIFICA SE A PILHA EST� VAZIA, RETORNA 1
*/

typedef struct no
{
    int info;
    struct no* prox;
}No;

typedef struct pilha
{
    No* topo;
}Pilha;

Pilha* criaPilha(void)
{
    Pilha* p;
    p = (Pilha*)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
};


#endif