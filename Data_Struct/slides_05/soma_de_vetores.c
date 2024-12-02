/*Complete o conteudo de ex01.c do jeito a atingir os seguintes requisitos:

./ex01.out 23 45 59
Vetor 1: 023 045 059 
Vetor 2: 000 002 007 
Soma   : 023 047 066 

Requisitos:
O primeiro vetor, de números inteiros, é passado como parâmetro do programa
O segundo vetor é formado por números aleatórios, inteiros, na faixa [VMIN, VMAX]
A soma de vetores é realizada utilizando ponteiros seguindo os protótipos propostos
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define VMAX 
# define VMIN 

void somaVetor(int *p, int *q, int tamanho) {
}

void mostraVetor(int *p, int tamanho) {
}

int main(int argc, char* argv[]) {
    srand(time(NULL));
    int N; // tamanho do vetor \
              (inferir a partir dos dados de entrada)

    N = ...;
    int v1[N]; // dado
    int v2[N]; // aleatorio

    // Vetor dado
    

    // Vetor aleatorio


    printf("Vetor 1: ");
    mostraVetor(v1, N);
    
    printf("Vetor 2: ");
    mostraVetor(v2, N);
    
    somaVetor(v1, v2, N);
    
    printf("Soma   : ");
    mostraVetor(v1, N);

    return 0;
}