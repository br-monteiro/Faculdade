#include <stdio.h>
#include <stdlib.h>


/**
 * Verifica a quantidade de alunos, suas notas e media aritmética.
 * 
 * Escreva um programa em C para ler o número de alunos
 * existentes em uma turma, ler as notas destes alunos,
 * e calcular a média aritmética destas notas.
 */
int main() {
    
    // Declarção de variáveis
    int qtd_aluno = 0, i;
    float nota_1, nota_2, nota_3, media;

    // Solicita a quantidade de alunos
    printf("Insira a quantidade de Alunos:");
    scanf("%d", &qtd_aluno);
    printf("\n");

    // Inicia o laço
    for (i = 1; i <= qtd_aluno; i++) {

        // Solicita a inserção da primeira nota
        printf("\t## Insira o valor da primeira nota:");
        scanf("%f", &nota_1);

        // Solicita a inserção da segunda nota
        printf("\t## Insira o valor da segunda nota:");
        scanf("%f", &nota_2);

        // Solicita a inserção da terceira nota
        printf("\t## Insira o valor da terceira nota:");
        scanf("%f", &nota_3);

        // Calcula média aritmética das notas
        media = (nota_1 + nota_2 + nota_3) / 3;
        printf("\t>> A media aritmetica do aluno %d e : %f\n\n", i, media);
    }
    return 0;
}

