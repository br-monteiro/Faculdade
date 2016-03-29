package listadeexercicio02;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

public class Util {
    
    /**
     * Recebe o valor enviado pelo usuário
     * @param msg Mensagem a ser exibida ao usuário para
     * identificação do campo de entrada de dados
     * @return int
     */
    public static int recebeValor(String msg)
    {
        // recebe o valor idicado pelo usuário
        // exibe a mensagem enviada por msg
        msg = JOptionPane.showInputDialog(msg);
        // solicita o valor ao usuário
        try {
            // retorna o valor informado pelo usuário convertido em inteiro
            return Integer.parseInt(msg);
        // lança uma Exception informando que o número não pode ser convertido
        } catch (NumberFormatException e) {
            Util.msg("Não foi possivel efetuar a operação \n Erro: "
                + e.getMessage());
            // força a saída do sistema
            System.exit(0);
        }
        return 0;
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
}
