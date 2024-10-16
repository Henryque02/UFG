// Estude union.c  e explique como funciona uma união e qual a diferença dela comparada com uma estrutura struct.

#include <stdio.h>

// Uma unica variavel que representa multipos tipos de dados
union Data {
    int   intN;
    float floatF;
} data; 

int main() {
    union Data data;

    data.intN = 5;
    data.floatF = 3.4;

    printf("%d\n", data.intN);
    printf("%f\n", data.floatF);

    return(0);
}

/*O tipo union em C é uma estrutura especial que permite armazenar diferentes tipos de dados no mesmo espaço de memória, 
mas apenas um membro pode ser usado de cada vez. 
Todos os membros de uma union compartilham o mesmo espaço de memória, ou seja, 
o tamanho da union será o tamanho do seu maior membro.

Diferença entre union e struct:
Em uma struct, cada membro tem seu próprio espaço de memória, então todos podem armazenar valores simultaneamente.
Em uma union, todos os membros compartilham o mesmo espaço de memória, então apenas um membro pode armazenar um valor de cada vez.*/