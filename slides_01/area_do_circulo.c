/*Leia o valor do raio de um círculo, calcule e imprima a área dele. 
Considere pi como 3.141592*/

#include<stdio.h>

int main(){
    
    float r, a, pi = 3.141592 ;
    printf("Insira o valor do raio para descobrir a area: ");
    scanf("%f", &r);
    a = pi*r*r;
    printf("A area do circulo e igual a %.2f", a);
    return 0;
}