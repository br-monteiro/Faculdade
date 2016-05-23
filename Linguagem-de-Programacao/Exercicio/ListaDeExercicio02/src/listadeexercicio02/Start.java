
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
        try {
            // recebe o nome da classe a ser instaciada
            Class classe = Class.forName("listadeexercicio02.Exer" + indexApp);
            // instacia a classe e executa o construtor da mesma
            classe.newInstance();

        } catch(ClassNotFoundException | InstantiationException | IllegalAccessException e) {
            Util.msg("O exercício não foi encontrado!\n"
                    + "Erro: " + e.getMessage() + "\n"
                    + "Causa: " + e.getCause());
            System.exit(0);
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
        FileInputStream stream = new FileInputStream("configMenuList2.txt");
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
