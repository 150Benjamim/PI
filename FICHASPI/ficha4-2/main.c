#include <stdio.h>
#include <string.h>

int vogais (char s){

    char *r;
    char *aux  = {"aeiou"};

    r = strchr(aux, s);

    if (r != NULL) return 1;
    else return 0;
}

int contaVogais (char *s){

    int contador = 0;

    for (int i  = 0; s[i] != '\0'; i++){
        if (vogais (s[i])) contador++;
    }

    return contador;
}


int retiraVogaisRep (char *s){

    int cont = 0, remov = 0, i;

    for (i  = 0; s[i] != '\0'; i++){
        if ( (s[i] != s[i+1]) || !vogais(s[i]) ){
            s[cont] = s[i];
            cont++;
        }
        else remov++;
    }
    while (s[cont] != '\0'){
        s[cont] = '\0';
        cont++;
    }

    return remov;
}


int duplicaVogais (char *s){

    int add = 0, i;

    for (i = 0; s[i] != '\0'; i++){

        if (vogais(s[i])) {
            int x = 0;
            while (s[x] != '\0') x++;
            s[x+1] = '\0';
            for (; x > i; x--) {
                s[x] = s[x-1];
            }
            i++;
            add++;
        }
    }

    return add;
}


int ordenado (int v[], int N){

    for (int i = 1; i<N; i++){
        if (v[i] < v[i-1]) return 0;
    }

    return 1;
}


void merge (int a[], int na, int b[], int nb, int r[]){

    int size = na+nb;
    int auxA = 0, auxB = 0;

    for (int i = 0; i < size; i++){
        if ( (a[auxA] <= b[auxB]) || auxB == nb){
            r[i] = a[auxA];
            auxA++;
        }
        else {
            r[i] = b[auxB];
            auxB++;
        }
    }
}


int partition (int v[], int N, int x){

    int r = 0;

    for (int i = 0; i<N; i++){
        if (v[i]<=x){
            r++;
        }
        else{
            while ((v[N-1] > x) && N-1!=i) N--;
            int aux = v[i];
            v[i] = v[N-1];
            v[N-1] = aux;
            N--;
        }
    }

    return r;
}



int main() {

    int r [10];
    int v [5] = {1,24,45,54,80};
    int b [5] = {1,23,34,56,78};
    merge (v,5,b,5,r);
    for (int i = 0; i<10; i++) printf ("%d ",r[i]);
    return 0;
}