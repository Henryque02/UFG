//A alocação dinâmica é administrada pelas funções malloc, realloc e free, que estão na biblioteca stdlib.

#include<stdlib.h>

int main(){

    int *temp = (int *)malloc(n * sizeof(int));

/*malloc: É uma função que aloca um bloco de memória dinâmica.
n: Representa o número de elementos que deseja-se alocar. 
sizeof(int): retorna o tamanho em bytes de um único inteiro (int)
O cast (int *) é utilizado para indicar que o ponteiro retornado por malloc deve ser tratado como um ponteiro para int.*/

    int *arr = ( int *)calloc(num, sizeof(int));

/*A linha acima aloca memória para um array de num inteiros e inicializa todos os elementos a zero,
 armazenando o endereço do início desse bloco no ponteiro arr.*/

    int *new_arr = (int *)realloc(arr, new_size * sizeof(int));

/*Um novo tamanho é fornecido, e a função realloc é redimensiona o array, 
o ponteiro new_arr é atualizado para apontar para o novo bloco de memória.
*/

//Verificação da função de alocação de memória

int *arr_maloc = 
}
