#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * Calcula o peso de um indivíduo e mostra a média aritmética dos pesos maiores
 * que 60 kg, bem como o valor do peso do indivíduo mais pesado
 * 
 * Escreva um programa em C para ler um número indeterminado de dados, contendo
 * cada um o peso de um indivíduo. O último dado que não entrará nos cálculos,
 * contém um valor negativo. Calcular e imprimir:
 * - A média aritmética dos pesos das pessoas que possuem mais de 60 Kg.
 * - O peso do mais pesado.
 */
int main() {

    // Declarção de variáveis
    int i = 0;
    float peso, peso_maior_60 = 0, mais_pesado = 0;
    
    // inicia o laço
    do {
        // Solicita a inserção do peso
        printf("Insira o peso do individuo: ");
        scanf("%f", &peso);
        
        // Verifica se o peso indicado é maior que o maior peso registrado
        if (peso > mais_pesado) {
            
            // atribui peso à mais_pesado
            mais_pesado = peso;
            
        }
        
        // Verifica se o peso fornecido é maior que 60
        if (peso > 60) {
            
            // atribui a soma de peso_maior_60 com peso a peso_maior_60
            peso_maior_60 = peso_maior_60 + peso;
            // incrementra a variável i
            i++;

        }
    } while(peso > 0);
    
    // verifica se foi inserido um valor maior que 60 ao meno uma única vez
    if (i != 0) {
        
        // calcula a média dos pesos maiores que 60 kg
        peso_maior_60 = peso_maior_60 / i;
        // imprime a mensagem com o resultado da operação
        printf("\nA media de peso de individuos que pesam mais de 60 kg e: %6.3f ", peso_maior_60);
        
    } else {
        
        // Imprime na tela a informação de que nenhum peso fornecido é maior que 60
        printf("\nNao foi fornecido nenhum peso maior que 60 kg");
        
    }
    
    // Imprime na tela o valor do maior peso
    printf("\nSegundo os dados fornecidos, "
            "o individuo mais pesado tem %6.3f kg", mais_pesado);
    return 0;
}

