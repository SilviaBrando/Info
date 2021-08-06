/*Scrivere un programma che chieda quanti valori verranno introdotti dalla tastiera (max
100), li chieda tutti e successivamente li visualizzi dall’ultimo al primo
*/

#include <stdio.h>
#define N 100
int main(){
    int n, i, v[N];

    do{
        printf("Quanti numeri vuoi inserire? ");
        scanf("%d", &n);
    }while(n>=N);

    printf("Inserire i valori:\n");
    for(i=0;i<n;i++){
        printf(" ");
        scanf("%d", &v[i]);
    }

    printf("I valori visualizzati dall'ultimo al primo sono: ");
    for(i=n-1;i>=0;i--){
        printf("\n%d", v[i]);
    }

    return 0;
}
