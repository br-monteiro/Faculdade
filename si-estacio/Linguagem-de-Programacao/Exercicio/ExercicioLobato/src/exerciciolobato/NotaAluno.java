/**
 * Exercício de programação 1
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * Fazer um programa em JAVA que leia quatro notas de um aluno,
 * calcule a média aritmética e imprima uma mensagem dizendo a
 * situação final do aluno, de acordo com os critérios abaixo:
 * MÉDIA < 5    RETIDO
 * MÉDIA >= 5 e MÉDIA < 7   NEF
 * MÉDIA >= 7   APROVADO
 */

package exerciciolobato;

import javax.swing.JOptionPane;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class NotaAluno {

    /**
     * @param args Comandos enviados via prompt de comando
     */
    public static void main(String[] args)
    {
        // declaração de variáveis
        float[] nota;
        nota = new float[4];
        float media;
        
        // solicita as notas do aluno
        nota[0] = informaNota("Por favor, indique a primeira nota");
        nota[1] = informaNota("Por favor, indique a segunda nota");
        nota[2] = informaNota("Por favor, indique a terceira nota");
        nota[3] = informaNota("Por favor, indique a quarta nota");
        
        // recebe o valor da média
        media = calculaMedia(nota);
        // exibe a mensagem na tela com a media e o status do aluno
        msg("A sua média foi: " + media + "\n"
            + "Você está " + statusAluno(media));
        // finaliza a execução em segundo plano
        System.exit(0);
        
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
    
    /**
     * Exibe uma caixa de diálogo para a inserção de dados
     * 
     * @param msg Mensagem de orientação ao usuário
     * @return int Valor informado
     */
    public static float informaNota(String msg)
    {
        // exibe o imput para entrada da nota
        msg = JOptionPane.showInputDialog(msg);
        // converte em float
        return Float.parseFloat(msg);
    }

    /**
     * Calcula a média de notas informada
     * 
     * @param nota Array de notas
     * @return Retorna a média das notas informadas no array
     */
    public static float calculaMedia(float[] nota)
    {
        // declaração de variáveis
        /// recebe a soma de todas notas
        float total = 0;
        /// controlador
        int i;

        // percorre o array informado
        for (i = 0; i < nota.length; i++) {
            // acumula os valores das notas
            total = total + nota[i];
        }
        
        // retorna a média aritmética
        return (total / i);
    }
    
    public static String statusAluno(float media)
    {
        String status;
        // verifica se o aluno está RETIDO
        if (media < 5) {
            status = "RETIDO";
        // verifica se o aluno está NFE
        } else if(media >= 5 && media < 7) {
            status = "NEF";
        // verifica se o aluno foi APROVADO
        } else {
            status = "APROVADO";
        }
        
        // retorna o status do aluno
        return status;
    }
    
}
