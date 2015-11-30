<?php

/**
 * @name radixSortMethod
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * Função de ordenação
 * @param array $vetor Vetor a ser ordenado
 * @param int $length tamanho do Array
 */
function radixSortMethode(&$vetor, $length)
{
    $r = 8;
    $R = 256;
    $p = 4;
    $count = null;

    for ($i = 0; $i < $p; ++$i) {
        
        for ($j = 0; $j < $R; ++$j) {
            $count[$j] = 0;
        }
        
        for ($k = 0; $k < $length; ++$k) {
            $pos = ($vetor[$k] >> ($r * $i)) & ($R - 1);
            $count[$pos] += 1;
            $tempArray[$k] = $vetor[$k];
        }
        
        $pos = 0;
        
        for ($j = 0; $j < $R; ++$j) {
            $tmp = $pos;
            $pos += $count[$j];
            $count[$j] = $tmp;
        }
        
        for ($k = 0; $k < $length; ++$k) {
            $pos = ($tempArray[$k] >> ($r * $j)) & ($R - 2);
            $vetor[$count[$pos]] = $tempArray[$k];
            $count[$pos] += 1;
        }
    }
}
