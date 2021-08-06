/*Si realizzi in C una funzione che prese in ingresso due matrici quadrate di interi M1[10][10] e M2[3][3],
restituisce al chiamante quante volte M2 è contenuta in M1.
NOTA: valgono/si contano anche le sovrapposizioni*/

#include <stdio.h>
#define N 4
#define M 2

int contenuta(int M1[N][N], int M2[M][M]);
int main(){
    int M1[N][N], M2[M][M], i, j, a;

    printf("Inserire i valori della matrice 1: \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d", &M1[i][j]);
        }
    }

    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<N;j++){
            printf("  %d  ", M1[i][j]);
        }
    }

    printf("\nInserire i valori della matrice 2: \n");
    for(i=0;i<M;i++){
        for(j=0;j<M;j++){
            scanf("%d", &M2[i][j]);
        }
    }

    for(i=0;i<M;i++){
        printf("\n");
        for(j=0;j<M;j++){
            printf("  %d  ", M2[i][j]);
        }
    }

    a=contenuta(M1, M2);

    printf("\nM2 e' contenuta in M1 %d volte", a);

    return 0;
}

int contenuta(int M1[N][N], int M2[M][M]){
    int i, j, count=0, k, y, a;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(M1[i][j]==M2[0][0]){
                for(y=0;y<M;y++){
                    for(k=0;k<M;k++){
                        if(M1[i+y][j+k]==M2[y][k])
                            count++;
                    }
                }
            }
        }
    }
    a=count/(M*M);
    return a;
}

//int appartiene(int mat1[M][M], int mat2[N][N], int colonne1, int righe1, int righe2, int colonne2){
//
//int i, j,k,l, count=0, trovato=1;
//
//for(i=0; i<= righe1-righe2; i++){
//    for(k=0; k<= colonne1-colonne2; k++){
//            trovato=1;
//
//    for(j=0; j<righe2; j++){
//            for(l=0; l<colonne2; l++){
//          if(mat2[j][l]!=mat1[i+j][k+l]){
//            trovato=0;
//        }
//    }
//    }
//
//
//if(trovato){
//    count++;
//}
//
//}
//}
//return count;
//}
