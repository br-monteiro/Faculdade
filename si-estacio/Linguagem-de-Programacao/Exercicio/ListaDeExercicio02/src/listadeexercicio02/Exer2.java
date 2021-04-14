/**
 * Exercício de programação 2
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * Fazer um programa em JAVA que leia três valores inteiros,
 * determine e imprima o menor deles.
 */

package listadeexercicio02;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class Exer2 implements Exercicio
{


    /**
     * Construtor da class
     */
    public Exer2()
    {
        this.start();
    }

    @Override
    public final void start()
    {
        // variável que recebe os valores indicados
        float value[], j;
        value = new float[3];
        String m = "";

        // realiza a primeira consulta
        Util.requestValue("Indique um valor inteiro | (1/" + value.length + ")", false);
        // armazena no array o primeiro valor indicado
        value[0] = Util.getValueFloat();
        // atribui o valor indicado a j
        j = value[0];
        // inicia o loop solicitando os dados ao usuário
        for (int i = 1; i < value.length; i++) {
            // atribui os valores ao array
            Util.requestValue("Indique um valor inteiro | (" + (i + 1) + "/" + value.length + ")", false);
            value[i] = Util.getValueFloat();
            // verifica se o valor idicado é menor que 1. Se for,
            // atribui a j o valor encontrado no indice atual
            if (value[i] < j) {
                // atualiza o valor de j para o valor corrente
                j = value[i];
            }
        }

        // organiza os valores para impressão
        for (float i : value) {
            // concatena os valores indicados
            m += " " + i +",";
        }

        // imprime a mensagem indicando o menor valor
        Util.msg("O menor valor entre" + m + " é " + j);

    }

    
}
