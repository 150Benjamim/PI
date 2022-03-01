#include <stdio.h>

typedef struct aluno{
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;


int nota (Aluno a) {

    int medMiniT = 0, r;

    for (int i = 0; i < 6; i++) {
        medMiniT += a.miniT[i];
    }
    medMiniT = medMiniT / 6;

    r = (medMiniT + a.teste) / 2;

    if (r < 10) return 0;
    else return r;
}


int procuraNum (int num, Aluno t[], int N){

    int i;

    for (i = 0; i<N; i++){
        if (num == t[i].numero) return i;
    }

    return (-1);
}


void swapAlunos (Aluno t[], int x, int y){
    Aluno aux = t[x];
    t[x] = t[y];
    t[y] = aux;
}

void ordenaPorNum (Aluno t[], int N){

    for (int i = 0; i<N-1; i++){
        int min = i;
        for (int j = i+1; j<N; j++){
            if (t[j].numero<t[min].numero) min = j;
        }
        if (i != min) swapAlunos(t,i,min);
    }
}


int main() {
    printf("Hello, World!\n");
    return 0;
}
