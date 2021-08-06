/*Scrivere un programma che definisca una matrice di valori interi e di dimensioni
richieste di volta in volta dall’utente (massimo 10x10) mediante input quali “quante righe?” e
“quante colonne?”. Successivamente di tutti questi valori determini il massimo, il minimo, la somma e la media (frazionaria)*/

#include <stdio.h>
#define N 10

int main(){
    int A[N][N], i, j, n, max, min;
    float somma, media;

    do{
        printf("Quante righe?");
        scanf("%d", &n);
        printf("Quante colonne?");
        scanf("%d", &n);
    }while(n>=N);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("  %d  ", A[i][j]);
        }
    }


    max=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            somma+=A[i][j];
            if(A[i][j]>max)
                max=A[i][j];
        }
    }

    min=max;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j]<min)
                min=A[i][j];
        }
    }
    media=somma/(2*n);
    printf("\nIl numero massimo inserito e' %d", max);
    printf("\nIl numero minimo inserito e' %d", min);
    printf("\nLa somma dei numeri inseriti e' %f", somma);
    printf("\nLa media dei numeri inseriti e' %f", media);

    return 0;

}
