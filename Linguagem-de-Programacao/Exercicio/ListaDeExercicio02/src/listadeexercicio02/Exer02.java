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
public class Exer02
{

    public static void start()
    {
        // variável que recebe os valores indicados
        int value[], j = 1;
        value = new int[3];
        String m = "";

        // inicia o loop solicitando os dados ao usuário
        for (int i = 0; i < value.length; i++) {
            // atribui os valores ao array
            value[i] = Util.recebeValor("Indique um valor inteiro | (" + (i + 1) + "/" + value.length + ")");
            // verifica se o valor idicado é menor que 1. Se for,
            // atribui a j o valor encontrado no indice atual
            if (value[i] < j) {
                j = value[i];
            }
        }

        // organiza os valores para impressão
        for (int i : value) {
            // concatena os valores indicados
            m += " " + i +",";
        }

        // imprime a mensagem indicando o menor valor
        Util.msg("O menor valor entre" + m + " é " + j);

    }

    
}
