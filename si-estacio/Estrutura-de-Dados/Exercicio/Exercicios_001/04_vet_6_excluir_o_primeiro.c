/**
 * Escreva um programa em C para ler um vetor de 10 elementos inteiros.
 * Excluir o 1o. elemento do vetor deslocando os elementos subseqüentes
 * de uma posição para o inicio. Imprimir o vetor após a retirada do primeiro
 * elemento.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @return int
 */
int main(void) {
    
    // Declaração de variáveis
    int vet[10], i;

    // inicia o loop com as solicitações de inserção de valores
    for (i = 0; i < 10; i++) {
        
        // solicita a inserção dos valores
        printf("Indique um valor inteiro (posicao %d): ", i);
        scanf("%d", &vet[i]);
    }
    
    // inicia o loop para a retirada do primeiro elemento do vetor
    for (i = 0; i < 9; i++) {
        
        // atribui o valor da posição seguinte a posição atual no vetor
        vet[i] = vet[i + 1];
    }
    
    // imprime o vetor
    printf("\nOs valores fornecidos, exceto o primeiro, sao:\n\n");
    
    for (i = 0; i < 9; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}
