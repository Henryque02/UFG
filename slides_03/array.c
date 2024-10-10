//Faça um programa que leia dez números e os imprima em ordem inversa

#include<stdio.h>

int main(){
    
    int numeros[10], j, i;

    printf("Digite 10 numeros: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }
    for (j = 9; j >= 0; j--)
    {
        printf("\n%d", numeros[j]);
    }
    

    return 0;
}

/*#include <stdio.h>

#define N 3

void main()
{
    int numeros[N];
    
    for(int i=0; i<N; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    for(int i=0; i<N; i++){
        printf("%d \n", numeros[N-i-1]);
    }
}*/