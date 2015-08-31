#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C para ler um vetor A de 10 elementos inteiros e um
 * valor X. A seguir imprimir "ACHEI" se o valor X existir em A e "NÃO ACHEI"
 * caso contrário. 
 */
int main(void) {

    // declaração de variáveis
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, x, i;
    
    // solicita a inserção de um valor inteiro para X
    printf("Indique um valor inteiro para X: ");
    scanf("%d", &x);
    
    // inicia o laço de avaliação
    for (i = 0; i <= 9; i++) {
        // verifica se o valor de X existe em A
        if (a[i] == x) {
            // se o X existir em A, imprime achei e para a execução do
            // código com o return;
            printf("ACHEI");
            return 0;
        }
    }
    // o valor de X não foi encontrado em A, então imprime NÃO ACHEI
    printf("NAO ACHEI");
    return 0;
}
