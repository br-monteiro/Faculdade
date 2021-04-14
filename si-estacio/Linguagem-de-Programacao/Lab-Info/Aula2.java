/**
 * Desenvolvido por Bruno Monteiro
 * Disciplina: Linguagem de Programação
 * Professor: Antonio Lobato
 * Aula do dia 29-02-2016
 */
package helloworld;

/**
 * @author Bruno Monteiro - bruno.monteirodg@gmail.com
 */
public class Aula2 {
    
    /**
     * @param args 
     */
    public static void main(String[] args) {
        // declaração de variáveis
        int a = 5;

        // saida de dados - impressão no console
        System.out.println("Valor de a é " + a);
        // pós-incremento
        System.out.println("pós-incremento " + (a++));
        System.out.println("Valor de a é " + a);
        // pré-incremento
        System.out.println("pré-incremento " + (++a));
        System.out.println("Valor de a é " + a);

    }
}
