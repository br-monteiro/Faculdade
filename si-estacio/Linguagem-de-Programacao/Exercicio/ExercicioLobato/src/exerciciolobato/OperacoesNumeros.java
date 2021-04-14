/**
 * Exercício de programação 1
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * A partir de n números lidos escrever como resultado a soma destes n números,
 * a média e a soma dos quadrados e a soma dos cubos destes n números lidos
 * O primeiro numero a ser lido será o "n" para que o programa saiba quantos números
 * vai ler em seguida.
 */
package exerciciolobato;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class OperacoesNumeros {

    /**
     * @param args Comandos enviados via prompt de comando
     */
    public static void main(String[] args)
    {
        // declaração de variáveis
        /// recebe a quantidades de números a serem lidos
        int qtdNumero;
        /// recebe a soma, soma dos quadrados e cubos dos números
        float   somaQuadrado = 0,
                somaCubo = 0,
                somaNumero = 0,
                temp;
        
        // inicia o loop de solicitação da quantidade de números a serem lidos
        do {

            qtdNumero = informaNumeroInt("Informe a quantidade de números a serem lidos");
        // verifica se o número informado é um inteiro POSITIVO
        } while (qtdNumero <= 0);
        
        // inicia o loop de solicitação de inserção dos números
        for (int i = 0; i < qtdNumero; i++) {

            // solicita a inserção do número e o atribui a variável temp
            temp = informaNumeroFloat("Informe um número (" + (i + 1) + "/" + qtdNumero + ")");
            // recebe a soma dos valores inseridos
            somaNumero += temp;
            // calcula o quadrado do número e atribui a variável somaQuadrado
            somaQuadrado += Math.pow(temp, 2);
            // calcula o cubo do número e atribui a variável somaCubo
            somaCubo += Math.pow(temp, 3);
            
        }

        // exibe uma mensagem com o resultado na tela
        msg("A soma dos números inseridos é " +  somaNumero + "\n"
            + "A média dos números é " + (somaNumero / qtdNumero) + "\n"
            + "A soma dos quadrados é " + somaQuadrado + "\n"
            + "A soma dos cubos é " + somaCubo);

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
    public static int informaNumeroInt(String msg)
    {
        // exibe o imput para entrada do número
        /// reutiliza a mesma variável
        msg = JOptionPane.showInputDialog(msg);
        // converte em inteiro e retorna o valor
        return Integer.parseInt(msg);
    }
    
    /**
     * Exibe uma caixa de diálogo para a inserção de dados
     * 
     * @param msg Mensagem de orientação ao usuário
     * @return float Valor informado
     */
    public static float informaNumeroFloat(String msg)
    {
        // exibe o imput para entrada do número
        /// reutiliza a mesma variável
        msg = JOptionPane.showInputDialog(msg);
        // converte em inteiro e retorna o valor
        return Float.parseFloat(msg);
    }
        
}
