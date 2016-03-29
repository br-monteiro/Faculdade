/**
 * Exercício de programação 2
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * Escreva um programa que obtêm dois valores inteiros (variáveis A e
 * B) e apresente as operações de adição, subtração, multiplicação e
 * divisão de A por B.
 */

package listadeexercicio02;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

public class Exer01 {
    
    // atributos que receberam os valores informador pelo usuário
    private static int a, b;
    /**
     * @var msg String Recebe as mensagens de diálogo com o usuário
     */
    private static String msg;

    public static void main(String[] args)
    {
        String msg = "";
        // coleta os valores indicados pelo usuário
        Exer01.setA(Exer01.recebeValor("Indique um valor para A:"));
        Exer01.setB(Exer01.recebeValor("Indique um valor para B:"));
        
        // inicia o calculo
        for (int i = 1; i <= 4; i++) {
            // calcula
            Exer01.calc(i);
            msg += Exer01.getMsg() + "\n";
        }
        
        // exibe as informações dos calculos para o usuário
        Exer01.msg(msg);
        System.exit(0);

    }
    
    /**
     * Seta valor ao atributo msg
     * @param msg 
     */
    private static void setMsg(String msg)
    {
        Exer01.msg = msg;
    }
    
    /**
     * Retorna o valor do atributo msg
     * @return String
     */
    private static String getMsg()
    {
        return Exer01.msg;
    }
    
    /**
     * Seta valor ao atributo a
     * @param a 
     */
    private static void setA(int a)
    {
        Exer01.a = a;
    }
    
    /**
     * Retorna o valor do atributo a
     * @return int
     */
    private static int getA()
    {
        return Exer01.a;
    }
    
    /**
     * Seta valor ao atributo b
     * @param b 
     */
    private static void setB(int b)
    {
        Exer01.b = b;
    }

    /**
     * Retorna o valor do atributo b
     * @return int
     */
    private static int getB()
    {
        return Exer01.b;
    }

    /**
     * Calcula os valores de acordo com a opção escolhida
     * @param option int Operação a ser escolhida (1 = +; 2 = -; 3 = /; 4 = *)
     */
    private static void calc(int option)
    {
        // verifica qual a opção de operação foi informada
        // operações permitidas:
        // adição: 1; subtração: 2; divisão: 3; multiplicação: 4;
        switch (option) {
            // adição
            case 1:
                Exer01.setMsg("A adição entre " + Exer01.getA() + " e "
                    + Exer01.getB() + " é " + (Exer01.getA() + Exer01.getB()));
                break;
            // subtração
            case 2:
                Exer01.setMsg("A subtração entre " + Exer01.getA() + " e "
                    + Exer01.getB() + " é " + (Exer01.getA() - Exer01.getB()));
                break;
            // divisão
            case 3:
                Exer01.dividedBy();
                break;
            // multiplicação
            case 4:
                Exer01.setMsg("A multiplicação entre " + Exer01.getA() + " e "
                    + Exer01.getB() + " é " + (Exer01.getA() * Exer01.getB()));
                break;
            // operação inexistente
            default:
                Exer01.setMsg("Não foi possivel efetuar a operação\n Err: " + option);
                break;
        }
    }

    /**
     * Método responsável pela divisão dos valores
     */
    private static void dividedBy()
    {
        // tenta dividir o valor a pelo valor b
        // caso a divisão não ocorra, lança uma exception
        try {
            
            Exer01.setMsg("A divisão entre " + Exer01.getA() + " e " + Exer01.getB()
                + " é " + (Exer01.getA() / Exer01.getB()));
            
        } catch(ArithmeticException e) {
            
            Exer01.setMsg("Não foi possivel efetuar a operação \n Erro: "
                + e.getMessage());
        }
    }

    /**
     * Recebe o valor enviado pelo usuário
     * @param msg Mensagem a ser exibida ao usuário para
     * identificação do campo de entrada de dados
     * @return int
     */
    private static int recebeValor(String msg)
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
    public static void msg(String msg)
    {
        JOptionPane.showMessageDialog(null, msg);
    }
    
}
