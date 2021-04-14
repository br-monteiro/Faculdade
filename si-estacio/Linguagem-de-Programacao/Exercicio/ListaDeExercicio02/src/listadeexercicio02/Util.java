package listadeexercicio02;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

public class Util {
    
    /**
     * Armazena os valores inteiros recebidos
     * @var valueInt
     */
    private static int valueInt;

    /**
     * Armazena os valores reais recebidos
     * @var valueFloat
     */
    private static float valueFloat;

    /**
     * Seta valor ao atributo setValueInt
     * @param value int Valor a ser atribuido
     */
    private static void setValueInt(int value)
    {
        Util.valueInt = value;
    }

    /**
     * Retorna o valor do atributo valueInt
     * @return int
     */
    public static int getValueInt()
    {
        return Util.valueInt;
    }

    /**
     * Seta valor ao atributo setValueFloat
     * @param value float Valor a ser atribuido
     */
    private static void setValueFloat(float value)
    {
        Util.valueFloat = value;
    }

    /**
     * Retorna o valor do atributo valueFloat
     * @return 
     */
    public static float getValueFloat()
    {
        return Util.valueFloat;
    }
    /**
     * Recebe o valor enviado pelo usuário
     * @param msg String Mensagem a ser exibida ao usuário para
     * identificação do campo de entrada de dados
     * @param typeOption boolean |true int - false float| Tipo de valor a ser recebido
     */
    public static void requestValue(String msg, boolean typeOption)
    {
        // recebe o valor idicado pelo usuário
        // exibe a mensagem enviada por msg
        msg = JOptionPane.showInputDialog(msg);
        // solicita o valor ao usuário
        try {
            // verifica se a opção de conversão é para int ou float
            if (typeOption == true) {
                // seta o valor informado pelo usuário convertido em inteiro
                Util.setValueInt(Integer.parseInt(msg));
            }
            // seta o valor informado pelo usuário convertido em número real
            Util.setValueFloat(Float.parseFloat(msg));
        // lança uma Exception informando que o número não pode ser convertido
        } catch (NumberFormatException e) {
            Util.msg("Não foi possivel efetuar a operação \n Erro: "
                + e.getMessage());
            // força a saída do sistema
            System.exit(0);
        }
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
