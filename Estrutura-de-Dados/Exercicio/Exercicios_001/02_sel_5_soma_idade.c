#include <stdio.h>
#include <stdlib.h>

/**
 * Soma e multiplica idade.
 * 
 * Escreva um programa em C que leia a idade de 2 homens e 2 mulheres
 * (considere que a idade dos homens será sempre diferente, assim como
 * das mulheres). Calcule e escreva a soma das idades do homem mais velho
 * com a mulher mais nova, e o produto das idades do homem mais novo com
 * a mulher mais velha.
 */
int main() {
    
    // Declaração de variáveis
    int homem_1, homem_2, mulher_1, mulher_2, result_1, result_2;

    // Solicita a inserção da idade do primeiro homem
    printf("Insira a idade do primeiro Homem:");
    scanf("%d", &homem_1);

    // Solicita a inserção da idade do segundo homem
    printf("Insira a idade do segundo Homem:");
    scanf("%d", &homem_2);

    // Solicita a inserção da idade da primeira mulher
    printf("Insira a idade do primeira Mulher:");
    scanf("%d", &mulher_1);

    // Solicita a inserção da idade da segunda mulher
    printf("Insira a idade do segunda Mulher:");
    scanf("%d", &mulher_2);

    // Verifca se a idade do primeiro é maior do a do segundo
    if (homem_1 > homem_2) {

        // Vefica se a idade da primeira mulher é maior que a idade da segunda
        if (mulher_1 > mulher_2) {

            // soma a idade do Homem mais velho com a da mulher mais nova
            result_1 = homem_1 + mulher_2;
            // soma a idade do Homem mais novo com a da mulher mais velha
            result_2 = homem_2 * mulher_1;

        } else {

            // soma a idade do Homem mais velho com a da mulher mais nova
            result_1 = homem_1 + mulher_1;
            // soma a idade do Homem mais novo com a da mulher mais velha
            result_2 = homem_2 * mulher_2;

        }
    // Se o segundo Homem for mais velho, executa o bloco seguinte
    } else {

        // Vefica se a idade da primeira mulher é maior que a idade da segunda
        if (mulher_1 > mulher_2) {

            // soma a idade do Homem mais velho com a da mulher mais nova
            result_1 = homem_2 + mulher_2;
            // soma a idade do Homem mais novo com a da mulher mais velha
            result_2 = homem_1 * mulher_1;

        } else {

            // soma a idade do Homem mais velho com a da mulher mais nova
            result_1 = homem_2 + mulher_1;
            // soma a idade do Homem mais novo com a da mulher mais velha
            result_2 = homem_1 * mulher_2;

        }

    }

    // exibe o resultado na tela
    printf("\n A idade do Homem mais velho somado a idade da mulher mais nova: %d\n", result_1);
    printf("\n A idade do Homem mais novo somado a idade da mulher mais velha: %d", result_2);
    return 0;
}

