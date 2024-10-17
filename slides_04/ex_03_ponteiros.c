/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação.*/

#include<stdio.h>

int main(){

    int inteiro = 10, *ptr_inteiro;
    float real = 3.5, *ptr_real;
    char caracter = 'h', *ptr_caracter;
    ptr_inteiro = &inteiro;
    ptr_real = &real;
    ptr_caracter = &caracter;
    printf("O valor de intero e %d\nO valor de real e %.2f\nO valor de caracter e %c\n", inteiro, real, caracter);
    *ptr_inteiro = 15;
    *ptr_real = 5.2;
    *ptr_caracter = 'g';
    printf("Depois da troca o inteiro vale: %d\nO real vale: %f\nO caracter vale: %c", inteiro, real, caracter);

    return 0;
}