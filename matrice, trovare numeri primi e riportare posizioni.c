/*Si scriva una funzione in C che, presa una matrice RxC interi, già popolata
con tutti 0, permetta l'inserimento degli RxC numeri interi positivi
(verificando che siano positivi).
Verifichi quale di questi numeri sono primi e ne riporti, salvandoli in
un array, le posizioni nella matrice.*/

#include<stdio.h>
#define R 3
#define C 2

typedef struct posizione{
    int rig;
    int col;
}posizione;

void cerca_primi(int mat[R][C], posizione pos[]);
int primo(int mat[R][C], int riga, int col);
int main(){
    int mat[R][C]={{0}};
    posizione pos[R*C]={0};
    int i;

    cerca_primi(mat, pos);
    i=0;
    do{
        printf("\n  (%d,%d)", pos[i].rig, pos[i].col);
        i++;
    }while(i<R*C);

    return 0;
}

void cerca_primi(int mat[R][C], posizione pos[]){
    int i, j, k=0;

    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            do{
                printf("\ninserisci elemento [%d][%d]", i+1, j+1);
                scanf("%d", &mat[i][j]);
            }while(mat[i][j]<0);
            if(primo(mat, i, j)){
                pos[k].rig=i+1;
                pos[k].col=j+1;
                k++;
            }
        }
    }
}

int primo(int mat[R][C], int riga, int col){
    int i;

    for(i=2;i<=mat[riga][col]/2;i++){
        if(mat[riga][col]%i==0)
            return 0;
    }
    return 1;
}

