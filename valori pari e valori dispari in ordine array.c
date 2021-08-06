/*Scrivere un programma che chieda quanti valori verranno introdotti dalla tastiera (max 100), li chieda tutti
e successivamente visualizzi prima tutti i valori pari nell’ordine in cui sono stati inseriti e poi tutti i valori dispari
nell’ordine inverso. Esempio: dati i valori: 8 1 3 2 8 6 5, il programma visualizza: 8 2 8 6 5 3 1
*/

#include <stdio.h>
#define N 100
int main(){
    int n, i, v[N];

    do{
        printf("Quanti valori vuoi inserire?");
        scanf("%d", &n);
    }while(n>=N);

    printf("Inserisci i numeri:\n");
    for(i=0;i<n;i++){
        printf("");
        scanf("%d", &v[i]);
    }

    for(i=0;i<n;i++){
        if(v[i]%2==0)
            printf("%d", v[i]);
    }

    for(i=0;i<n;i++){
        if(v[i]%2==1)
            printf("%d", v[i]);
    }

    return 0;
}
