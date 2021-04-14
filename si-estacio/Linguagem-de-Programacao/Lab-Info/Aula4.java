
package helloword;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro
 */
public class Aula4 {

    // atributo que recebe o nome do mês. Ex.: janeiro
    private static String strMes;
    
    public static void main(String[] args) {
        //Declaração de variáveis
        int dia, mes, ano;
        
        /// solicita o dia
        dia = Aula4.entradaData("Por favor, indique o dia");
        /// solicita o mês
        mes = Aula4.entradaData("Por favor, indique o mês");
        /// solicita o ano
        ano = Aula4.entradaData("Por favor, indique o ano");  

        if (mes <= 12 && mes >= 0 && dia <= 31 && dia >= 1) {
            Aula4.validaMes(mes);
            Aula4.msg("Você indicou o dia " +  dia + " de "
                + Aula4.strMes + " de " +  ano + "\n"
                + "A data é " + dia + "/" + mes + "/" + ano);
        } else {
            Aula4.validaMes(mes);
            Aula4.msg(Aula4.strMes);   
        }
        
        // sai o sistema
        System.exit(0);
        
    }
    
    /**
     * Verifica se o mês indicado é válido
     * @param mes int Mês de verificação
     */
    private static void validaMes(int mes)
    {
        switch (mes) {
            case 1:
               Aula4.strMes = "janeiro";
               break;
                
            case 2:
               Aula4.strMes = "fevereiro";
               break;
                
            case 3:
               Aula4.strMes = "março";
               break;
                
            case 4:
               Aula4.strMes = "abril";
               break;
                
            case 5:
               Aula4.strMes = "maio";
               break;
                
            case 6:
               Aula4.strMes = "junho";
               break;
                
            case 7:
               Aula4.strMes = "julho";
               break;
                
            case 8:
              Aula4.strMes = "agosto";
                break;
                
            case 9:
              Aula4.strMes = "setembro";
                break;
                
            case 10:
              Aula4.strMes = "outubro";
                break;
                
            case 11:
              Aula4.strMes = "novembro";
                break;
                
            case 12:
              Aula4.strMes = "dezembro";
                break;
                
            default:
               Aula4.strMes = "A data indicada não é válida!";
               break;
        }
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
