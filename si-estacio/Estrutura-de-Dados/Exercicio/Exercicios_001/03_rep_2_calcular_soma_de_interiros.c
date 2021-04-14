#include <stdio.h>
#include <stdlib.h>

/**
 * Calcula a soma dos valores existentes entre dois inteiros.
 * 
 * Ler 2 valores inteiros, calcular e escrever a soma dos inteiros existentes
 * entre os 2 valores lidos (incluindo os valores lidos na soma). Considere
 * que o primeiro pode ser menor que o segundo e viceversa.
 */
int main() {

    // Declaração de variáveis
    int val1, val2, menor_val, maior_val, result = 0, i = 0;

    // Solicita a inserção do primeiro valor
    printf("Insira um numero inteiro:");
    scanf("%d", &val1);

    // Solicita a inserção do primeiro valor
    printf("Insira outro numero inteiro:");
    scanf("%d", &val2);

    // verifica se val1 é menor que val2
    if (val1 < val2) {
        
        menor_val = val1;
        maior_val = val2;
        
    } else {
        
        menor_val = val2;
        maior_val = val1; 
        
    }

    // Inicia o Laço
    for (i = menor_val; i <= maior_val; i++) {
        // soma os inteiro
        result = result + i;
    }

    // Exibe na tela a mensagem contendo o resultado da operalção
    printf("A soma dos inteiros existentes entre %d e %d (incluindo-os) e: %d", menor_val, maior_val, result);
    return 0;
}

