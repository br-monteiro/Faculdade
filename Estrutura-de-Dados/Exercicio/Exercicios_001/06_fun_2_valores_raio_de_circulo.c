#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa que leia um número indeterminado de valores que
 * representam raios de círculos. Para cada valor informado imprimir a área e
 * seu perímetro. O programa será encerrado ao ser fornecido para o raio um
 * valor negativo. Para obter o valor da área do círculo o programa deverá chamar
 * a função AreaCirculo. Para obter o valor do seu perímetro o programa deverá
 * chamar a função CompCircunferencia
 * 
 * Nome: AreaCirculo
 * Descrição:Retorna a área do círculo.
 * Entrada: float Raio
 * Saída: (float)Aárea do círculo
 * 
 * Nome: CompCircunferencia
 * Descrição: Retorna o comprimento da circunferência (perímetro).
 * Entrada: float Raio
 * Saída: (float) O comprimento da circunferência 
 */

// Valor de Pi
float PI = 3.14;

/**
 * @param raio float
 * @return float
 */
float areaCirculo(float raio) {
    return PI * pow(raio, 2);
}

/**
 * @param raio float
 * @return float
 */
float compCircunferencia(float raio) {
    return 2 * PI * raio;
}

/**
 * @return int
 */
int main(void) {

    // Declaração de variáveis
    int i;
    float raio;
    
    // informa ao usuário a condição para terminar o programa
    printf(">> Para encerra o programa insira um valor negativo.\n\n");
    
    // Laço infinito
    for (i = 1; i > 0; i++) {
        
        // Solicita a inserção do raio
        printf("\nInsira o valor do raio: ");
        scanf("%f", &raio);
        
        // Verifica se o valor inserido é negativo
        if (raio < 0) {
            
            break; // sai do laço
            
        } else {
            
            // imprime os resultados
            printf("O area do circulo para o raio %#.2f e: %#.2f\n"
                    "O valor do perimetro do circulo para o raio %#.2f e: %#.2f\n",
                    raio, areaCirculo(raio), raio, compCircunferencia(raio));
        }
    }
    return 0;
}
