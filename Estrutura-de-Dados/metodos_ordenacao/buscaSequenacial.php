<?php

/**
 * @name buscaSequencial
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * Função de busca sequencial
 * @param mixed $find Elemendo procurado no vetor
 * @param array $vetor Vetor a ser percorrido
 * @return mixed
 */
function buscaSequencial($find, array $vetor)
{
     
    $vetorLength = count($vetor);
    for ($i = 0; $i < $vetorLength; $i++) {
        if ($vetor[$i] == $find) {
            return $i;
        }
    }

    // elemento não encontrado
    return -1;
}