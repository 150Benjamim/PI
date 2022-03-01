#include <stdlib.h>
#include "Queue.h"

// DOIS ENDEREÇOS PARA CADA EXTREMIDADE DA LISTA

// inicia uma queue = NULL
void initQueue (Queue *q){

    q->inicio = NULL;
    q->fim = NULL;
}

// verifica se uma queue está vazia
int QisEmpty (Queue q){

    if (q.inicio == NULL) return 1;
    else return 0;
}

// enqueue a um valor
int enqueue (Queue *q, int x){

    if (QisEmpty(*q)) {
        q->fim = malloc(1 * sizeof(struct slist));
        q->fim->valor = x;
        q->fim->prox = NULL;
        q->inicio = q->fim;
    }
    else {
        q->fim->prox = malloc(1 * sizeof(struct slist));
        q->fim = q->fim->prox;
        q->fim->valor = x;
        q->fim->prox = NULL;
    }

    return 0;
}

// dequeue a um valor
int dequeue (Queue *q, int *x){

    if (QisEmpty(*q)) return 1;
    else {
        *x = q->inicio->valor;
        LInt aux = q->inicio;
        q->inicio = q->inicio->prox;
        free (aux);
    }

    return 0;
}

// guarda o primeiro valor a ser queued
int front (Queue q, int *x){

    if (QisEmpty(q)) return 1;

    *x = q.inicio->valor;
    return 0;
}


// LISTA CIRCULAR

// inicia uma queue = NULL
void initQueueC (QueueC *q){

    *q = NULL;
}

// verifica se uma queue está vazia
int QisEmptyC (QueueC q){

    if (q == NULL) return 1;
    else return 0;
}

// enqueue a um valor
int enqueueC (QueueC *q, int x){

    if (QisEmptyC(*q)) {
        (*q) = malloc(1*sizeof (struct  slist));
        (*q)->valor = x;
        (*q)->prox = *q;
    }
    else {

        QueueC aux = *q;
        while (aux->prox != *q) aux = aux->prox;
        aux->prox = malloc(1 * sizeof(struct slist));
        aux->prox->valor = x;
        aux->prox->prox = (*q);
    }

    return 0;
}

// dequeue a um valor
int dequeueC (QueueC *q, int *x){

    if (QisEmptyC(*q)) return 1;
    else if (*q == (*q)->prox){
        free (*q);
        *q = NULL;
    }
    else {
        *x = (*q)->valor;
        QueueC aux = *q;
        *q = (*q)->prox;
        while (aux->prox != *q) aux = aux->prox;
        aux->prox = *q;
        free (aux);
    }

    return 0;
}

// guarda o primeiro valor a ser queued
int frontC (QueueC q, int *x){

    if (QisEmptyC(q)) return 1;
    *x = q->valor;

    return 0;
}