<?php

/**
 * @name quickSortMethode
 * @version 0.1
 * @author ceimbe-311
 */
function quicksort(&$vet, $ini, $fim)
{
    $i = $ini;
    $j = $fim;
    $dir = 1;

    while ($i < $j) {
        if ($vet[$i] > $vet[$j]) {
            $aux = $vet[$i];
            $vet[$i] = $vet[$j];
            $vet[$j] = $aux;
            $dir = - $dir;
        }

        if ($dir == 1) {
            $j--;
        } else {
            $i++;
        }
    }

    $k = $i;
    if ($ini < $fim) {
        quicksort($vet, $ini, $k-1);
    }

    if ($i < $fim) {
        quicksort($vet, $k+1, $fim);
    }

}

//quicksort($vet,0,count($vet));
