#include <stdio.h>
#include <stdlib.h>

/* 
 * Escreva um programa que leia as medidas dos lados de 5 triângulos. Para cada
 * triângulo imprimir a sua classificação (Não é triângulo, Triângulo Equilátero,
 * Isósceles ou Escaleno).O programa deve aceitar apenas valores positivos para
 * as medidas dos lados (utilizar LePositivo). Para obter o código da classificação
 * utilize a função TipoTriangulo.
 * 
 * Nome: TipoTriangulo
 * Descrição: A partir das medidas dos lados de um triângulo, verifica o tipo do
 * triângulo.
 * Entrada: (int) 3 valores
 * Saída: (int) 0 se não formam um triângulo.
 * 1 se for um triângulo equilátero.
 * 2 se for um triângulo isósceles.
 * 3 se for um triângulo escaleno.
 * Para verificar se as medidas formam um triângulo chamar a função EhTriangulo.
 * 
 * Nome: EhTriangulo
 * Descrição: Verifica se as 3 medidas informadas permitem formar um triângulo.
 * Para formar um triângulo é necessário que a medida de cada lado seja menor que
 * a soma dos outros 2.
 * Entrada: (int) 3 valores.
 * Saída: (int) 1 se os 3 valores formarem um triângulo e 0 caso contrário.
 */

/**
 * Lê os numeros positivos e retorna-os
 * @return int
 */
int lePositivo(void) {
    
    // Declaração de variáveis
    int numero;
    
    // inicia o loop de solicitação
    do {
        
        // solicita a inserção do numero
        printf(" # Indique um valor para o lado: ");
        scanf("%d", &numero);
        
    } while (numero <= 0);
    
    return numero;
}

/**
 * Verifica se é possível formar um triângulo com os dados forcecidos
 * @param ladA Valor do lado A
 * @param ladB Valor do lado B
 * @param ladC Valor do lado C
 * @return int 1 se verdadeiro 0 se falso
 */
int ehTriangulo(int ladA, int ladB, int ladC) {
    
    // inicia a validação do triângulo
    // verifica se o lado A é maior que a soma dos outros dois
    if (ladA > (ladB + ladC)) {
        
        // retorna falso
        return 0;
        
    // verifica se o lado B é maior que a soma dos outros dois
    } else if (ladB > (ladA + ladC)) {
        
        // retorna falso
        return 0;

    } else if (ladC > (ladA + ladB)) {
        
        // retorna falso
        return 0;

    } else {
        
        // retorna verdadeiro
        return 1;
    }
}

/**
 * Classifica o triangulo em equilátero, isósceles ou escaleno.
 * @param ladA Valor do lado A
 * @param ladB Valor do lado B
 * @param ladC Valor do lado C
 * @return int
 */
int tipoTriangulo(int ladA, int ladB, int ladC) {
    
    // declaração de variáveis
    int triangulo;
    
    // verfica se é possivel classificar o triângulo
    triangulo = ehTriangulo(ladA, ladB, ladC);
    
    if (triangulo == 1) {
        // verifica se os três lado são iguais (equilátero)
        if ((ladA == ladB) && (ladA == ladC)) {
            
            // retorna equilátero
            return 1;
            
        // verifica se A é diferente de B e A é diferente de C e B diferente C
        } else if ((ladA != ladB) && (ladA != ladC) && (ladB != ladC)) {
            
            // retona escaleno
            return 3;
            
        } else {
            
            // retorna isósceles
            return 2;
        }
    }
    // não é possivel classificar o triângulo
    return 0;
}
int main(void) {

    // declaração de variáveis
    int i, ladA = 0, ladB = 0, ladC = 0, tipo = 0;
    
    // inicia o loop de solicitação dos valores dos lados do triângulo
    for (i = 1; i <= 5; i++) {
        
        printf("\n\nClassificacao do triangulo nº %d\n", i);
        // solicita a inserção do valor do lado A
        ladA = lePositivo();
        // solicita a inserção do valor do lado B
        ladB = lePositivo();
        // solicita a inserção do valor do lado C
        ladC = lePositivo();
        // classifica o triângulo
        tipo = tipoTriangulo(ladA, ladB, ladC);
        if (tipo == 1) {
            
            // imprime a classificação do triangulo
            printf(" ## O Triangulo e: EQUILATERO");
            
        } else if (tipo == 2) {
            
            // imprime a classificação do triangulo
            printf(" ## O Triangulo e: ISOSCELES");
            
        } else if (tipo == 3) {
            
            // imprime a classificação do triangulo
            printf(" ## O Triangulo e: ESCALENO");
            
        } else {
            
            // imprime a mensagem informando que não é um triângulo
            printf(" !! Nao e triangulo");
        }
    }
    return 0;
}
