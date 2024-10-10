/*Faça um programa que execute as seguintes etapas:
Digite 10 números inteiros e os armazene em um vetor
Verifique qual desses números é o maior e qual o menor
Imprima os elementos do vetor, em seguida o seu maior e menor elemento*/

#include<stdio.h>

int main(){
    
    int numeros[10], i, maior, menor, j;
    printf("Digite 10 numeros: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
        maior = numeros[0];
        menor = numeros[0];
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    printf("Os numeros digitados foram: ");
    for ( j = 0; j < 10; j++)
    {
        printf("\n%d", numeros[j]);
    }
    printf("\nO maior numero e %d e o menor e %d",maior, menor );

    return 0;
}

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