#include <stdio.h>
#include <string.h>

int checkVogal (char s){

    char *vogais = "aeiouAEIOU";

    if (strchr(vogais, s) != NULL) return 1; // é vogal
    else return 0; // não é vogal
}

int contaVogais (char *s){

    int r = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (checkVogal(s[i])) r++;
    }

    return r;
}

int retiraVogaisRep1 (char *s){

    int size = strlen(s), aux = 0, removidos = 0;
    char stringAux[size];

    for (int i = 0; s[i] != '\0'; i++){
        if ((s[i] != s[i+1]) || !checkVogal(s[i])){
            stringAux[aux] = s[i];
            aux++;
        }
        else removidos++;
    }
    stringAux[aux] = '\0';

    aux = 0;
    for (int i = 0; stringAux[i] != '\0'; i++){
        s[i] = stringAux[i];
        aux++;
    }
    s[aux] = '\0';

    return removidos;
}

int retiraVogaisRep2 (char *s){

    int aux = 0;
    int removidos = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if ((s[i] != s[i+1]) || !checkVogal(s[i])){
            s[aux] = s[i];
            aux++;
        }
        else removidos++;
    }
    s[aux] = '\0';

    return removidos;
}

int duplicaVogais1 (char *s){

    int size = 2*strlen(s), aux = 0, added = 0;
    char stringAux[size];

    for (int i = 0; s[i] != '\0'; i++){
        stringAux[aux] = s[i];
        aux++;
        if (checkVogal(s[i])){
            stringAux[aux] = s[i];
            aux++;
            added++;
        }
    }
    stringAux[aux] = '\0';

    aux = 0;
    for (int i = 0; stringAux[i] != '\0'; i++){
        s[i] = stringAux[i];
        aux++;
    }
    s[aux] = '\0';

    return added;
}

int duplicaVogais2 (char *s){

    int aux = 0, added = 0;
    int size = strlen(s);

    for (int i = 0; s[i] != '\0'; i++){
        if (checkVogal(s[i])){
            for (int i2 = size; i2>i; i2--){
                s[i2] = s[i2-1];
            }
            added++;
            size++;
            i++;
        }
        aux = i;
    }
    s[aux+1] = '\0';

    return added;
}

int ordenado (int v[], int N){

    for (int i = 0; i<(N-1); i++){
        if (v[i]>v[i+1]) return 0;
    }

    return 1;
}

void merge (int a[], int na, int b[], int nb, int r[]){

    int size = na+nb;
    int naAux = 0, nbAux = 0;

    for (int i = 0; i<size; i++){
        if (naAux<na && a[naAux]<=b[nbAux]){
            r[i] = a[naAux];
            naAux++;
        }
        else if (nbAux<nb){
            r[i] = b[nbAux];
            nbAux++;
        }
    }

}

int partition1 (int v[], int N, int x){

    int r[N], rAux = 0;
    int total = 0;

    for (int i = 0; i<N; i++){
        if (v[i]<=x){
            r[rAux] = v[i];
            total++;
            rAux++;
        }
    }
    for (int i = 0; i<N; i++){
        if (v[i]>x){
            r[rAux] = v[i];
            rAux++;
        }
    }

    for (int i = 0; i<N; i++){
        v[i] = r[i];
    }

    return total;
}

void swap (int v[], int x, int y){
    int aux = v[x];
    v[x] = v[y];
    v[y] = aux;
}

int partition2 (int v[], int N, int x){

    int a = 1;

    for (int i = 0; i<N; i++){
        if (v[i]<=x) a++;
    }

    int b = a;

    for (int i = 0; i<(a-1); i++){
        if (v[i]> x){
            while (v[b]>x) b++;
            swap (v,i,b);
        }
    }

    return a-1;
}


int main() {

    int x [10] = {1,2,3,4,5,6,7,8,9,10};
    int y [10] = {1,2,3,4,5,6,7,8,9,10};
    int r [20];
    merge(x,10,y,10,r);

    for (int i = 0; i<20; i++){
        printf ("%d ", r);
    }
    return 0;
}
