/**
 * @name cocktailSortMethode
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

void cocktailSort(int list[10]) {
    int length, bottom, top, swapped, i, aux;
    length = 10;
    bottom = 0;
    top = length - 1;
    swapped = 0; 
    
    //Se não houver troca de posições ou o ponteiro que
    //sobe ultrapassar o que desce, o vetor esta ordenado
    while (swapped == 0 && bottom < top) {                                   
        swapped = 1; 
        //Este for é a “ida” para a direita
        for (i = bottom; i < top; i = i + 1) {
            //indo pra direita:testa se o próximo é maior
            //indo pra direita:se o proximo é maior que o atual,
            //troca as posições
            if (list[i] > list[i + 1]) {   
                aux=list[i];
                list[i]=list[i+1];
                list[i+1]=aux;
                swapped = 0;
            }
        }
        
        // diminui o  `top` porque o elemento com o maior valor 
        // já está na direita (atual posição top)
        top = top - 1; 
        //Direção: esquerda
        for (i = top; i > bottom; i = i - 1) {
            if (list[i] < list[i - 1]) {
                aux=list[i];
                list[i]=list[i-1];
                list[i-1]=aux;
                swapped = 0;
            }
        }
        //aumenta o `bottom` porque o menor valor já está
        //na posição inicial (bottom) 
        bottom = bottom + 1;  
    }
 }