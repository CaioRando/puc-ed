#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

/*
Arvore* criaArvore();
int arvoreVazia(Arvore* Arvore);
void insereArvore(Arvore*, int);
NoArvore* buscaArvore(Arvore* Arvore, int numero)

*/


typedef struct NoArvore{
    int info;
    struct NoArvore *left;
    struct NoArvore *right;
}NoArvore;

typedef struct Arvore{
    NoArvore *raiz;
}Arvore;

Arvore* criaArvore(){
    Arvore* aux;
    aux = (Arvore*)malloc(sizeof(Arvore));
    aux->raiz = NULL;
    return aux;
}

int arvoreVazia(Arvore* Arvore){
    if(Arvore->raiz == NULL){
        return 1;
    }
    else return 0;
}

NoArvore* aux_insereArvore(NoArvore* no, int n){
    int flag;
    NoArvore* Pai;
    NoArvore* novo = (NoArvore*)malloc(sizeof(NoArvore));

    novo->info = n;
    novo->left = NULL;
    novo->right = NULL;

    if(no == NULL){     // arvore esta vazia
        return novo;
    }else{  // arvore nao vazia
        Pai = no;
        flag = 0;
        while(!flag){
            if(Pai->info < n){              // n maior que pai (vai para direita)
                if(Pai->right == NULL){     // achou espaco vazio
                    Pai->right = novo;
                    flag = 1;
                }else{
                    Pai = Pai->right;
                }
            }else if(Pai->info > n){        // n menor que pai (vai para esquerda)
                if(Pai->left == NULL){      // achou espaco vazio
                    Pai->left = novo;
                    flag = 1;
                }else{
                    Pai = Pai->left;
                }
            }
        }
    }
    return no;
}

void insereArvore(Arvore* Arvore, int n){
    Arvore->raiz = aux_insereArvore(Arvore->raiz, n);
}

void aux_imprimeArvoreCrescente(NoArvore* Pai){
    if(Pai->left != NULL){
        aux_imprimeArvoreCrescente(Pai->left);
    }
    printf("%d ", Pai->info);
    if(Pai->right != NULL){
        aux_imprimeArvoreCrescente(Pai->right);
    }
}

void imprimeArvoreCrescente(Arvore* Arvore){
    printf("-----------------------------------------\n");
    printf("\t");
    aux_imprimeArvoreCrescente(Arvore->raiz);
    printf("\n-----------------------------------------\n");
}

NoArvore* aux_buscaArvore(NoArvore* Pai, int numero){
    int flag = 1;
    while(flag){
        if(Pai == NULL){
            return NULL;
        }else if(Pai->info == numero){
            return Pai;
        }else if(Pai->info > numero){
            Pai = Pai->left;
        }else{
            Pai = Pai->right;
        }
    }
}

NoArvore* buscaArvore(Arvore* Arvore, int numero){
    NoArvore* no = aux_buscaArvore(Arvore->raiz, numero);
    if(no == NULL){
        printf("Numero nao encontrado");
        return NULL;
    }else{
        return no;
    }
}
#endif // ARVORE_H_INCLUDED
