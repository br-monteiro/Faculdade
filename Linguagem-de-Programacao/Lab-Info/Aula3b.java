/**
 * Desenvolvido por Bruno Monteiro
 * Disciplina: Linguagem de Programação
 * Professor: Antonio Lobato
 * Aula do dia 03-03-2016
 */
package helloworld;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro - bruno.monteirodg@gmail.com
 */
public class Aula3b {

    /**
     * @param args 
     */
    public static void main(String[] args) {

        // declaração de variáveis
        int n1, n2, soma;
        String s1, s2;
        
        // campos de inserção de texto
        s1 = JOptionPane.showInputDialog("Primeiro número: ");
        s2 = JOptionPane.showInputDialog("Segundo número: ");
        
        n1 = Integer.parseInt(s1);
        n2 = Integer.parseInt(s2);
        
        // soma os valores
        soma = n1 + n2;
        // saída de dados
        JOptionPane.showMessageDialog(null, "A soma é " + soma);
        // saída do sistema
        System.exit(0);
    }
}
