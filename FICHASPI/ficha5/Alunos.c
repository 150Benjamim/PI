#include <stdio.h>
#include <string.h>
#include "Alunos.h"

int nota (Aluno a){

    int totalMinis = 0, r;

    for (int i = 0; i<6; i++){
        totalMinis += a.miniT[i];
    }

    totalMinis /= 2;
    r = totalMinis + (a.teste * 0.7);

    if (r<10) return 0;
    else return r;
}

int procuraNum (int num, Aluno t[], int N){

    for (int i = 0; i<N; i++){

        if (t[i].numero > num) return (-1);
        if (t[i].numero = num) return i;
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

void criaIndPorNum(Aluno t[], int N, int ind[]){

    for (int i = 0; i<N; i++){

        int aluno = i, aux = 0;
        for (int j = 0; j<N; j++){
            if (t[j].numero > t[aluno].numero) aux++;
        }
        ind[i] = aux;
    }
}

void imprimeAluno(Aluno a){

    printf ("Número:%d Nome:%s Notas:{ ", a.numero, a.nome);
    for (int i = 0; i<6; i++){
        printf("%d ",a.miniT[i]);
    }
    printf ("} %f\n", a.teste);
}

void imprimeTurma (int ind[], Aluno t[], int N){

    for (int aux = N; aux >= 0; aux--){
        for (int i = 0; i<N; i++){
            if (ind[i] == aux) imprimeAluno(t[i]);
        }
    }
}

int procuraNum1 (int num, Aluno t[], int N, int ind[]){

    for (int i = 0; i<N; i++){
        if ( (t[i].numero>num && ind[i] == N) || (t[i].numero<num && ind[i] == 0) ) return (-1);
        else if (t[i].numero == num) return i;
    }

    return (-1);
}

int ordemAlfabetica (Aluno a, Aluno b){

    for (int i = 0; a.nome[i] != '\0'; i++){
        if (a.nome[i] > b.nome[i]) return 1;
        else if (a.nome[i] < b.nome[i]) return 0;
    }

    return 0;
}


void criaIndPorNome (Aluno t[], int N, int ind[]){

    for (int i = 0; i<N; i++){

        int aluno = i, aux = 0;
        for (int j = 0; j<N; j++){
            if ( ordemAlfabetica(t[j],t[aluno]) ) aux++;
        }
        ind[i] = aux;
    }
}