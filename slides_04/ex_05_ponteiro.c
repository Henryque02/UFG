/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faça uma função que retorne a soma do dobro dos dois números lidos.
A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B
*/

#include<stdio.h>

int SomadoDobro(int *A, int *B) {
    *A = 2 * (*A);  
    *B = 2 * (*B);
    return *A + *B; 
}

int main() {
    int A, B;

    printf("Digite um valor inteiro: ");
    scanf("%d", &A);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &B);
    int soma = SomadoDobro(&A, &B);
    printf("O dobro de A: %d\n", A);
    printf("O dobro de B: %d\n", B);
    printf("A soma do dobro de A e B = %d\n", soma);

    return 0;
}