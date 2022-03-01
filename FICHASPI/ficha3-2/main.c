#include <stdio.h>

void swapM (int *x, int *y){

    int aux = *x;
    *x = *y;
    *y = aux;
}


void swap (int v[], int i, int j){

    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}


int soma (int v[], int N){

    int r = 0;

    for (int i = 0; i<N; i++){
        r += v[i];
    }

    return r;
}


void inverteArray1 (int v[], int N){

    int last = N-1;

    for (int i = 0; i < N/2; i++){
        swapM (v[i],v[last]);
        last--;
    }
}

void inverteArray2 (int v[], int N){

    int last = N-1;

    for (int i = 0; i < N/2; i++){
        swap(v,i,last);
        last--;
    }
}


int maximum (int v[], int N, int *m){

    if (N<=0) return 1;

    int r = v[0];
    for (int i = 1; i<N; i++){
        if (r > v[i]) r = v[i];
    }

    *m = r;

    return 0;
}


void quadrados (int q[], int N){

    q[0] = 0;
    for (int i = 1; i<N; i++){
        q[i] = q[i-1] + (2*(i-1)+1);
    }
}


void pascal (int v[], int N){

    int aux = 0;

    while (aux < N){
        v[aux] = 1;
        for (int i = aux-1; i>=1; i--){
            v[i] = v[i] + v[i-1];
        }

        for (int i = 0; i <= aux; i++){
            printf ("%d ",v[i]);
        }
        printf ("\n");

        aux++;
    }
}



int main() {

    int v[6];
    pascal(v,6);

    return 0;
}