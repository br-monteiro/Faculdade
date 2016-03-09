/**
 * Exercício de programação 1
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * Fazer um programa em JAVA que leia um número
 * inteiro e exiba o seu antecessor e o seu sucessor.
 */
package exerciciolobato;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class LeitorInteiro {

    /**
     * @param args Comandos enviados via prompt de comando
     */
    public static void main(String[] args)
    {
        // declaração de variáveis
        int numero;
        
        numero = informaNumero("Informa um numero inteiro");
        msg("O número informado foi " + numero + "\n"
            + "O seu antecessor é " + (numero - 1) + "\n"
            + "O seu sucessor é " + (numero + 1));

        // finaliza a execução em segundo plano
        System.exit(0);
        
    }
    
    /**
     * Exibe uma caixa de diálogo com mensagem na tela
     * 
     * @param msg Texto da mensagem
     */
    public static void msg(String msg)
    {
        JOptionPane.showMessageDialog(null, msg);
    }
    
    /**
     * Exibe uma caixa de diálogo para a inserção de dados
     * 
     * @param msg Mensagem de orientação ao usuário
     * @return int Valor informado
     */
    public static int informaNumero(String msg)
    {
        // exibe o imput para entrada do número
        /// reutiliza a mesma variável
        msg = JOptionPane.showInputDialog(msg);
        // converte em inteiro e retorna o valor
        return Integer.parseInt(msg);
    }
    
}
