#include <stdio.h>

void triangulo (int l){


    for (int i = 1; i <= l; i++){
        int s = l-i;
        while (s != 0){
            printf (" ");
            s--;
        }

        int a = 2*i-1;
        while (a!=0){
            putchar ('#');
            a--;
        }

        printf ("\n");
    }
}