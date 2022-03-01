#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

// inicia uma stack = NULL;
void initStack (Stack *s){

    (*s) = NULL;
}

// verifica se a stack está empty
int SisEmpty (Stack s){

    if (s == NULL) return 1;
    else return 0;
}

// dá push a elemento para head da lista (primeiro a ser removido da stack)
int push (Stack *s, int x){

    Stack aux = malloc (1*sizeof (struct slist));
    aux->valor = x;
    aux->prox = *s;

    *s = aux;

    return 0;
}

// remove elemento da lista (último a ser colocado na stack)
int pop (Stack *s, int *x){

    if (SisEmpty (*s)) return 1;

    Stack aux;
    *x = (*s)->valor;

    aux = (*s);
    *s = (*s)->prox;
    free (aux);

    return 0;
}

// guarda em x o ultimo elemento a ser colocado na stack
int top (Stack s, int *x){

    *x = s->valor;

    return 0;
}