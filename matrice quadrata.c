/*Scrivere un programma che definisca una matrice quadrata di lato massimo 19, chieda all’utente di indicare la
dimensione effettiva del lato (≤19) e la riempia di valori come indicato nell’esempio (a spirale), poi la visualizzi.*/

#include <stdio.h>
#define DIM 100
int main(){
    int n, i, j, A[DIM][DIM];

    do{
        printf("Qual e' la dimensione del lato della matrice? ");
        scanf("%d", &n);

    }while(n>19);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           scanf("%d", &A[i][j]);
        }
    }

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
           printf("%d  ", A[i][j]);
        }
    }

    return 0;
}
