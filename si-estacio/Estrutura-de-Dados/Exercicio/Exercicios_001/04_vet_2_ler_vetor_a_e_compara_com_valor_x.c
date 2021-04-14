#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C para ler um vetor A de 10 elementos inteiros e um
 * valor X. A seguir imprimir os índices do vetor A em que aparece um valor
 * igual a X.
 */
int main(void) {

    // declaração de variáveis
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, x;
    
    // solicita a inserção de um valor inteiro para X
    do {
        printf("Indique um valor entre 0 e 9: ");
        scanf("%d", &x);
    } while (x > 9 || x < 0);
    
    // imprime o valor com indice igual a x
    printf("O valor com indice igual ao informado e: %d", a[x]);
    return 0;
}

