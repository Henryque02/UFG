/*Fazer um programa que ao entrar com sua idade 
diga se você é maior de idade ou não*/

#include<stdio.h>

int main(){
    
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade < 18)
    {
        printf("Ainda e nenem!");
    }
    else{

    
        printf("Voce e adulto. Bem vindo!");
    }
    return 0;
}