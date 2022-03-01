#ifndef FICHA5_ALUNOS_H
#define FICHA5_ALUNOS_H

typedef struct aluno{
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
}Aluno;

int nota (Aluno a);
int procuraNum (int num, Aluno t[], int N);
void swapAlunos (Aluno t[], int x, int y);
void ordenaPorNum (Aluno t [], int N);
void criaIndPorNum(Aluno t [], int N, int ind[]);
void imprimeAluno(Aluno a);
void imprimeTurma (int ind[], Aluno t[], int N);
int procuraNum1 (int num, Aluno t[], int N, int ind[]);
int ordemAlfabetica (Aluno a, Aluno b);
void criaIndPorNome (Aluno t[], int N, int ind[]);



#endif //FICHA5_ALUNOS_H