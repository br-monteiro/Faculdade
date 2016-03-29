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
    protected static int recebeValor(String msg)
    {
        // recebe o valor idicado pelo usuário
        msg = JOptionPane.showInputDialog(msg);
        // retorna o valor informado pelo usuário convertido em inteiro
        return Integer.parseInt(msg);
    }
    
    /**
     * Exibe uma caixa de diálogo com mensagem na tela
     * 
     * @param msg Texto da mensagem
     */
    protected static void msg(String msg)
    {
        JOptionPane.showMessageDialog(null, msg);
    } 
}
