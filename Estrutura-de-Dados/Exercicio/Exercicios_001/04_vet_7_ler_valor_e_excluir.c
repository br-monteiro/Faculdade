/* 
 * Escreva um programa em C para ler um vetor X de 10 elementos e um valor P
 * (aceitar apenas valores entre 0 e 9) que representa a posição de um elemento
 * dentro do vetor X. Imprimir o valor do elemento que ocupa a posição informada.
 * Logo após excluir esse elemento do vetor fazendo com que os elementos 
 * subseqüentes (se houverem) sejam deslocados de 1 posição para o inicio.
 * Imprimir o vetor X após a exclusão ter sido executada.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @return int
 */
int main(void) {

    // declaração de variáveis
    int i, p = 0, j = 0, k = 0, m = 0;
    char x[10] = {'A','B','C','D','E','F','G','H','I','J'}, temp[9];
    
    do {
        // solicita a inserção de um valor inteiro entra 0 e 9
        printf("\nIndique um valor inteiro entre 0 a 9: ");
        scanf("%d", &p);
    } while(p < 0 || p > 9);
    
    // imprime o valor de acordo com a posição indicada
    printf("\n\n>>> O valor para a posicao %d e igual a %c", p, x[p]);

    // desloca os valores para um vetor temporário
    for (i = 0; i < p; ++i) {
        //atribui a temp os valores de x até o valor p
        temp[i] = x[i];
    }
    m = p;
    // desloca para o inicio do vetor x os valores a partir de p
    for (i = 0; i < 9; i++) {
        // verfica se o valor de j é menor que m
        if (j < p) {
            // desloca para o inicio do vetor X os valores de M a partir do indicado em P
            x[j] = x[++m];
            printf("\n+%d\n",j);
        } else {
            x[j] = temp[k];
            printf("\n-%c\n",temp[k]);
            k++;
        }
        j++;
    }
    
    // imprime uma mensagem de dialogo com o usuário
    printf("\n\n>>> A nova configuracao do vetor ficou da seguinte forma:\n\n");
    // imprime na tela os valores do vetor
    for (i = 0; i < 9; i++) {
        printf("%c ", x[i]);
    }
    return 0;
}
