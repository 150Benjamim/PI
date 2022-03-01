#include <stdlib.h>
#include "Stack.h"

// Static Array Stack

void SinitStack (SStack s){

    s->sp = 0;
}

int SisEmpty (SStack s){

    if (s->sp == 0) return 1;
    else return 0;
}

int Spush (SStack s, int x){

    if (s->sp == Max) return 1;

    s->values[s->sp] = x;
    s->sp++;

    return 0;
}

int Spop (SStack s, int *x){

    if (SisEmpty(s)) return 1;

    *x = s->values[s->sp-1];
    s->sp--;

    return 0;
}

int Stop (SStack s, int *x){

    if (SisEmpty(s)) return 1;

    *x = s->values[s->sp-1];
    return 0;
}


// Dynamic Array Stack

void dupsizeStack (DStack s){

    s->values = realloc(s->values, 2*s->size*sizeof(int));
    s->size = s->size*2;
}

void DinitStack (DStack s){

    s->sp = 0;
    s->size = 5;
    s->values = malloc(s->size*sizeof(int));
}

int DisEmpty (DStack s){

    if (s->sp == 0) return 1;
    else return 0;
}

int Dpush (DStack s, int x){

    if (s->sp == s->size) dupsizeStack(s);

    s->values[s->sp] = x;
    s->sp++;
}

int Dpop (DStack s, int *x){

    if (s->sp == 0) return 1;
    s->sp--;
    *x = s->values[s->sp];

    return 0;
}

int Dtop (DStack s, int *x){

    if (s->sp == 0) return 1;
    *x = s->values[s->sp-1];
    return 0;
}