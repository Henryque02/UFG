/*Faça um programa que execute as seguintes etapas:
Digite números inteiros e os armazene em uma matriz de ordem M_LIN × M_COL
Verifique qual desses números é maior
Imprima os elementos da matriz e, em seguida, o seu maior elemento
(*) BONUS: Ingresse a ordem da matriz como parâmetro do programa*/

#include <stdio.h>

int M,N;

int main(int argc, char *argv[]) {
    printf("Número de argumentos: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    return 0;
}