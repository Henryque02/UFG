/*Faça um programa que execute as seguintes etapas:
Digite números inteiros e os armazene em uma matriz de ordem M_LIN × M_COL
Verifique qual desses números é maior
Imprima os elementos da matriz e, em seguida, o seu maior elemento
(*) BONUS: Ingresse a ordem da matriz como parâmetro do programa*/

/*#include <stdio.h>
#include <stdlib.h>

int achaMaior(int* vetor, int tamanho) {
  int maior = vetor[0];

  for (int i=1;i<tamanho;i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
  }

  return maior;
}

int achaMenor(int* vetor, int tamanho) {
  int menor = vetor[0];

  for (int i=1;i<tamanho;i++) {
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  return menor;
}

int main(int argc, char* argv[]) {
  int vetor[100];
  int N;
 
  /* Entendo argc e argv
  printf("argc   : %d\n", argc);
  printf("argv[0]: %s\n", argv[0]);
  printf("argv[1]: %s\n", argv[1]);
  *
  
  if(argc == 2) {
    N = atoi(argv[1]); // char* em inteiros
    printf("N: %d\n", N);
  }
  
  for (int i = 0; i<N;i++) {
    scanf("%d", &vetor[i]);
  }

  for (int i=0;i<N;i++) {
    printf("%d\n", vetor[i]);  
  }

  printf("Maior: %d\n", achaMaior(vetor, N));
  printf("Menor: %d\n", achaMenor(vetor, N));
  
  return 0;
} */

/* Estrutura de Dados I
Matheus Marinho */

/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.

Associe as variáveis aos ponteiros (use &).

Modifique os valores de cada variável usando os ponteiros.

Imprima os valores das variáveis antes e após a modificação. */