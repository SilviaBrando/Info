/*Data una matrice M1 di NxN interi, si scriva una funzione in C che, dopo aver fatto
inserire gli NxN numeri, ne calcola la trasposta, salvandola sempre su M1*/

#include <stdio.h>
#define N 100

void trasposta(int M1[N][N], int n);
int main(){
    int M1[N][N], n;

    printf("Quante righe e colonne vuoi?\n");
    scanf("%d", &n);

    trasposta(M1, n);
    return 0;
}

void trasposta(int M1[N][N], int n){
    int i, j, tmp=0;

    printf("Inserire i valori: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &M1[i][j]);
        }
    }

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d  ", M1[i][j]);
        }
    }


    for(i=0;i<n/2-1;i++){
        for(j=0;j<n/2-1;j++){
            M1[i][j]=M1[j][i];
        }
    }

    printf("\nLa matrice trasposta e': \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d  ", M1[j][i]);
        }
    }
}
