/*
Escreva um programa para ler 5 números inteiros positivos (utilize a função LePositivo). Para cada
valor lido escrever a soma dos inteiros de 1 ao número informado. O resultado do cálculo desse somatório
deve ser obtido através da função Somatorio.
Nome: LePositivo
DescriÇÃo: Faz a leitura de um valor. Se ele for negativo ou zero, a leitura deve ser repetida até que o
valor lido seja positivo.
Entrada: Nenhuma.
Saída: (int) o valor lido.
Nome: Somatório
Descrição: Calcula o somatório dos inteiros de 1 ao número fornecido como entrada.
Entrada: (int) Número limite do somatório.
Saída: (int) O valor do somatório.
*/

#include <stdio.h>
#include <stdlib.h>

int lePositivo(void) {
    //variáveis
    int numero = 0;

    do {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);
    } while(numero <= 0);

    return numero;
}

int somatorio(int numero) {
    //variável
    int i, acc = 0;
    for (i = 1; i <= numero; i++) {
        // acumula o valor
        acc = acc + i;
    }

    return acc;
}

int main(void) {

    // declaração de variáveis
    int i, numero = 0, soma = 0;

    for (i = 0; i < 5; i++) {
        numero = lePositivo();
        soma = somatorio(numero);
        printf("\nA soma de de 1 ate %d e igual a %d\n", numero, soma);
    }

    return 0;
}
