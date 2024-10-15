//Mostre o tamanho para cada tipo de dado primário em primary.c:

#include<stdio.h>
#include<stdbool.h>

int main(){

     typedef struct
        {
         unsigned int numero; 
         char *       nomeTitular;
         unsigned int telefoneTitular;
         bool         contaConjunta;
         char *       nomeDependente;   
         float        saldoAtual;
         bool         estaAtiva;
        } ContaCorrente;
    
    ContaCorrente contaCorrente1;

    printf("Tamanho do numero: %zu\n", sizeof(contaCorrente1.numero));
    printf("Tamanho do nomeTitular: %zu\n", sizeof(contaCorrente1.nomeTitular));
    printf("Tamanho do telefoneTitular: %zu\n", sizeof(contaCorrente1.telefoneTitular));
    printf("Tamanho da contaConjunta: %zu\n", sizeof(contaCorrente1.contaConjunta));
    printf("Tamanho do nomeDependente: %zu\n", sizeof(contaCorrente1.nomeDependente));
    printf("Tamanho do saldoAtual: %zu\n", sizeof(contaCorrente1.saldoAtual));
    printf("Tamanho de estaAtiva: %zu", sizeof(contaCorrente1.estaAtiva));
    printf("Tamanho da ContaCorrente: %zu", sizeof(contaCorrente1));

    return 0;
}