#include "Queue.h"
#include <stdlib.h>

// Static Array Queue

void SinitQueue (SQueue q){

    q->front = 0;
    q->length = 0;
}

int SisEmptyQ (SQueue q){

    if (q->length == 0) return 1;
    else return 0;
}

int Senqueue (SQueue q, int x){

    if (q->length == Max) return 1;

    q->values[(q->length+q->front) % Max] = x;
    q->length++;
}

int Sdequeue (SQueue q, int *x){

    if (SisEmptyQ(q)) return 1;

    *x = q->values[q->front];
    q->front = (q->front+1) % Max;
    q->length--;
}

int Sfront (SQueue q, int *x){

    if (SisEmptyQ(q)) return 1;

    *x = q->values[q->front];
    return 0;
}


// Dynamic Array Queue

void dupsizeQueue (DQueue q){

    q->values = realloc(q->values, 2*q->size*sizeof(int));
    q->size = q->size*2;
}

void DinitQueue (DQueue q){

    q->front = 0;
    q->length = 0;
    q->size = 5;
    q->values = malloc(q->size*sizeof (int));
}

int DisEmptyQ (DQueue q){

    if (q->length == 0) return 1;
    else return 0;
}
// had to do this way or stupid error when it has a lot of enqueues and dequeues
int Denqueue (DQueue q, int x){

    if (q->length+q->front == q->size) dupsizeQueue(q);

    q->values[(q->length+q->front)] = x;
    q->length++;

    return 0;
}
// had to do this way or stupid error when it has a lot of enqueues and dequeues
int Ddequeue (DQueue q, int *x){

    if (DisEmptyQ(q)) return 1;

    *x = q->values[q->front];
    q->front++;
    q->length--;

    return 0;
}

int Dfront (DQueue q, int *x){

    if (DisEmptyQ(q)) return 1;

    *x = q->values[q->front];

    return 0;
}