#include <stdio.h>
#include <math.h>

void quadrado (int l){

    for (int i=0;i<l;i++){
        for (int i=0;i<l;i++){
            putchar ('#');
        }
        printf ("\n");
    }
}


void xadrez (int l){

    for (int h=0;h<l;h++){
        for (int c=0;c<l;c++){
            if ((h+c)%2 == 0) putchar ('#');
            else putchar ('_');
        }
        printf ("\n");
    }
}


void triangulo (int n);


int circulo (int raio){

    int y, x, number = 0;

    for (y=4; y>=-4; y--){
        for (x=-4; x<=4; x++){
            if ( pow(x,2) + pow(y,2) <= pow(raio,2) ){
                putchar ('#');
                number++;
            }
            else printf(" ");
        }
        printf ("\n");
    }

    return number;
}



int main(){

    int r = circulo(4);
    printf("%d \n",r);
    return 0;
}
