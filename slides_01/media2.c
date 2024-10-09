/*Fazer um programa que calcule a média de 3 notas.
Caso a média seja igual ou superior a 6, o aluno estará aprovado, caso contrário, estará reprovado.*/

#include<stdio.h>

int main(){
    
    float n1, n2, n3, m;
    printf("Digite suas notas: ");
    scanf(" %f %f %f", &n1, &n2, &n3);
    m = (n1+n2+n3)/3;
    printf("sua media foi %.2f\n", m);
    if (m >= 6)
    {
        printf("Voce foi aprovado!");
    }
    else{
        printf("Voce foi reprovado");
    }

    return 0;
}