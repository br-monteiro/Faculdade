#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C para ler 5 pares de valores (considere que serão informados apenas
 * valores positivos). Para cada par lido deve ser impresso o valor do maior elemento do par ou a frase "Eles
 * são iguais" se os valores do par forem iguais. Para obter o maior elemento do par utilize a função MaiorNumero.
 * 
 * Nome: MaiorNumero
 * Descrição: Retorna o maior elemento entre 2 valores positivos. Se eles forem iguais deve ser retornado o
 * valor -1.
 * Entrada: (int) Dois valores positivos.
 * Saída: (int) O maior deles ou -1 se eles forem iguais.
 * Observação: Considere que os valores de entrada são sempre positivos.
 */

/**
 * @param val1 int
 * @param val2 int
 * @return int
 */
int maiorNumero(int val1, int val2) {
    
    // Verifica se os valores são diferentes
    if (val1 == val2) {
        
        return -1;
        
    } else {
        
        // Verifica se o valor de val1 é maior que val2, se a condição for verdadeira
        // então retorna val1
        if (val1 > val2) {
            return val1;
        } else {
            return val2;
        }
    }
}

/**
 * @return int
 */
int main(void) {
    
    // Declaração de variáveis
    int val1, val2, result, i;
    
    for (i = 0; i < 5; i++) {
        // Solicita a inserção dos valores
        printf("Insira os valores: ");
        scanf("%d %d", &val1, &val2);

        // verifica e retorna o maior valor
        result = maiorNumero(val1, val2);
        
        // verifica o resultado
        if (result < 0) {
            
            // imprime a mensagem informando a igualdade de valores
            printf("Eles sao iguais\n");
            
        } else {
            
            // imprime o resultado
            printf("O maior valor entre %d e %d = %d\n", val1, val2, result);
            
        }
            
    }
    return 0;
}
