
package helloword;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro
 */
public class Aula4c {

    public static void main(String[] args) {
        //Declaração de variáveis
        int data;
        /// solicita o data
        data = Aula4c.entradaData("Por favor, indique o mes");  

        if (Aula4c.validaData(data) == 1) {
            Aula4c.msg("Mes de 30 dias");
        } else if (Aula4c.validaData(data) == 2) {
            Aula4c.msg("Mes de 31 dias");   
        } else if (Aula4c.validaData(data) == 0) {
            Aula4c.msg("Mes de fevereiro");   
        } else {
            Aula4c.msg("Mes invalido");   
        }

        // sai o sistema
        System.exit(0);
        
    }
    
    /**
     * Valida os meses
     * @param mes
     * @return int
     */
    private static int validaData(int mes)
    {
        int temp;
        switch (mes) {
            // 30 dias
            case 4:
            case 6:
            case 9:
            case 11:
                temp = 1;
                break;
            // 31 dias
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                temp = 2;
                break;
            // fevereiro
            case 2:
                temp = 0;
                break;
            // mes invalido
            default:
                temp = -1;  
        }
        return temp;
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
