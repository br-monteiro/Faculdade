#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * Soma o valor de A a n Valores e exibi a média aritmética
 * 
 * Escreva um programa em C para ler um valor A e um valor N. Imprimir a soma
 * dos N números a partir de A (inclusive). Caso N seja negativo ou ZERO,
 * deverá ser lido um novo N (apenas N). Valores para teste
 *  A N SOMA
 *  3 2 7  (3+4)
 *  4 5 30 (4+5+6+7+8)
 */
int main() {

    // Declarção de variáveis
    int a, n, i, soma = 0;
    
    // Solicita a inserção do valor de A
    printf("Insira o valor de A: ");
    scanf("%d", &a);
    
    // inicia o laço
    do {
        // Solicita a inserção do valor de N
        printf("Insira o valor N: ");
        scanf("%d", &n);
        
    } while (n <= 0);
    
    // inicia o laço
    for (i = 1; i <= n; i++) {
        
        // soma os resultado apartir de A
        soma = soma + a;
        a++;
        
    }
    
    // imprime o resultado da operação
    printf("O resultado da operacao e: %d", soma);
    return 0;
}

