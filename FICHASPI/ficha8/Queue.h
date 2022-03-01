#ifndef FICHA8_QUEUE_H
#define FICHA8_QUEUE_H

typedef struct slist {
    int valor;
    struct slist *prox;
}*LInt;


// DOIS ENDEREÇOS PARA CADA EXTREMIDADE DA LISTA
typedef struct{
    LInt inicio,fim;
}Queue;

void initQueue (Queue *q);
int QisEmpty (Queue q);
int enqueue (Queue *q, int x);
int dequeue (Queue *q, int *x);
int front (Queue q, int *x);


// LISTA CIRCULAR
typedef LInt QueueC;

void initQueueC (QueueC *q);
int QisEmptyC (QueueC q);
int enqueueC (QueueC *q, int x);
int dequeueC (QueueC *q, int *x);
int frontC (QueueC q, int *x);

#endif //FICHA8_QUEUE_H