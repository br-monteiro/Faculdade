#include <stdio.h>
#include <stdlib.h>

/**
 * Calcula os dois maiores valores de três valores indicados
 * 
 * Comando da questão:
 * Escreva um programa em C para ler 3 valores
 * (considere que não serão informados valores iguais)
 * e escrever a soma dos 2 maiores.
 */
int main() {
    // Declarção de variáveis
    int val1, val2, val3, result;
    // Solicita a inserção do primeiro valor
    printf("Indique o primeiro valor (inteiro):");
    scanf("%d", &val1);
    // Solicita a inserção do segundo valor
    printf("\nIndique o segundo valor (inteiro):");
    scanf("%d", &val2);
    // Solicita a inserção do terceiro valor
    printf("\nIndique o terceiro valor (inteiro):");
    scanf("%d", &val3);

    /**
     * Verifica se o valor de val1 é maior que o valor de val2 ou
     * se o valor de val1 é maior que o valor de val3, caso a condição
     * seja verdadeira, o programa executará o bloco interno. Senão passa
     * para a próxima condição. 
     */
    if (val1 > val2 || val1 > val3) {
        /**
         * Verifica se o valor de val2 é maior que val3,
         * se a condição for verdadeira, atribui a result
         * a soma val1 + val2, senão atribuia a result
         * a soma val1 + val3.
         */
        if (val2 > val3) {
            result = val1 + val2;
        } else {
            result = val1 + val3;
        }
    /**
     * Verifica se o valor de val2 é maior que o valor de val1 ou
     * se o valor de val2 é maior que o valor de val3, caso a condição
     * seja verdadeira, o programa executará o bloco interno. Senão passa
     * para a próxima condição. 
     */
    } else if (val2 > val1 || val2 > val3) {
        /**
         * Verifica se o valor de val1 é maior que val3,
         * se a condição for verdadeira, atribui a result
         * a soma val2 + val1, senão atribuia a result
         * a soma val2 + val3.
         */
        if (val1 > val3) {
            result = val2 + val1;
        } else {
            result = val2 + val3;
        }
    /**
     * Verifica se o valor de val3 é maior que o valor de val1 ou
     * se o valor de val3 é maior que o valor de val2, caso a condição
     * seja verdadeira, o programa executará o bloco interno. Senão passa
     * para a próxima condição. 
     */
    } else if (val3 > val1 || val3 > val2) {
        /**
         * Verifica se o valor de val1 é maior que val2,
         * se a condição for verdadeira, atribui a result
         * a soma val3 + val1, senão atribuia a result
         * a soma val3 + val2.
         */
        if (val1 > val2) {
            result = val3 + val1;
        } else {
            result = val3 + val2;
        }
    /**
     * Imprime a mensagem que de que os resultados são iguais.
     * @return int
     */
    } else {
        printf("\nAparentemente os valores sao iguais.\n");
        return 0;
    }
    /**
     * Imprime a mesagem na tela juntamente com o resultado da operação
     * @return int
     */
    printf("\nA soma dos dois maiores valores indicados e: %d", result);
    return 0;
}
