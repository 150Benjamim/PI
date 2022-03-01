#include "Abin.h"
#include <stdlib.h>
#include <stdio.h>

ABin newABin (int r, ABin e, ABin d){
    ABin a = malloc (sizeof(struct nodo));
    if (a!=NULL){
        a->valor = r;
        a->esq = e;
        a->dir = d;
    }
    return a;
}

//typedef struct nodo{
//    int valor;
//    struct nodo *esq, *dir;
//}*ABin;

// árvores binárias

int altura (ABin a){

    int alt;

    if (a == NULL) return 0;

    if (altura(a->esq) >= altura(a->dir)) alt = 1 + altura(a->esq);
    else alt = 1 + altura(a->dir);

    return alt;
}

int nFolhas (ABin a){

    int folhas = 0;

    if (a == NULL) return 0;

    if (a->esq == NULL && a->dir == NULL) folhas++;
    else folhas = folhas + nFolhas(a->esq) + nFolhas(a->dir);

    return folhas;
}

ABin maisEsquerda (ABin a){

    if (a == NULL) return a;

    while (a->esq != NULL){
        a = a->esq;
    }

    return a;
}

void imprimeNivel (ABin a, int l){

     if (a!=NULL) {
         if (l != 0){
             if (a->esq != NULL) imprimeNivel(a->esq, l-1);
             if (a->dir != NULL) imprimeNivel(a->dir, l-1);
         }
         else printf("%d ", a->valor);
     }
}

int procuraE (ABin a, int x){

    int r;

    if (a == NULL) return 0;

    if (a->valor == x) return 1;
    else{
        r = procuraE(a->esq, x);
        if (r == 1) return 1;
        r = procuraE(a->dir, x);
        if (r == 1) return 1;
    }

    return 0;
}


// árvores binárias de procura

struct nodo *procura (ABin a, int x){

    while (a != NULL){
        if (a->valor == x) return a;
        else if (x < a->valor) a = a->esq;
        else a = a->dir;
    }

    return NULL;
}

int nivel (ABin a, int x){

    int contador=0;

    while (a != NULL){

        if (a->valor == x) return contador;
        else if (x < a->valor){
            contador++;
            a = a->esq;
        }
        else{
            contador++;
            a = a->dir;
        }
    }

    return (-1);
}

void imprimeAte (ABin a, int x){

    if (a != NULL){
        if (a->valor < x) {
            imprimeAte(a->esq, x);
            if (a->valor < x) printf("%d ", a->valor);
            imprimeAte(a->dir, x);
        }
        else{
            imprimeAte(a->esq, x);
            if (a->valor < x) printf("%d ", a->valor);
        }
    }

}