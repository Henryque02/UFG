//Usando typedef.c  como base, crie um vetor para salvar dados de uma turma de 40 alunos.

#include <stdio.h>

#define t 40
// Redefinindo os tipos float e int
typedef float nota;
typedef int   inteiro;

struct tAluno {
    inteiro matricula;
    nota prova1;
    nota prova2;
    nota media;
};

// Redefinindo uma struct (encurta o comando na declaracao)
typedef struct tAluno tAluno;

int main(void) {
    tAluno aluno[t];
    for (int i = 0; i < t; i++)
    {
        printf("Informe o numero de matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Informe a nota da primeira prova: ");
        scanf("%f", &aluno[i].prova1);
        printf("Informe a nota da segunda prova: ");
        scanf("%f", &aluno[i].prova2);
        aluno[i].media = (aluno[i].prova1 + aluno[i].prova2) / 2;
    }
    for (int j = 0; j < t; j++)
    {
        printf("\nMatricula.....: %d\n", aluno[j].matricula);
        printf("Media do aluno: %.1f\n", aluno[j].media);
    }
    return 0;
}