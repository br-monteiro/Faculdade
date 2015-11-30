<?php

/**
 * @name heapSortMethod
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * 
 * @param array $vetor
 * @param int $i
 * @param int $f
 */
function buildHeap(&$vetor, $i, $f)
{
    $aux = $vetor[$i];
    $j = $i * 2 + 1;

    while ($j <= $f) {
        if ($j < $f) {
            if($vetor[$j] < $vetor[$j + 1]) {
                $j = $j + 1;
            }
        }
        if ($aux < $vetor[$j]) {
            $vetor[$i] = $vetor[$j];
            $i = $j;
            $j = 2 * $i + 1;
        } else {
            $j = $f + 1;
        }
    }
    $vetor[$i] = $aux;
}

/**
 * Função de ordenação
 * @param array $vetor
 */
function heapSort(&$vetor)
{
    for ($i=(int)((count($vetor) - 1) / 2); $i >= 0; $i--) {
        $count = count($vetor) - 1;
        buildHeap($vetor, $i, $count);
    }
    
    for ($i = (count($vetor) - 1); $i >= 1; $i--) {
        $aux = $vetor[0];
        $vetor [0] = $vetor [$i];
        $vetor [$i] = $aux;
        buildHeap($vetor, 0, $i - 1);
    }
}
