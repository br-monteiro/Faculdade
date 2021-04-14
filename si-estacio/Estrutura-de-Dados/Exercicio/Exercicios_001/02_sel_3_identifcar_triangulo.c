#include <stdio.h>
#include <stdlib.h>

/**
 * Identifica um triângulo e classifica como EQUILÁTERO, ISÓSCELES ou ESCALENO.
 * 
 * Escreva um programa em C que leia as medidas dos lados de
 * um triângulo e escreva se ele é EQUILÁTERO, ISÓSCELES ou ESCALENO.
 * Observação:
 * Triângulo equilátero: Possui os 3 lados iguais.
 * Triângulo isósceles: Possui 2 lados iguais.
 * Triângulo escaleno: Possui 3 lados diferentes.
 */
int main() {
    /**
     * Declaração de variáveis
     */
    float lado1, lado2, lado3;
    /**
     * Solicita a inserção do lado 1
     */
    printf("Indique o valor do primeiro lado:");
    scanf("%f", &lado1);
    /**
     * Solicita a inserção do lado 2
     */
    printf("Indique o valor do segundo lado:");
    scanf("%f", &lado2);
    /**
     * Solicita a inserção do lado 1
     */
    printf("Indique o valor do terceiro lado:");
    scanf("%f", &lado3);
    
    /**
     * Verifica os lados do triângulo para a identificação
     */
    if (lado1 == lado2 && lado1 == lado3) {
        
        // se os lados forem iguais, classifica como equilátero
        printf("Triangulo equilatero: Possui os 3 lados iguais.");
        
    } else if (
        /**
         * Verifica se o lado1 é igual ao lado2 e diferente do lado3
         */
        (lado1 == lado2 && lado1 != lado3)
        /**
         * Verifica se o lado1 é igual ao lado3 e diferente do lado2
         */
        || (lado1 == lado3 && lado1 != lado2)
        /**
         * Verifica se o lado2 é igual ao lado3 e diferente do lado1
         */
        || (lado2 == lado3 && lado2 != lado1)
    ) {
        
        // se dois lados forem iguais classifica como isósceles
        printf("Triangulo isosceles: Possui 2 lados iguais.");

    } else {
        
        /**
         * se nenhuma das condições acima forem satisfeitas,
         * então classifica com escaleno
         */
        printf("Triangulo escaleno: Possui 3 lados diferentes.");
        
    }
    return 0;
}

