
package listadeexercicio02;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class Start
{
    
    public static void main(String[] args)
    {
        Start.selectApp(Util.recebeValor("Indique o número do exercício a ser executado"));
        // finaliza o processo
        System.exit(0);

    }
    
    private static void selectApp(int indexApp)
    {
        switch (indexApp) {
            case 1:
                Exer01.start();
                break;
            default:
                Util.msg("O exercício não foi encontrado!");
                break;
        }
    }
}
