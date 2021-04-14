#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em Cque leia 5 valoresinteiros e imprima para cada um o
 * seu correspondente valor absoluto. Para obter o valor absoluto do número
 * utilize a função Absoluto especificada abaixo:
 * Nome: Absoluto
 * Descrição: Retorna o valor absoluto do número fornecido.
 * Entrada: int n
 * Saída: (int) O respectivo valor absoluto de n.
 * Observação:
 * -O valor absoluto de 10 é 10.
 * -O valor absoluto de -10 é 10.
 */

/**
 * função de converção para número absoluto
 * @value int valor a ser convertido
 * @return int
 */
int absoluto(int n) {
    
    // verfica se o valor é negativo, se condição for verdadeira,
    // converte para absoluto correspondente
    if (n < 0) {
        n = n + (n * -1) * 2;
    }
    return n;
}

/**
 * @return int 
 */
int main(void) {

    // Declaração de variáveis
    int value, i = 0;
    
    do {
        // Solicita a inserção de um número inteiro
        printf("\nInsira um numero inteiro: ");
        scanf("%d", &value);

        // imprime o resultado
        printf("O valor absoluto de %d e igual a %d\n", value, absoluto(value));
        
        ++i; // incremento
        
    } while(i < 5);
    
    return 0;
}
