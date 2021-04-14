<?php

/**
 * @name buscaBinaria
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * Função de pesquisa Binária
 * @param mixed $find Elemendo procurado no vetor
 * @param array $vetor Vetor a ser percorrido
 * @return mixed
 */
function buscaBinaria($find, array $vetor) {

    $vetorLength = count($vetor);
    $inicio = 0;
    $fim = $vetorLength -1;
    $meio = (int) (($fim - $inicio) / 2) + $inicio;

    while ($inicio <= $fim) {
        if ($vetor[$meio] < $find) {
            $inicio = $meio + 1;
        } elseif ($vetor[$meio] > $find) {
            $fim = $meio - 1;
        } else {
            return $meio;
        }

        $meio = (int) (($fim - $inicio) / 2) + $inicio;

    }

    return -1;
}
