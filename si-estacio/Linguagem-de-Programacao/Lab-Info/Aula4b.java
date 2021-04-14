
package helloword;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro
 */
public class Aula4b {

    public static void main(String[] args) {
        //Declaração de variáveis
        int ano;
        String bissexto = "O ano indicado é bissexto!",
               noBissexto = "O ano indicado não é bissexto!"; 
        /// solicita o ano
        ano = Aula4b.entradaData("Por favor, indique o ano");  

        // verifica se o ano é divisível por 4
        if (ano % 4 == 0) {

            // verifica se o ano é divisível por 100
            if (ano % 100 == 0) {
                // verifica se o ano é divisível por 400
                Aula4b.msg(ano % 400 == 0 ? bissexto : noBissexto);
            } else {
                // e ano bissexto
                Aula4b.msg(bissexto);   
            }

        } else {
            // NAO e ano bissexto
            Aula4b.msg(noBissexto);   
        }

        // sai o sistema
        System.exit(0);
        
    }
       
    /**
     * Solicita ao usuário a entrada de dados
     * @param msg String Mensagem que será exibida para o usuário
     * @return int O valor convertido em inteiro
     */
    private static int entradaData(String msg)
    {
        msg = JOptionPane.showInputDialog(null, msg);
        return Integer.parseInt(msg);
    }
    
    /**
     * Exibe uma mensagem ao usuário
     * @param msg Mensagem a ser exibida
     */
    private static void msg(String msg)
    {
        JOptionPane.showMessageDialog(null, msg);
    }

}
