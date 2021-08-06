/*Scrivere un programma che chieda quanti valori verranno introdotti dalla tastiera (max
100), li chieda tutti e li collochi in un vettore.
Successivamente, il programma deve determinare il massimo, il minimo, la somma e la media di questi valori
*/

#include <stdio.h>
#define N 100
int main(){
    int n, i, v[N], a, max, min;
    float media, somma;

    do{
        printf("Quanti valori vuoi introdurre? ");
        scanf("%d", &n);
    }while(n>=N);

    printf("Inserire i valori:\n");
    for(i=0;i<n;i++){
        printf("");
        scanf("%d", &v[i]);
    }

    max=0;
    for(i=0;i<n;i++){
        somma+=v[i];
        if(v[i]>max)
            max=v[i];
    }

    min=max;
    for(i=0;i<n;i++){
        if(v[i]<min)
            min=v[i];
    }

    printf("\nSomma: %f", somma);
    media=somma/n;
    printf("\nMedia: %f", media);
    printf("\nMassimo: %d", max);
    printf("\nMinimo: %d", min);

return 0;
}
