/*Escreva um programa que dadas duas coordenadas (x1, y1) e (x2, y2) de pontos em R²,
calcule sua distância*/

#include<stdio.h>
#include<math.h>

int main(){

    float x1, y1, x2, y2, d, qx, qy;
    printf("Digite a primeira coordenada (x,y): ");
    scanf(" %f %f", &x1, &y1);
    printf("Digite a segunda coordenada (x,y): ");
    scanf(" %f %f", &x2, &y2);
    qx = pow(x2-x1,2);
    qy = pow(y2-y1,2);
    d = sqrt(qx+qy);
    printf("A ditancia entre os pontos e de: %f unidades de medida", d);
    return 0;
}