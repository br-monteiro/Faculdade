#include <stdio.h>
#include <stdlib.h>

/**
 * Calcula os lados do
 * 
 * Comando da questão:
 * Escreva um programa em C para ler o número de lados de um polígono regular
 * e a medida do lado. Calcular e imprimir o seguinte:
 * Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
 * Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
 * Se o número de lados for igual a 5 escrever PENTÁGONO.
 * Em qualquer outra situação escrever Polígono não identificado.
 */
int main() {
    /**
     * Declaração de variáveis
     */
    int num_lados;
    float med_lado;
    /**
     * Solicita a inserção do numero de lados
     */
    printf("Indique a quatidade de lados no poligono regular:");
    scanf("%d", &num_lados);
    /**
     * Calcula as operações necessárias para um triângulo
     */
    if (num_lados == 3) {
        /**
         * Solicita a inserção da medida
         */
        printf("Indique a medida do lado:");
        scanf("%f", &med_lado);
        // Calcula o perímetro de um triângulo
        med_lado = med_lado + med_lado + med_lado;
        // Imprime o resultado da operção
        printf("TRIANGULO\n Perimetro igual a:%f", med_lado);
    /**
     * Calcula as operações necessárias para um quadrado 
     */
    } else if (num_lados == 4) {
        /**
         * Solicita a inserção da medida
         */
        printf("Indique a medida do lado:");
        scanf("%f", &med_lado);
        // Calcula a área do quadrado
        med_lado = med_lado * med_lado;
        printf("QUADRADO\n Area igual a:%f", med_lado);
    } else if (num_lados == 5) {
        /**
         * Imprime o a mesagem PENTAGONO na tela
         */
        printf("PENTAGONO");
    } else {
        /**
         * Imprime o a mesagem alertando que não foi possível
         * identifica o poligono 
         */
        printf("Poligono nao identificado.");
    }
    return 0;
}
