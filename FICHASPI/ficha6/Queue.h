#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H

#define Max 10

// Fixed Array Queue
typedef struct staticQueue{
    int front;
    int length;
    int values [Max];
}QUEUE, *SQueue;

void SinitQueue (SQueue q);
int SisEmptyQ (SQueue q);
int Senqueue (SQueue q, int x);
int Sdequeue (SQueue q, int *x);
int Sfront (SQueue q, int *x);

// Dynamic Array Queue
typedef struct dinQueue {
    int size;// guarda o tamanho do array values
    int front;
    int length;
    int *values;
}*DQueue;

void dupsizeQueue (DQueue q);
void DinitQueue (DQueue q);
int DisEmptyQ (DQueue q);
int Denqueue (DQueue q, int x);
int Ddequeue (DQueue q, int *x);
int Dfront (DQueue q, int *x);


#endif //UNTITLED_QUEUE_H