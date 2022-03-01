#ifndef FICHA8_STACK_H
#define FICHA8_STACK_H

typedef struct slist {
    int valor;
    struct slist *prox;
}*LInt;
typedef LInt Stack;

void initStack (Stack *s);
int SisEmpty (Stack s);
int push (Stack *s, int x);
int pop (Stack *s, int *x);
int top (Stack s, int *x);

#endif //FICHA8_STACK_H