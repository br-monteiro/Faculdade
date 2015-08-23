#include <stdio.h>
#include <stdlib.h>

/**
 * Realisa a divisão de dois números inteiros.
 * 
 * Escreva um programa em C para ler o saldo inicial de uma conta bancária.
 * A seguir ler um número indeterminado de pares de valores indicando
 * respectivamente o tipo da operação (codificado da seguinte forma:
 * 1.Depósito
 * 2.Retirada
 * 3.Fim )
 * e o valor. Quando for informado para o tipo o código 3, o programa deve ser
 * encerrado e impresso o saldo final da conta com as seguintes mensagens:
 * CONTA ZERADA, CONTA ESTOURADA(se o saldo for negativo) ou
 * CONTA PREFERENCIAL (se o saldo for positivo).
 */
int main() {

    // declaração de variáveis
    int operacao;
    float saldo = 0, valor_operacao;

    // Solicita a inserção do saldo
    printf("Por favor, insira o saldo inicial: ");
    scanf("%f", &saldo);

    // imforma o menu de opções de operações
    printf("\nOpcoes de Operacoes:\n"
            "\t 1 - Deposito.\n"
            "\t 2 - Retirada.\n"
            "\t 3 - Fim.\n");
    
    // Inicia o laço
    do {
        
        // Solicita a escolha da operação e a indicação do valor
        printf("\n\nIndique a Operacao e o Valor: ");
        scanf("%d %f", &operacao, &valor_operacao);
        
        // Operação de depósito
        if (operacao == 1) {

            saldo = saldo + valor_operacao;
            // Indica o valor do saldo atual
            printf("\n>> Saldo atual: %f", saldo);
            
        } else if (operacao == 2) {

            saldo = saldo - valor_operacao;
            // Indica o valor do saldo atual
            printf("\n>> Saldo atual: %f", saldo);
            
        } else if (operacao == 3) {
            
            // Indica o valor do saldo atual
            printf("\nSessao finalizada");
            
        } else {
            
            // Indica o valor do saldo atual
            printf("\n Operacao invalida. Por favor tente novamente.");
            
        }
    } while (operacao != 3);
    
    //// Verifica o saldo da conta
    // Se o saldo for igual a zero, imprime CONTA ZERADA
    if (saldo == 0) {
        
        printf("\nCONTA ZERADA"
                "\n>> Saldo atual: %f", saldo);
    
    // Verifica se o saldo é menor que zero
    } else if (saldo < 0) {
        
        printf("\nCONTA ESTOURADA"
                "\n>> Saldo atual: %f", saldo);
    
    // Se nenhuma das condições acima forem satisfeitas, então imprime
    // o saldo atual e a mensagem CONTA PREFERENCIAL
    } else {
        
        printf("\nCONTA PREFERENCIAL"
                "\n>> Saldo atual: %f", saldo);
        
    }
    return 0;
}

