#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula{
    char *palavra;
    int ocorr;
    struct celula *prox;
}*Palavras;


void libertaLista (Palavras l) {

    Palavras aux;

    while (l != NULL) {
        aux = l;
        l = l->prox;
        free(aux);
    }
}

int quantasP (Palavras l){

    int contador = 0;

    while (l != NULL){
        if (l->ocorr = 1) contador++;
        l = l->prox;
    }

    return contador;
}

int quantasOcorr (Palavras l, char *palavra){

    int contador=0;

    while (l != NULL){
        if (strcmp(palavra,l->palavra) == 0 ) contador++;
        l = l->prox;
    }
    return contador;
}

void listaPal (Palavras l){

    while (l != NULL){

        if (quantasOcorr(l,l->palavra) == l->ocorr) printf ("Palavra:%s Número de ocorrências:%d\n", l->palavra, l->ocorr);
        l = l->prox;
    }
}

char *ultima (Palavras l){

    char *last;

    while (l != NULL){
        last = l->palavra;
        l = l->prox;
    }

    return last;
}


Palavras acrescentaInicio (Palavras l, char *p){

    Palavras aux;
    aux = malloc(1*sizeof(struct celula));
    aux->palavra = p;
    aux->ocorr = 1;
    aux->prox = l;

    return  aux;
}

Palavras acrescentaFim (Palavras l, char *p){

    if (l == NULL){

        l = malloc(1*sizeof (struct celula));
        l->palavra = p;
        l->ocorr = 1;
        l->prox = NULL;

        return l;
    }

    else{

        Palavras aux = l;

        while (aux->prox != NULL) {
            aux = aux->prox;
        }

        aux->prox = malloc(1 * sizeof(struct celula));
        aux->prox->palavra = p;
        aux->prox->ocorr = 1;
        aux->prox->prox = NULL;
    }

    return  l;
}

Palavras acrescenta (Palavras l, char *p){

    Palavras aux = l;

    if (quantasOcorr(l, p) == 0){
        acrescentaInicio(l,p);
    }
    else{
        while (strcmp(p,aux->palavra) != 0) aux = aux->prox;
        aux->ocorr++;
    }

    return l;
}

struct celula *maisFreq (Palavras l){

    Palavras aux = l;
    struct celula *r;
    r->palavra = aux->palavra;
    r->ocorr = aux->ocorr;
    r->prox = NULL;

    while (aux != NULL){
        aux = aux->prox;
        if (aux->ocorr > r->ocorr){
            r->palavra = aux->palavra;
            r->ocorr = aux->ocorr;
            r->prox = NULL;
        }
    }

    return r;
}


int main() {

    Palavras c;

    c = malloc(1*sizeof(struct celula));
    c->palavra = "fds";
    c->ocorr = 1;
    c->prox = malloc(1*sizeof(struct celula));
    c->prox->palavra = "cona";
    c->prox->ocorr = 1;
    c->prox->prox = NULL;


    return 0;
}
