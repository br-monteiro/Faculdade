/**
 * Exercício de programação 2
 * Professor Antonio Lobato
 * Comando da questão:
 * 
 * Uma faculdade classifica as notas dos alunos conforme a seguinte tabela:
 * 
 *      |   Nota     |  Classificação
 *      |9,0 a 10    |superior
 *      |7,0 a 8,9   |médio superior
 *      |5, 0 a 6,9  |médio
 *      |3,0 a 4,9   |médio inferior
 *      |0,1 a 2,9   |inferior
 *      |0           |sem rendimento
 * 
 * Faça um programa em JAVA que lê a nota de um aluno e informa a sua
 * classificação.
 */

package listadeexercicio02;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class Exer4 implements Exercicio
{
    /**
     * @var atributo que armazena a nota do aluno
     */
    private static float nota;

    /**
     * Atribui valor ao atributo nota
     * @param value float Valor a ser atribuido a nota
     */
    private static void setNota(float value)
    {
        Exer4.nota = value;
    }

    /**
     * Retorna o valor do atributo nota
     * @return float
     */
    private static float getNota()
    {
        return Exer4.nota;
    }

    /**
     * Construtor da classe
     */
    public Exer4()
    {
        this.start();
    }

    /**
     * Inicia o programa
     */
    @Override
    public final void start()
    {
        // solicita a inserção da nota
        Util.requestValue("Informe a nota do aluno", false);
        // recebe o valor indicado e atribui ao atributo nota
        Exer4.setNota(Util.getValueFloat());
        // imprime a classificação da nota do aluno
        Util.msg("A classificação do Aluno foi: " + Exer4.rateNota(Exer4.getNota()));
    }

    /**
     * Classifica a nota do aluno
     * @param value float Nota a ser classificada
     * @return String texto da classificação
     */
    private static String rateNota(float value)
    {
        // verifica se a nota encontra-se entre 0 e 10
        if (value >= 0 && value <= 10) {
            // verifica se a nota é igual a 0
            if (value == 0) {
                return "Sem rendimento";
            // verifica se a nota está entre 0.1 e 2.9
            } else if(value >= 0.1 && value <= 2.9 ) {
                return "Inferior";
            // verifica se a nota está entre 3.0 e 4.9
            } else if(value >= 3.0 && value <= 4.9 ) {
                return "Médio Inferior";
            // verifica se a nota está entre 5.0 e 6.9
            } else if(value >= 5.0 && value <= 6.9 ) {
                return "Médio";
            // verifica se a nota está entre 7.0 e 8.9
            } else if(value >= 7.0 && value <= 8.9 ) {
                return "Médio Superior";
            // para o restante retornará superior
            } else {
                return "Superior";
            }
        }
        return "Não foi possível realizar a classificação.\n"
            + "A nota deve estar entre 0 e 10";
    }
    
}
