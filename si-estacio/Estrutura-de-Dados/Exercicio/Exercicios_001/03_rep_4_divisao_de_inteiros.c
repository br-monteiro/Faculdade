#include <stdio.h>
#include <stdlib.h>

/**
 * Realisa a divisão de dois números inteiros.
 * 
 * Escreva um programa em C para ler 2 valores inteiros e imprimir o resultado
 * da divisão do primeiro pelo segundo. Se o segundo valor informado for ZERO,
 * deve ser impressa uma mensagem de VALOR INVÁLIDO e lido um novo valor.
 * Ao final do programa deve ser impressa a seguinte mensagem: VOCÊ
 * DESEJA OUTRO CÁLCULO(S/N)?
 * Se a resposta for S o programa deverá retornar ao começo,
 * caso contrário deverá encerrar a sua execução imprimindo
 * quantos cálculos foram feitos.
 */
int main() {

    // Declarção de variáveis
    int val1, val2, i = 0, continuar = 1;
    char opcao = 'i';

    // Inicia o laço
    do {
        
        // Solicita a inserção do primeiro valor
        printf("\nInsira um numero inteiro: ");
        scanf("%d", &val1);
        
        // Solicita a inserção do segundo valor
        printf("Insira outro numero inteiro: ");
        scanf("%d", &val2);
        
        // verifica se o segundo valor informado é diferente de zero
        if (val2 != 0) {
            i++;
            printf("A divisao de %d por %d e: %d\n", val1, val2, (val1 / val2) );
        } else {
            // Imprime na tela a mensagem de VALOR INVALIDO
            printf("\nVALOR INVALIDO");
        }
        
        // verifica se o usuário quer fazer outra operação
        printf("\nVOCE DESEJA OUTRO CALCULO(S/N)?: ");
        do {
            scanf("%c", &opcao);
            // verifica se opção digitada é válida
            if (opcao == 's' || opcao == 'S') {
                continuar = 1;
            } else if (opcao == 'n' || opcao == 'N') {
                printf("\n %d Calculos Feitos", i);
                continuar = 0;
            } else {
                opcao = 'i';
            }
        } while (opcao == 'i'); // i = inválido
        
    } while (continuar == 1);
    system("pause > nul");
    return 0;
}

