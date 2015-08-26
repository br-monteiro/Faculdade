#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C para ler um valor X e um valor Z (se Z for menor
 * que X deve ser lido um novo valor para Z). Contar quantos números inteiros
 * devemos somar em seqüência (a partir do X inclusive) para que a soma
 * ultrapasse a Z o mínimo possível. Escrever o valor final da contagem.
 * Exemplo:
 * X  Z     Reposta
 * 3  20    5 (3+4+5+6+7=25)
 * 2  10    4 (2+3+4+5=14)
 * 30 40    2 (30+31=61)
 */
int main() {
    
    // Declaração de variáveis
    int x, z, i, soma = 0;
    
    // solicita a inserção de um valor para X
    printf("Informe um numero inteiro para X: ");
    scanf("%d", &x);
    
    // inicia o laço
    do {
        
        // solicita a inserção de um valor para Z
        printf("Informe um numero inteiro para Z: ");
        scanf("%d", &z);
        
    } while(z < x);
    
    // Inicia o laço infinito
    for (i = 1; i > 0; i++) {
        // soma os valores
        soma += x;
        ++x; // incrementa X

        // verifica se o resultado da soma é maior que z
        if (soma > z) {
            break;
        }
    }
    //Imprime o resultado
    printf("Resultado : %d", i);
    return 0;
}
