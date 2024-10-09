/*Elabore um programa que faça leitura de vários números inteiros, até que se digite um número negativo. 
O programa deve mostrar todos os números digitados (sem o negativo)*/

#include<stdio.h>

int main(){
    
    int vetor[20], n, i = 0, j;
    while (i >= 0)
    {
        printf("Digite um numero positivo para continuar e um negativo para parar: ");
        scanf("%d", &n);
        vetor[i] = n;
        i++;

    }
    for ( j = 0; j < i-1 ; j++)
    {
        printf("%d", j);
    }
    
    
    
    return 0;
}