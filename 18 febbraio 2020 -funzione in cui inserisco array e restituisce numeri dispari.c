/*Si scriva in C una funzione denominata “trova_dispari” che, dato un array di interi
di dimensione N, restituisce al chiamante tutti i valori corrispondenti a numeri dispari.*/

#include <stdio.h>
#define N 100

int trova_dispari(int v[N], int n, int dispari[N]);

int main(){
    int v[N], dispari[N], n, i, a;

    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &n);

    printf("\nInserire i numeri per comporre il vettore: \n");
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    a=trova_dispari(v, n, dispari);

    printf("\nI numeri dispari del vettore sono: \n");

    for(i=0; i<a; i++){
        printf("%d ", dispari[i]);
    }

    return 0;
}

int trova_dispari(int v[N], int n, int dispari[N]){
    int i, j=0;

    for(i=0;i<n;i++){
        if(v[i]%2 != 0){
            dispari[j]=v[i];
            j++;
        }
    }
    return j;
}

