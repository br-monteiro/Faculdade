/**
 * @name bucketSortMethode
 * @version 0.1
 * @author Bruno Monteiro <bruno.monteirodg@gmail.com>
 */

#include <stdio.h>
 
#define tam_bucket 100
#define num_bucket 10
#define max 10

typedef struct {
    int topo;
    int balde[tam_bucket];
}bucket;

void bucket_sort(int v[],int tam);
void bubble(int v[],int tam);                                   

//int main(){}                                                  

void bucket_sort(int v[],int tam){                                     
    bucket b[num_bucket];                                      
    int i,j,k;                                                 
    /* 1 */
    //inicializa todos os "topo"
    for (i = 0; i < num_bucket; i++) {
        b[i].topo = 0;
    }

    /* 2 */ 
    //verifica em que balde o elemento deve ficar
    for (i = 0; i< tam; i++){                          
        j = (num_bucket)-1;
        while (1) {
            if (j < 0)
                break;
            if (v[i]> = j*10) {
                b[j].balde[b[j].topo] = v[i];
                (b[j].topo)++;
                break;
            }
            j--;
        }
    }

    /* 3 */ 
    //ordena os baldes
    for (i = 0;i < num_bucket; i++) {
        if (b[i].topo) {
            bubble(b[i].balde, b[i].topo);
        }
    }

    i=0;
    /* 4 */ 
    //põe os elementos dos baldes de volta no vetor
    for (j = 0; j < num_bucket; j++) {
        for (k = 0; k < b[j].topo; k++) {
            v[i]= b[j].balde[k];
            i++;
        }
    }
}

void bubble(int v[], int tam) {
    int i,j,temp,flag;
    if (tam) {
        for (j = 0; j < tam-1; j++) {
            flag = 0;
            for (i = 0; i < tam-1; i++) {
                if(v[i+1] < v[i]) {
                    temp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = temp;
                    flag = 1;
                }
            }
            if (!flag) {
                break;
            }
        }
    }
}