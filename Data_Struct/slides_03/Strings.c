/*Faça um programa que permita salvar seu “nome e sobrenome” em uma única string.
Requisitos extra: Garanta que o tamanho máximo da string não estoure
Dicas: Use scanf ou fgets para coletar strings e printf ou fputs para mostrar strings
Responda: Descubra o que fazem as seguintes funções: strlen, strcpy, strcat, strcmp, strncmp, stricmp*/

#include<stdio.h>

int main(){
    
    char Nome[50];
    printf("Digite seu nome e sobrenome: ");
    scanf("%50[^\n]", Nome);
    printf("%s", Nome);
    
    return 0;
}