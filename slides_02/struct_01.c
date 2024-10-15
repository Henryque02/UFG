//Usando typedef.c  como base, crie um vetor para salvar dados de uma turma de 40 alunos.

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
    tAluno alunos[40];
    nota media = 0;

    for (int i = 0; i < 40; i++)
    {
        scanf(""alunos[i]);
    }
    printf("Informe o numero de matricula: ");
    scanf("%d", &alunos);
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &alunos->prova1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", alunos->prova2);

    media = (alunos->prova1  + alunos->prova2) / 2;

    printf("\nMatricula.....: %d\n", alunos->matricula);
    printf("Media do aluno: %.1f\n", media);
    getchar();

    return(0);
}