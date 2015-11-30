<?php

/**
 * @name bubbleSortMethode
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * Função de ordenação
 * @param array $vetor
 * @return array
 */
function bublleSortMethode (array $vetor)
{
    // tamanho do vetor
    $arrLength = count($vetor);

    // variável auxiliar; Inicializada como nula
    $aux = null;

    // inicia o primeiro laço de repetição
    for ($i = ($arrLength - 1); $i >= 1; $i--) {
        // inicia o segundo laço de repetição
        for ($j = 0; $j < $i; $j++) {
            // organiza os elementos do vetor
            if ($vetor[$j] > $vetor[$j + 1]) {
                $aux = $vetor[$j];
                $vetor[$j] = $vetor[$j + 1];
                $vetor[$j + 1] = $aux;
            }
        }  
    }
    return $vetor;
}
