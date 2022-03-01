#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H

#define Max 10

// Fixed Array Stack
typedef struct staticStack {
    int sp;
    int values [Max];
}STACK, *SStack;

void SinitStack (SStack s);
int SisEmpty (SStack s);
int Spush (SStack s, int x);
int Spop (SStack s, int *x);
int Stop (SStack s, int *x);

// Dynamic Array Stack
typedef struct dinStack{
    int size; // guarda o tamanho do array values
    int sp;
    int *values;
}*DStack;

void dupsizeStack (DStack s);
int DisEmpty (DStack s);
int Dpush (DStack s, int x);
int Dpop (DStack s, int *x);
int Dtop (DStack s, int *x);


#endif //UNTITLED_STACK_H