#include <stdio.h>
#include <stdlib.h>

/**
 * Converte o valor de Celsius para Fahrenheit
 * 
 * Comando da questão:
 * Escreva um programa em C para ler uma temperatura em graus Celsius
 * calcular e escrever o valor correspondente em graus Fahrenheit.
 */
int main() {
    
    float c, f; // Declarção de variáveis
    // Solicita os graus em Celcius
    printf("Indique o grau em Celcius:");
    scanf("%f", &c);
    // realiza a conversão
    f = (c * 1.800) + 32;
    // exibi o resultado da conversão
    printf("\nTemperatura em Fahrenheit: %f", f);
    // para a execução do código
    return 0;
}
