#include <stdio.h>
#include <stdlib.h>

/**
 * Converte o valor de Fahrenheit para Celsius
 * 
 * Comando da questão:
 * Escreva um programa em C para ler uma temperatura em graus Fahrenheit,
 * calcular e escrever o valor correspondente em graus Celsius
 * (de acordo com a fórmula abaixo).
 * C / 5 = (F - 39) / 9
 */
int main() {
    
    float c, f; // Declarção de variáveis
    // Solicita os graus em Fahrenheit
    printf("Indique o grau em Fahrenheit:");
    scanf("%f", &f);
    // realiza a conversão
    c = (f - 39)/9;
    c = c / 5;
    // exibi o resultado da conversão
    printf("\nTemperatura em Celcius: %f", c);
    // para a execução do código
    return 0;
}