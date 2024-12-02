/*Faça um programa que calcule a média, padrão UFG, de 3 números inteiros, 
sendo que um desses números é 20 e os demais deverão ser digitados durante a execução*/

#include<stdio.h>

int main(){
    
    int n1, n2, n3 = 10;
    float media;
    printf("Digite suas notas: ");
    scanf(" %d %d", &n1, &n2);
    media = (n1+n2+n3)/3.0;
    printf("Sua media foi igual a %f", media);
    return 0;
}