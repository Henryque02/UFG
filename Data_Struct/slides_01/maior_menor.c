/*Elabore um programa que faça leitura de vários números inteiros, até que se digite um número negativo. 
O programa deve mostrar todos os números digitados (sem o negativo)*/

#include<stdio.h>

int main(){
    
    int vetor[20], n, i = 0, j;
    while (n >= 0)
    {
        printf("Digite um numero positivo para continuar e um negativo para parar: ");
        scanf("%d", &n);
        vetor[i] = n;
        i++;

    }

    printf("Numeros digitados:\n");
    for ( j = 0; j < i-1 ; j++)
    {        
        printf("\n%d", vetor[j]);
    }
    
    return 0;
}