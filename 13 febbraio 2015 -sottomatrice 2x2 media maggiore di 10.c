/* Scrivere un programma in linguaggio C che esegua le seguenti operazioni:
 *  • Acquisisca da tastiera due valori interi nRighe e nCol.
 *    I due valori devono essere:
 *      - pari,
 *      - maggiori di 0,
 *      - minori di N, dove N è una costante opportunamente definita con valore 100.
 *  • Acquisisca da tastiera nRighe x nCol valori interi,
 *    e li memorizzi in una matrice m, di dimensioni massime NxN,
 *    organizzandoli su un numero di righe pari a nRighe e un numero di colonne pari a nCol.
 *  • Considerando la matrice m come suddivisa in sottomatrici 2x2,
 *    calcoli e stampi a video il numero di sottomatrici 2x2
 *    con  media  maggiore  di  10.
*/

#include <stdio.h>
#define N 100

int main(){
    int nRighe, nCol, m[N][N], i, j, sr, sc, count=0;

    do{
        printf("Inserire il numero di righe: ");
        scanf("%d", &nRighe);
    }while(nRighe<0 || nRighe%2!=0 || nRighe>N);

    do{
        printf("Inserire il numero di colonne: ");
        scanf("%d", &nCol);
    }while(nCol<0 || nCol%2!=0 || nCol>N);

    printf("\nInserire i valori della matrice: \n");
    for(i=0;i<nRighe;i++){
        for(j=0;j<nCol;j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0;i<nRighe;i++){
        printf("\n");
        for(j=0;j<nCol;j++){
            printf("  %d  ", m[i][j]);
        }
    }

    for (i=0;i<((nRighe*nCol)/4);i++) {
        sr = 2 * (i / nCol); // riga del primo elemento della sottomatrice corrente
        sc = 2 * (i % nCol); // colonna del primo elemento della sottomatrice corrente
        if (((m[sr][sc] + m[sr+1][sc] + m[sr][sc+1] + m[sr+1][sc+1]) / 4) > 10)
            count++;
    }
    printf("\n%d sottomatrici hanno media maggiore di 10\n", count);

    return 0;
}
