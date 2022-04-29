#include <stdio.h>
#include <stdlib.h>

#include "arvorebinaria.h"

int main()
{
   int q,w,e,r,t,y,u,i,o;

    printf("Vamos montar uma arvore binaria com tipo inteiro de valores\n");
    printf("\nDigite um elemento para no raiz: ");
    scanf("%d",&q);
    printf("Digite um elemento para o galho esquerdo: ");
    scanf("%d",&w);
    printf("Digite um elemento para o galho direito: ");
    scanf("%d",&u);
    printf("Digite um elemento para o galho esquerdo - folha esquerda: ");
    scanf("%d",&e);
    printf("Digite um elemento para o galho esquero - folha direita: ");
    scanf("%d",&y);
    printf("Digite um elemento para o galho direito - folha esquerda: ");
    scanf("%d",&i);
    printf("Digite um elemento para galho direito - folha direita: ");
    scanf("%d",&o);
    printf("Digite um elemento para o galho esquerdo - folha esquerda - sub folha esquerda: ");
    scanf("%d",&r);
    printf("Digite um elemento para o galho esquerdo - folha esquerda - sub folha direita: ");
    scanf("%d",&t);
// sub-árvore com 'y'
    Arvore *a1= criaNo(y,inicializaArvore(),inicializaArvore());
// sub-árvore com 'w'
    Arvore *a2= criaNo(w,inicializaArvore(),a1);
// sub-árvore com 'i'
    Arvore *a3= criaNo(i,inicializaArvore(),inicializaArvore());
// sub-árvore com 'o'
    Arvore *a4= criaNo(o,inicializaArvore(),inicializaArvore());
// sub-árvore com 'u'
    Arvore *a5= criaNo(u,a3,a4);
// árvore com raiz 'q'
    Arvore *a = criaNo(q,a2,a5);


    a->esq->esq = criaNo(e,criaNo(r,inicializaArvore(),inicializaArvore()),criaNo(t,inicializaArvore(),inicializaArvore()));
    //a->dir->esq = libera(a->dir->esq);
   // a->esq->esq->esq = libera(a->esq->esq->esq);

    imprime(a);

    printf("\n\n");

    libera(a);

    return 0;
}
