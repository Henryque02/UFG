/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.

Associe as variáveis aos ponteiros (use &).

Modifique os valores de cada variável usando os ponteiros.

Imprima os valores das variáveis antes e após a modificação.
*/

#include<stdio.h>

int main(){

    int inteiro, *pint;
    float real, *preal;
    char letra, *pletra;

    printf("Digite um inteiro, um real e uma letra:\n");
    scanf("%d%f %c", &inteiro, &real, &letra);

    pint = &inteiro;
    preal = &real;
    pletra = &letra;

    printf("O inteiro digitado foi %d, o real digitado foi %f e a letra digitada foi %c", inteiro, real, letra);
    
    pin
    
    
    
    printf("Depois de trocar o inteiro vale  um real e uma letra:")

    return 0;
}