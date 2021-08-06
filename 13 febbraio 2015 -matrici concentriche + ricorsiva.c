/*Si scriva in C una funzione valoriDiCorniceUguali che
 * data una matrice quadrata M,
 * restituisce 1 se tutti i valori disposti sulla sua cornice più esterna
 * (costituita dalla prima e dall’ultima riga e dalla prima e dall’ultima colonna)
 * sono uguali tra loro, 0 altrimenti.
*/

#include <stdio.h>
#define N 100

int concentrica(int m[N][N], int n);
int main(){
    int m[N][N], i, j, n, a;

    printf("Quante righe e colonne deve avere la matrice?\n");
    scanf("%d", &n);

    printf("\nInserire i valori della matrice:\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("  %d  ", m[i][j]);
        }
    }
    a=concentrica(m, n);

    if(a)
        printf("\nLa matrice e' concentrica");
    else
        printf("\nLa matrice non e' concentrica");

    return 0;
}

int concentrica(int m[N][N], int n){
    int j;

    for(j=0;j<n;j++){
        if((m[0][j]!=m[0][0]) || (m[j][n-1]!=m[0][0]) ||
           (m[n-1][j]!=m[0][0]) || (m[j][0]!=m[0][0]))
           return 0;
    }
    return 1;
}

/* Esercizio 2
 * Si sviluppi in C una funzione ricorsiva corniciConcentriche che,
 * data una matrice quadrata M,
 * restituisca 1 se la matrice è costituita da cornici concentriche,
 * 0 altrimenti.

char corniciConcentriche(int size, int M[size][size]) {
    if (size < 2) return 1;
    if (valoriDiCorniceUguali(size, M)) {
        if (size == 2) return 1;
        // restringo la matrice e richiamo
        int smaller[size-2][size-2];
        for (int r = 0; r < size-2; r++)
            for (int c = 0; c < size-2; c++)
                smaller[r][c] = M[r+1][c+1];
        return corniciConcentriche(size-2, smaller);
    } else
        return 0;
}


/* Esercizio 3
 * Si scriva in C una funzione che,
 * data una matrice quadrata M,
 * verificato che M è costituita da matrici concentriche,
 * restituisce la trasposta di M
 * (andando a sovrascrivere M – non è possibile usare “matrici di appoggio”).

#include <stdio.h>
void trasposta_inPlace(int size, int M[size][size]) {
    if (!corniciConcentriche(size, M))
        printf("\nLa matrice non e' concentrica. Non verra' eseguita la trasposizione.\n");
    // Nel caso favorevole, la trasposta sarà sempre identica ad M stessa --> non faccio nulla
}
*/
