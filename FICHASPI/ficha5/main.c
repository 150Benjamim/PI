#include <stdio.h>
#include "Alunos.h"


int main() {

    Aluno t[4] = {{4444, "André", {2, 1, 0, 2, 2, 2}, 10.5},
                  {2222, "Joana",   {2, 2, 2, 1, 0, 0}, 14.5},
                  {7777, "Maria",   {2, 2, 2, 2, 2, 1}, 18.5},
                  {3333, "Paulo",   {0, 0, 2, 2, 2, 1}, 8.7}};
    int ind[4];
    imprimeTurma(ind,t,4);
    criaIndPorNome(t,4,ind);

    for (int i = 0; i<4; i++){
        printf ("%d",ind[i]);
    }

    return 0;
}
