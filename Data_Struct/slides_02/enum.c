/* Escreva uma demo para testar o código enum.c */

/*O tipo enum em C (abreviação de "enumeration", ou enumeração) é usado para definir um conjunto de constantes inteiras com nomes mais descritivos, 
tornando o código mais legível e fácil de manter. Ele é particularmente útil quando você tem um conjunto de valores que representam opções 
ou estados e deseja usar nomes simbólicos em vez de números inteiros.*/

#include <stdio.h>

enum Status { LOW = 25, MEDIUM = 50, HIGH = 80 };
enum Semana { Seg = 1, Ter, Qua, Qui, Sex, Sab, Dom };

int main() {
    enum Status resultado = MEDIUM;
    enum Semana dia = Ter;
    
    switch (dia)
    {
        case 1:
        printf("Segundou!");
        break;
    
        case 2:
        printf("Tercouu!");
        break;

        case 3:
        printf("Quartouu!!");
        break;

        case 4:
        printf("Quintouu!");
        break;

        case 5:
        printf("Sextouuu!");
        break;

        case 6:
        printf("Sábado");
        break;

        case 7:
        printf("Domingo");
        break;

        default:
        printf(":)");
    }

    switch (resultado){
        case LOW:
        printf("\nPlugue na tomada nivel da bateria: [%d]", resultado);
        break;

        case MEDIUM:
        printf("\nNivel da bateria: [%d]", resultado);
        break;

        case HIGH:
        printf("\n:) Nivel da bateria: [%d]", resultado);
        break;

        default:
        printf("\nMensagem padrao para bateria.");    
    }

    return 0;
}