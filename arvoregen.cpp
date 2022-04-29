#include <stdio.h>
#include <stdlib.h>
#include "arvoregen.h"

int main()
{
    int q,w,z,r,t,y,u,v,o,p;

    printf("Vamos montar uma arvore binaria com tipo inteiro de valores\n");
    printf("\nDigite um elemento para no raiz: ");
    scanf("%d",&q);
    printf("Digite um elemento para o galho esquerdo: ");
    scanf("%d",&w);
    printf("Digite um elemento para o galho direito: ");
    scanf("%d",&u);
    printf("Digite um elemento para o galho central: ");
    scanf("%d",&p);
    printf("Digite um elemento para o galho esquerdo - folha esquerda: ");
    scanf("%d",&z);
    printf("Digite um elemento para o galho esquero - folha direita: ");
    scanf("%d",&y);
    printf("Digite um elemento para o galho direito - folha esquerda: ");
    scanf("%d",&v);
    printf("Digite um elemento para galho direito - folha direita: ");
    scanf("%d",&o);
    printf("Digite um elemento para o galho esquerdo - folha esquerda - sub folha esquerda: ");
    scanf("%d",&r);
    printf("Digite um elemento para o galho direito - folha direita - sub folha direita: ");
    scanf("%d",&t);

    /* cria nós como folhas */
    ArvGen* a = cria(q);
    ArvGen* b = cria(w);
    ArvGen* c = cria(z);
    ArvGen* d = cria(r);
    ArvGen* e = cria(y);
    ArvGen* f = cria(p);
    ArvGen* g = cria(u);
    ArvGen* h = cria(v);
    ArvGen* i = cria(o);
    ArvGen* j = cria(t);

    /* monta a hierarquia */
    insere(c,d);
    insere(b,e);
    insere(b,c);
    insere(i,j);
    insere(g,i);
    insere(g,h);
    insere(a,g);
    insere(a,f);
    insere(a,b);

    imprime(a);

    libera(a);

    return 0;
}
