
package listadeexercicio02;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class Start
{
    
    public static void main(String[] args)
    {
        Start.selectApp(Util.recebeValor("Indique o número do exercício a ser executado"
            + "Exercícios disponívels:"
            + "1 - Caulculos entre A e B"
            + "2 - Menor valor entre três indicações"));
        // finaliza o processo
        System.exit(0);

    }
    
    /**
     * Seleciona qual programa deve ser executado
     * @param indexApp int Indice de execução do programa
     */
    private static void selectApp(int indexApp)
    {
        switch (indexApp) {
            // lista de execícios
            case 1:
                Exer01.start();
                break;
            case 2:
                Exer02.start();
                break;
            default:
                Util.msg("O exercício não foi encontrado!");
                break;
        }
    }
}
