#include <stdio.h>
#include <stdlib.h>

/**
 * Identifica um triângulo e classifica quanto ao valor dos ângulos.
 * 
 * Escreva um programa em C que leia o valor de 3 ângulos de um
 * triângulo e escreva se o triângulo é cutângulo,retângulo ou obtusângulo.
 * Observação:
 * Triângulo retângulo: possui um ângulo reto (90 graus).
 * Triângulo obtusângulo: possui um ângulo obtuso (ângulo maior que 90 graus).
 * Triângulo acutângulo: possui 3 ângulos agudos (ângulo menor que 90 graus).
 */
int main() {
    
    // Declaração de variáveis
    float a, b, c;
    
    // Solicita a Inserção do valor do ângulo a
    printf("Insira o valor do angulo A:");
    scanf("%f", &a);
    
    // Solicita a Inserção do valor do ângulo b
    printf("Insira o valor do angulo B:");
    scanf("%f", &b);
    
    // Solicita a Inserção do valor do ângulo c
    printf("Insira o valor do angulo C:");
    scanf("%f", &c);
    
    /**
     * Operações de classificação dos triângulos conforme os ângulos
     * Verifica se todos os ângulos são menores que 90º
     */
    if (a < 90 && b < 90 && c < 90) {
        
        // Imprime na tela a mensagem de classificação do triângulo
        printf("Triangulo acutangulo:\npossui 3 angulos agudos (angulo menor que 90 graus).");
        
    /**
     * Verifca se ao menos um dos ângulos tem exatemente 90º
     */
    } else if(
        /**
         * Verifica se o ângulo A é igual a 90 e BeC diferente de 90
         */
        (a == 90 && b != 90 && c != 90)
        /**
         * Verifica se o ângulo B é igual a 90 e AeC diferente de 90
         */
        || (a != 90 && b == 90 && c != 90)
        /**
         * Verifica se o ângulo C é igual a 90 e AeB diferente de 90
         */
        || (a != 90 && b != 90 && c == 90)
    ) {
        
        // Imprime na tela a mensagem de classificação do triângulo
        printf("Triangulo retangulo:\npossui um angulo reto (90 graus).");
    
    /**
     * Verifica se pelo menos um dos ângulos tem o valor maior que 90º
     */
    } else if (
        /**
         * Verifica se o ângulo A é maior que 90 e BeC menor que 90
         */
        (a > 90 && b < 90 && c < 90)
        /**
         * Verifica se o ângulo B é maior que 90 e AeC menor que 90
         */
        || (a < 90 && b > 90 && c < 90)
        /**
         * Verifica se o ângulo C é igual a 90 e AeB menor que 90
         */
        || (a < 90 && b < 90 && c > 90)
    ) {
        
        // Imprime na tela a mensagem de classificação do triângulo
        printf("Triangulo obtusangulo:\npossui um angulo obtuso (angulo maior que 90 graus).");
    
    /**
     * Se nenhuma das condições acima forem aceitas, então classifica
     */
    } else {
        
        // Imprime na tela a mensagem informando a não classificação do triângulo
        printf("Nao foi possivel identificar o triangulo.");

    }
    return 0;
}

