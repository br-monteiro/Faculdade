
package listadeexercicio02;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */
public class Start
{
    
    public static void main(String[] args) throws IOException
    {
        Util.requestValue(Start.mountMenu(), true);
        // starta o programa
        Start.selectApp(Util.getValueInt());
        // finaliza o processo 
        System.exit(0);

    }
    
    /**
     * Seleciona qual programa deve ser executado
     * @param indexApp int Indice de execução do programa
     */
    private static void selectApp(int indexApp)
    {
        // recebe a referência para o exercício
        Exercicio app;

        // percorre a lista
        switch (indexApp) {
            // lista de execícios
            case 1:
                app = new Exer1();
                break;
            case 2:
                app = new Exer2();
                break;
            case 3:
                app = new Exer3();
                break;
            default:
                Util.msg("O exercício não foi encontrado!");
                System.exit(0);
                break;
        }
    }

    /**
     * Monta o Menu de apresentação de acordo com o arquivo config.txt
     * @return String Texto do menu completo
     * @throws FileNotFoundException
     * @throws IOException 
     */
    private static String mountMenu() throws FileNotFoundException, IOException
    {
        FileInputStream stream = new FileInputStream("configMenu.txt");
        InputStreamReader reader = new InputStreamReader(stream);
        BufferedReader br = new BufferedReader(reader);
        String linha = br.readLine();
        String menu = "";
        while(linha != null) {
           String descricao = linha.substring(0, linha.indexOf(';'));
           menu += descricao + "\n";
           linha = br.readLine();
        }
        return menu;
    }
}
