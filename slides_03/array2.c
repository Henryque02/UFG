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

/*
#include <stdio.h>
#define limit 10

int main(){
    int numeros[limit], aux; 
    int maior = 0, menor = 0;

    printf("Insira um numero: ");
    for(int i=0; i<limit; i++){
        scanf("%d", &numeros[i]);   
    }

    // Ordenar para saber qual sera o maior
    for(int i=0; i<limit; i++){
         for (int j=0; j<limit-i-1; j++){
            if(numeros[j] > numeros[j+1]){
            aux = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = aux;
            }
        }
    }
    maior = numeros[9];
    menor = numeros[0];
    printf("\n");
    
    // Printing 
    
    printf("Elementos do vetor: ");
    for(int i=0; i<limit; i++){
        printf("[%d] ", numeros[i]);
    }
    printf("\n");
    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);


    return 0;
} */