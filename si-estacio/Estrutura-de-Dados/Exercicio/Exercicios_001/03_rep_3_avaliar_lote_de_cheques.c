#include <stdio.h>
#include <stdlib.h>

/**
 * Avalia um lote de cheques .
 * 
 * Escreva um programa em C para validar um lote de cheques.
 * O programa deverá inicialmente solicitar a soma do lote e o número de cheques.
 * A seguir deverá ler o valor de cada cheque calculando a soma total.
 * Após a digitação de todos os cheques o programa deverá imprimir as
 * seguintes mensagens:
 * 1 - LOTE Ok se a soma informada for igual a soma calculada.
 * 2 - Diferença negativa se a soma calculada for menor que a informada.
 * 3 - Diferença positiva se a soma calculada for maior que a informada.
 * Observação: O valor da diferença deve ser impresso (caso exista).
 */
int main() {
    
    // Declaração de variáveis
    int qtd_cheque, i = 1;
    float soma_informada, soma_calculada = 0, valor_cheque;
    
    // Solicita a inserção do número de cheques
    printf("Insira a quantidade de Cheques a serem processados: ");
    scanf("%d", &qtd_cheque);

    // Solicita a inserção do valor da soma dos cheques
    printf("Insira a soma do lote de cheques: ");
    scanf("%f", &soma_informada);

    // Poderia também ser resolvido com o comando FOR da lingugem C
    while (i <= qtd_cheque) {

        // Solicita a inserção do valor do cheque
        printf("\nPor favor, insira o valor do cheque numero %d: ", i);
        scanf("%f", &valor_cheque);
        
        // Soma os cheques
        soma_calculada = soma_calculada + valor_cheque;
        i++;
    }

    // verifica se o valor informado é o mesmo que o calculado
    if (soma_informada == soma_calculada) {
        
        printf("\nLOTE OK");

    // verifca se o valor informado é menor que o calculado
    // se este caso for verdadeiro, então imprime Diferença
    // positiva e mostra o valor da diferença. Senão executa
    // próximo bloco de código
    } else if (soma_informada < soma_calculada) {

        soma_calculada = soma_calculada - soma_informada;
        printf("\n## Diferenca Positva. Valor da difenca: %f", soma_calculada);

    // Exibe a mensagem informando que a diferenca é
    // negativa e mostra o valor da diferenca
    } else {

        soma_calculada = soma_informada - soma_calculada;
        printf("\n## Diferenca Negativa. Valor da difenca: %f", soma_calculada);
        
    }
    system("pause > nul ");
    return 0;
}

