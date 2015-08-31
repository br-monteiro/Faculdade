#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C para ler um vetor A de 10 elementos e um valor X.
 * Copie para um vetor S (sem deixar elementos vazios entre os valores copiados)
 * os elementos de A que são maiores que X. Logo após imprimir o vetor S. 
 */
int main(void) {

    // declaração de variáveis
    int a[10], s[10], x, i = 0, j = 0;
    
    // inicia o laço
    do {
        
        printf("Indique um valor inteiro para A[%d]: ", i);
        scanf("%d", &a[i]);
        i++;
    } while(i <= 9);
    
    // solicita a inserção de um valor inteiro para X
    printf("Indique um valor inteiro para X: ");
    scanf("%d", &x);
    
    // inicia o laço de avaliação
    for (i = 0; i <= 9; i++) {
        // verifica se o valor de X existe em A
        if (a[i] > x) {
            // se o valor de X for maior que o valor contido no vetor A
            // então copia para S este valor
            s[j] = a[i];
            j++;
        }
    }
    
    // verifica se foi copiado ao menos um valor para S
    if (j != 0) {
        for (i = 0; i < j; i++) {
            printf("O valor de S[%d] = %d\n", i, s[i]);
        }
    } else {
        printf("O valor fornecido em X nao e maior que nenhum valor no vetor A.");
    }
    return 0;
}
