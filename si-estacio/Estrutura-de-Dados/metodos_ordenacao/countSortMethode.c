/**
 * @name countSortMethode
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

# define MAX 100001

struct data
{
    int num;
    char key[100];
} DataBase[MAX], VectorSort[MAX];

int CounterNum[MAX];
int size = 0;

int main (void)
{
    int i = 0;

    while (scanf("%d%s",&DataBase[size].num,DataBase[size].key) >= 1)
        size++;
    
    int aux[2] = {0,0}; 
    for (i = 0; i <= size;i++)
        aux[DataBase[i].num]++;

    aux[1] += aux[0];
    
    for (i = size - 1;i >= 0;i--)
        VectorSort[--aux[DataBase[i].num]] = DataBase[i];

    for (i = 0; i < size;i++)
        printf("Número: %d  ---  Indice: %s\n",VectorSort[i].num,VectorSort[i].key);

    return 0;
}