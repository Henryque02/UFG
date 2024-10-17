//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include<stdio.h>

int main(){

    int x = 20, y;
    
    if (&x > &y)
    {
        printf("%p", &x);
    }
    else
        printf("%p", &y);
    
    return 0;
}