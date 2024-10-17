//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include<stdio.h>

int main(){

    int x, y;
    
    if (&x > &y)
    {
        printf(" O endereco de x e %p e e maior que o endereco de y que e %p", &x, &y);
    }
    else
        printf(" O endereco de y e %p e maior que o endereco de x que e %p", &y, &x);
    
    return 0;
}