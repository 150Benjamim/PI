#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"
//#include "Queue.h"



// adiciona elemento à cabeça da lista
LInt newLInt (int x, LInt xs){
    LInt r = malloc (sizeof(struct slist));
    if (r!=NULL){
        r->valor = x;
        r->prox = xs;
    }
    return r;
}


int main() {

    Stack c;
    initStack (&c);
    push (&c, 3);
    push (&c, 3);
    push (&c, 3);
    push (&c, 3);
    push (&c, 3);

    int x;
    pop (&c,&x);

    return 0;
}
