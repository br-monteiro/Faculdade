<?php

/**
 * @name selectionSortMethode
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * Método usado para ordenação
 * @param array $vetor
 * @return array
 */
function selectionSortMethode(array $vetor)
{
    //percorre o array para ordenar
    for ($i = 0; $i < count($vetor); $i++) {
        //define o primeiro índice como sendo o menor
        $menor = $i;
        //procura outro índice com valor menor anteriormente marcado como menor
        for ($j = $i + 1; $j < count($vetor); $j++) {
            //compara se existe outro valor menor que o anteriormente marcado
            if ($vetor[$j] < $vetor[$menor]) {
                //determina o índice do novo valor menor encontrado
                $menor = $j;
            }
        }
        //compara se o índice definido no início foi modificado
        if ($menor != $i) {
            //realiza troca de valores conforme o índices
            $aux = $vetor[$i];
            $vetor[$i] = $vetor[$menor];
            $vetor[$menor] = $aux;
        }
    }
    // retorna o vetor ordenado
    return $vetor;
}
