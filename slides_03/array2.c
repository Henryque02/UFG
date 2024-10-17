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