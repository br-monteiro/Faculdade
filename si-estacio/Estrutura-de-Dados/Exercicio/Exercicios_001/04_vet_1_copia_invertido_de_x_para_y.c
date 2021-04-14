#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C para ler um vetor X de 10 elementos inteiros.
 * Logo após copie os elementos do vetor X para um vetor Y fazendo com que o 1º
 * elemento de X seja copiado para o 10º de Y, o 2º. de X para o 9º de Y e
 * assim sucessivamente. Após o término da cópia, imprimir o vetor Y.
 */
int main(void) {

    //Declaração de variáveis (vetores)
    int x[10] = {1,2,3,4,5,6,7,8,9,10}, y[10], i, j = 9;
    
    // realiza a cópia de valores de X para Y
    for (i = 0; i <= 9; i++) {
        y[j] = x[i];
        // aproveita o mesmo laço para imprimir os valores de Y
        printf("y[%d] = %d\n", j, y[j]);
        --j;
    }
    return 0;
}

