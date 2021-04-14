/**
 * Desenvolvido por Bruno Monteiro
 * Disciplina: Linguagem de Programação
 * Professor: Antonio Lobato
 * Aula do dia 22-02-2016
 */
package helloworld;

/**
 * @author Bruno Monteiro - bruno.monteirodg@gmail.com
 */
public class HelloWorld {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        // Declaração de variáveis
        int a = 1, b = 2;
        String nome_completo = "Bruno Monteiro";
        
        // saída de dados - impressão na tela
        // imprime e quebra a linha automaticamente
        System.out.println("Hello Wolrd!");
        // precisa do simbolo de quebra de linha
        System.out.print("Hello Wolrd!\n");
        
        // impressão de variáveis
        System.out.println("Se a variável a é " + a + ", e b é " + b);
        System.out.println("A soma de a + b é " + (a + b));
        System.out.println("Meu nome é " + nome_completo);

    }
    
}
