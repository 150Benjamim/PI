#include <stdio.h>

float multInt1 (int n, float m){

    float r = 0;

    while (n!= 0){
        r += m;
        n--;
    }

    return r;
}


float multInt2 (int n, float m){

    float r = 0;
    int oper = 0;

    while (n!=0){

        if (n % 2 != 0){
            r += m;
            oper++;
        }

        n = n/2;
        m = m*2;
        oper++;
    }

    return r;
}


int mdc1 (int a, int b){

    int div, aux = 1;

    if (a<=b){
        while (aux <= a){
            if ((a % aux == 0) && (b % aux == 0)) div = aux;
            aux++;
        }
    }
    else{
        while (aux <= b){
            if ((b % aux == 0) && (a % aux == 0)) div = aux;
            aux++;
        }
    }

    return div;
}


int mdc2 (int a, int b){

    int number = 0, div;

    while ( (a != 0) && (b != 0) ){
        if (a == b) return a;
        else if (a > b){
            a -= b;
            div = b;
        }
        else{
            b -= a;
            div = a;
        }
        number++;
    }

    return div;
}

int mdc3 (int a, int b){

    int div;

    while ( (a != 0) && (b != 0) ){
        if (a == b) return a;
        else if (a > b){
            a = a % b;
            div = b;
        }
        else{
            b = b % a;
            div = a;
        }
    }

    return div;
}


int fib1 (int n){

    int r;

    if (n<2) return 1;
    else r = fib1(n-1) + fib1(n-2);

    return r;
}


int fib2 (int n){

    int r = 0, fst=1, snd=1, cont = 2;

    if (n<2) return 1;

    else{
        while (cont <= n){
            r = fst + snd;
            fst = snd;
            snd = r;
            cont++;
        }
    }

    return r;
}



int main() {

    int r = fib1(29);
    printf ("%d", r);
}
