#include <stdlib.h>
#include "Deque.h"


void initDeque (Deque *q){
    (*q).front = NULL;
    (*q).back = NULL;
}

int DisEmpty (Deque q){

    if (q.front == NULL) return 1;
    else return 0;
}

int pushBack (Deque *q, int x){

    if (DisEmpty (*q)){
        (*q).back = malloc (1*sizeof(struct dlist));

        (*q).back->valor = x;
        (*q).back->prox = NULL;
        (*q).back->ant = NULL;
        (*q).front = (*q).back;
    }

    else {
        DList aux;
        aux = malloc(1 * sizeof(struct dlist));

        aux->valor = x;
        aux->prox = NULL;
        aux->ant = (*q).back;

        (*q).back->prox = aux;
        (*q).back = aux;
    }

    return 0;
}

int pushFront (Deque *q, int x){

    if (DisEmpty (*q)){
        (*q).front = malloc (1*sizeof(struct dlist));

        (*q).front->valor = x;
        (*q).front->prox = NULL;
        (*q).front->ant = NULL;
        (*q).back = (*q).front;
    }

    else {
        DList aux;
        aux = malloc(1 * sizeof(struct dlist));

        aux->valor = x;
        aux->ant = NULL;
        aux->prox = (*q).front;

        (*q).front->ant = aux;
        (*q).front = aux;
    }

    return 0;
}

int popBack (Deque *q, int *x){

    if (DisEmpty (*q)) return 1;
    else{
        DList aux = (*q).back;
        *x = (*q).back->valor;

        (*q).back = (*q).back->ant;
        if ((*q).back != NULL) (*q).back->prox = NULL;
        else (*q).front = NULL;

        free(aux);
    }
    return 0;
}


int popFront (Deque *q, int *x){

    if (DisEmpty (*q)) return 1;
    else{
        DList aux = (*q).front;
        *x = (*q).front->valor;

        (*q).front = (*q).front->prox;
        if ((*q).front != NULL) (*q).front->ant = NULL;
        else (*q).back = NULL;

        free(aux);
    }
    return 0;
}

int popMax (Deque *q, int *x){

    DList aux, max;
    aux = max = (*q).back;

    int r;

    if (DisEmpty(*q)) return 1;

    while (aux != NULL) {
        if (max->valor < aux->valor) max = aux;
        aux = aux->ant;
    }

    if (max->ant == NULL) popFront (q,&r);
    else if (max->prox == NULL) popBack (q, &r);
    else{
        max->prox->ant = max->ant;
        max->ant->prox = max->prox;
        free (max);
    }

    return r;
}

int backD (Deque q, int *x){

    if (DisEmpty(q)) return 1;
    *x = q.back->valor;
    return 0;
}

int frontD (Deque q, int *x){

    if (DisEmpty(q)) return 1;
    *x = q.front->valor;
    return 0;
}