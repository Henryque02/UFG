/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faça uma função que retorne a soma do dobro dos dois números lidos.
A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B
*/

#include<stdio.h>

int main(){

    int A,B, *ptrA, *ptrB, op;
    printf("Digite um valor inteiro para A: ");
    scanf("%d", &A);
    printf("Digite um valor inteiro para B: ");
    scanf("%d%d", &B);

    ptrA = &A;
    ptrB = &B;
    int SomaDobro(){
        *ptrA = 2*A;
        *ptrB = 2*A;
        op = A+B;
        return op;
    }
    printf("A soma do dobro de A + B e igual: %d", op);
    return 0;
}