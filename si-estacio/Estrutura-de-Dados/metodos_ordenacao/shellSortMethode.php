<?php

/**
 * @name shellSortMethod
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

/**
 * 
 * @param array $vetor
 * @return array
 */
function shellSort(array $vetor){
   $pet = 1;
   
   do {
      $pet = 3 * $pet + 1;
   } while ($pet < count($vetor));
   
   do {
       
      $pet /= 3;
      $pet = intval($pet);
      for ($i = $pet; $i < count($vetor); $i++) {
         $temp = $vetor[$i];
         $j = $i - $pet;
         
         while($j >=0 && $temp < $vetor[$j]) {
            $vetor[$j + $pet] = $vetor[$j];
            $j -= $pet;
         }
         
         $vetor[$j + $pet] = $temp;
      }
   } while ($pet > 1);
   
   return $vetor;
}
