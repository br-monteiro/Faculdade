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

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

public class Exer1 implements Exercicio
{
    
    // atributos que receberam os valores informador pelo usuário
    private static int a, b;
    /**
     * @var msg String Recebe as mensagens de diálogo com o usuário
     */
    private static String msg;

    /**
     * Construtor da class
     */
    public Exer1()
    {
        this.start();
    }

    @Override
    public final void start()
    {
        String msg = "";
        // coleta os valores indicados pelo usuário
        Util.requestValue("Indique um valor para A:", true);
        Exer1.setA(Util.getValueInt());
        Util.requestValue("Indique um valor para B:", true);
        Exer1.setB(Util.getValueInt());
        
        // inicia o calculo
        for (int i = 1; i <= 4; i++) {
            // calcula
            Exer1.calc(i);
            msg += Exer1.getMsg() + "\n";
        }
        
        // exibe as informações dos calculos para o usuário
        Util.msg(msg);
    }
    
    /**
     * Seta valor ao atributo msg
     * @param msg 
     */
    private static void setMsg(String msg)
    {
        Exer1.msg = msg;
    }
    
    /**
     * Retorna o valor do atributo msg
     * @return String
     */
    private static String getMsg()
    {
        return Exer1.msg;
    }
    
    /**
     * Seta valor ao atributo a
     * @param a 
     */
    private static void setA(int a)
    {
        Exer1.a = a;
    }
    
    /**
     * Retorna o valor do atributo a
     * @return int
     */
    private static int getA()
    {
        return Exer1.a;
    }
    
    /**
     * Seta valor ao atributo b
     * @param b 
     */
    private static void setB(int b)
    {
        Exer1.b = b;
    }

    /**
     * Retorna o valor do atributo b
     * @return int
     */
    private static int getB()
    {
        return Exer1.b;
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
                Exer1.setMsg("A adição entre " + Exer1.getA() + " e "
                    + Exer1.getB() + " é " + (Exer1.getA() + Exer1.getB()));
                break;
            // subtração
            case 2:
                Exer1.setMsg("A subtração entre " + Exer1.getA() + " e "
                    + Exer1.getB() + " é " + (Exer1.getA() - Exer1.getB()));
                break;
            // divisão
            case 3:
                Exer1.dividedBy();
                break;
            // multiplicação
            case 4:
                Exer1.setMsg("A multiplicação entre " + Exer1.getA() + " e "
                    + Exer1.getB() + " é " + (Exer1.getA() * Exer1.getB()));
                break;
            // operação inexistente
            default:
                Exer1.setMsg("Não foi possivel efetuar a operação\n Err: " + option);
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
            
            Exer1.setMsg("A divisão entre " + Exer1.getA() + " e " + Exer1.getB()
                + " é " + (Exer1.getA() / Exer1.getB()));
            
        } catch(ArithmeticException e) {
            
            Exer1.setMsg("Não foi possivel efetuar a operação \n Erro: "
                + e.getMessage());
        }
    }    
}
