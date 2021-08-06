/* Una matrice è BERSANI se è:
 *  - quadrata,
 *  - di un numero di righe dispari,
 *  - tale che gli elementi sulla diagonale sono in ordine crescente
 *      (i.e. a(i,j) < a(i+1,j+1)).
 *
 * Si scriva una funzione che, recuperata in ingresso una matrice,
 * restituisce 1 se BERSANI, 0 altrimenti.
*/

#include <stdio.h>
#define N 100
#define M 100

int bersani(int A[N][M], int n, int m);
int main(){
    int A[N][M], n, m, i, j, a;

    printf("\nQuante righe vuoi?  ");
    scanf("%d", &n);

    printf("\nQuante colonne vuoi?  ");
    scanf("%d", &m);

    printf("Inserire i valori: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++){
            printf("  %d  ", A[i][j]);
        }
    }

    a=bersani(A, n, m);

    if(a==1)
        printf("\nLa matrice inserita e' Bersani\n");
    else
        printf("\nLa matrice inserita NON e' Bersani\n");

    return 0;
}

int bersani(int A[N][M], int n, int m){
    int i, j;

    if(n!=m)
        return 0;
    if(n%2==0)
        return 0;

    for(i=0;i<n;i++){
        if(A[i][i]<A[i-1][j-1])
            return 0;
    }
    return 1;
}
