/**
 * Exercício de programação 2
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * Fazer um programa em JAVA que calcule o fatorial de N(N!)
 * Ex.    5! => 5x4x3x2x1 = 120
 *        0! => 1
 */

package listadeexercicio02;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class Exer3 implements Exercicio
{
    // atributo que armazenará o valor de fatoriam
    private static float fatResult;

    /**
     * Seta valor ao atributo fatResult
     * @param value float Valor a ser atribuido
     */
    public static void setFatResult(float value)
    {
        Exer3.fatResult = value;
    }

    /**
     * Retorna o valor de fatResult
     * @return float
     */
    private static float getFatResult()
    {
        return Exer3.fatResult;
    }

    /**
     * Construtor da class
     */
    public Exer3()
    {
        this.start();
    }

    @Override
    public final void start()
    {
        Util.requestValue("Indique um número para o cálculo fatorial", false);
        Exer3.fatorial(Util.getValueFloat());
        Util.msg("O fatorial de " + Util.getValueFloat() + " é " + Exer3.getFatResult());
    }

    /**
     * Calcula o fatorial de n
     * @param value float Valor a ser calculado
     */
    private static void fatorial(float value)
    {
        // se o valor diferente de 0, então inicia o cálculo
        if (value != 0.0) {
            // seta o valor de value ao resultado temporariamente
            Exer3.setFatResult(value);
            // inicia o loop de calculo
            while (value > 1) {
                // realiza a seguinte operação f = f *(n-1); n--;
                Exer3.setFatResult(Exer3.getFatResult() * (value - 1));
                // decrementa o valor de value
                value--;
            }
        } else {
            // seta o valor do resultado para 1
            Exer3.setFatResult(1);
        }
    }
}
