#include <stdio.h>

void triangulo (int l){

    for (int i = 0; i < l; i++){
        for (int c = i; c >= 0; c--){
            putchar ('#');
        }
        printf("\n");
    }
    for (int i = l-2; i >= 0; i--){
        for (int c = i; c >= 0; c--){
            putchar ('#');
        }
        printf("\n");
    }
}