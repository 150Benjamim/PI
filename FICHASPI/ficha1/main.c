#include <stdio.h>


void printRetangle (int x){

    for (int i = 0; i < x; i++) {
        for (int i = 0; i < x; i++) {
            putchar('#');
        }
        printf("\n");
    }
}

void printChess (int x){

    int aux=0;

    for (int i = 0; i < x; i++){
        aux = i;
        for (int i = 0; i < x; i++){
            if (aux % 2 == 0) putchar('#');
            else putchar('_');
            aux++;
        }

        printf ("\n");
    }
}

void vertical (int x){

    int aux = 0;

    for (int i = 0; i < (x*2-1); i++) {
        if (i < x) aux++;
        else aux--;
        for (int i = 0; i < aux; i++){
            putchar('#');
        }
        printf("\n");
    }
}

void horizontal (int x){

    int aux1 = x, aux2 = (-1);

    for (int i = 0; i < x; i++){
        aux1--;
        aux2 = aux2 + 2;
        for (int i = 0; i < aux1; i++){
            putchar (' ');
        }
        for (int i = 0; i < aux2; i++){
            putchar('#');
        }
        printf ("\n");
    }
}

void circle (int r){

    for (int y = r; y >= (-r) ; y--){
        for (int x = (-r); x <= r; x++){
            if (x*x + y*y <= r*r) putchar('#');
            else putchar(' ');
        }
        printf ("\n");
    }
}

int main() {

    int x;

    scanf ("%d",&x);

    return 0;
}
