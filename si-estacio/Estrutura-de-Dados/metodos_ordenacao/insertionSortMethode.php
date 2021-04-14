<?php

/**
 * @name insertionSortMethod
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * Função de ordenação
 * @param array $vetor
 * @return array
 */
function insertionSortMethode(array $vetor)
{
    for ($i = 1; $i < count($vetor); $i++) {
        $copied = $vetor[$i];
        $j = $i;
        while (($j > 0) && ($copied < $vetor[$j - 1])) {
            $vetor[$j] = $vetor[$j - 1];
            $j--;
        }
        $vetor[$j] = $copied;
    }
    
    return $vetor;
}
