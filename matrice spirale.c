/*Scrivere un programma che definisca una matrice quadrata di lato massimo 19, chieda all’utente di indicare la
dimensione effettiva del lato (≤19) e la riempia di valori come indicato nell’esempio (a spirale), poi la visualizzi.*/

#include <stdio.h>
#define N 19
int main(){
    int A[N][N], n, i, j, giro, count;

    do{
        printf("Qual e' la dimensione del lato della matrice? ");
        scanf("%d", &n);
    }while(n>19);

    count=1;
    for(giro=0;giro<n/2;giro++){
        i=giro;
        for(j=giro;j<n-giro;j++){
            A[giro][j]=count;
            count++;
        }
        for(i=1+giro;i<n-giro;i++){
            A[i][n-1-giro]=count;
            count++;
        }
        count--;
        for(j=n-1-giro;j>giro-1;j--){
            A[n-1-giro][j]=count;
            count++;
        }
        count--;
        for(i=n-1-giro;i>giro;i--){
            A[i][giro]=count;
            count++;
        }

    }
    if(n%2!=0)
        A[n/2][n/2]=count;

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("  %d  ", A[i][j]);
        }
    }
    return 0;
}
