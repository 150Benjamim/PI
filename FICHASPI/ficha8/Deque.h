#ifndef FICHA8_DEQUE_H
#define FICHA8_DEQUE_H

typedef struct dlist{
    int valor;
    struct dlist *ant, *prox;
}*DList;

typedef struct{
    DList back, front;
}Deque;

void initDeque (Deque *q);
int DisEmpty (Deque q);
int pushBack (Deque *q, int x);
int pushFront (Deque *q, int x);
int popBack (Deque *q, int *x);
int popFront (Deque *q, int *x);
int popMax (Deque *q, int *x);
int backD (Deque q, int *x);
int frontD (Deque q, int *x);


#endif //FICHA8_DEQUE_H