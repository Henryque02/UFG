/*Escreva um programa para armazenar um nome de até N bytes digitados pelo usuário.
Requisitos:
Verifique que a memória seja alojada corretamente
Caso não seja informe ao usuário e termine o programa
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;

    printf("Digite o numero de bytes que seu nome pode ter: ");
    scanf("%d", &n);

    char *arr = (char *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    
    return 0;
}