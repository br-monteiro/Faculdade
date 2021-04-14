/**
 * Exercício de programação 2
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * A série de Fibonacci é formada pela seqüência:
 * 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc
 * Escreva um programa em JAVA que gere a série
 * de Fibonacci até o décimo termo.
 */

package listadeexercicio02;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class Exer5 implements Exercicio
{
    /**
     * Costrutor da class
     */
    public Exer5()
    {
        this.start();
    }

    /**
     * Inicia o programa
     */
    @Override
    public final void start()
    {
        String result = "";
	// Constroi a sequencia dos 10 primeiros termos
        for (int i = 0; i <= 10; i++) {
            result += "(" + i + "):" + Exer5.fibonacci(i) + "\n";
        }
        // imprime a sequencia Fibonacci
        Util.msg(result);
    }

    /**
     * Calcula o a sequência Fibonacci
     * @param value
     * @return int
     */
    private static int fibonacci(int value)
    {
        return (value < 2) ? value : fibonacci(value - 1) + fibonacci(value - 2);
    }

}
