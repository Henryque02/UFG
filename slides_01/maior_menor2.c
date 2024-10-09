/*Elabore um programa que faça leitura de vários números inteiros, até que se digite um número negativo. 
O programa tem que retornar o maior e o menor número lido*/

#include<stdio.h>

int main(){
    
    int vetor[20], n, i = 0, j, maior, menor;
    while (n >= 0)
    {
        printf("Digite um numero positivo para continuar e um negativo para parar: ");
        scanf("%d", &n);
        vetor[i] = n;
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor && 0 <= n)
        {
            menor = n;
        }
        i++;

    }

    printf("\nO maior numero digitado foi %d e o menor foi %d:\n", maior, menor);
    
    return 0;
}