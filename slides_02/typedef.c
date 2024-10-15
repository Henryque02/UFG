//Complete o código typedef.c . Depois, clone os dados para um outro aluno que teve a mesma média mas com matrícula diferente.

#include <stdio.h>

// Redefinindo os tipos float e int
typedef float nota;
typedef int   inteiro;

struct tAluno {
    inteiro matricula;
    nota prova1;
    nota prova2;
};

// Redefinindo uma struct (encurta o comando na declaracao)
typedef struct tAluno tAluno;

int main(void) {
    tAluno aluno;
    nota media = 0;
  
    printf("Informe o numero de matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &aluno.prova1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &aluno.prova2);

    media = ( aluno.prova1 + aluno.prova2) / 2;

    printf("\nMatricula   : %d\n", aluno.matricula);
    printf("Media do aluno: %.1f\n", media);
    getchar();

    return(0);
}