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
    for (int i = 0; i < N; i++){
        r = r + v[i];
    }

    return r;
}

void inverteArray1 (int v[], int N){

    N--;
    for (int i = 0; i < N; i++){
        swapM (&v[i],&v[N]);
        N--;
    }
}

void inverteArray2 (int v[], int N){

    N--;
    for (int i = 0; i < N; i++){
        swap (v,i,N);
        N--;
    }
}

int maximum (int v[], int N, int *m){

    if (N<=0) return 1;
    else {
        *m = v[0];
        for (int i = 1; i<N; i++){
            if (v[i] > v[i-1]) *m = v[i];
        }
    }

    return 0;
}

void quadrados (int q[], int N){

    q[0] = 0;
    for (int i = 1; i<N; i++){
        q[i] = q[i-1] + (2*(i-1)+1);
    }
}

void pascal (int v[], int N){

    for (int i1 = 0; i1<N; i1++){
        v[i1] = 1;
        for (int i2 = (i1-1); i2 > 0; i2--){
            v[i2] = v[i2] + v[i2-1];
        }
        for (int print = 0; print <= i1; print++){
            printf ("%d ", v[print]);
        }
        printf ("\n");
    }
}


int main() {

    int v[6];
    pascal(v,6);

    return 0;

}
