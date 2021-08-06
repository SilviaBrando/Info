/*Scrivere un programma che acquisisca da tastiera un vettore di (max 100) valori di tipo intero e identifichi la
più lunga sequenza di numeri consecutivi uguali. Se vengono identificate più sequenze della stessa lunghezza, si consideri
solo la prima identificata. Il programma deve indicare il valore ripetuto e il numero di ripetizioni di quel valore.
Esempio:
Input: 19 3 15 15 7 9 9 9 9 12 3 3 3
Output: numero: 9, ripetizioni: 4*/

#include <stdio.h>
#define N 100
int main(){
    int n, i, v[N], count, maxcount, a;

    do{
        printf("Quanti valori vuoi inserire? ");
        scanf("%d", &n);
    }while(n>=N);

    printf("Inserisci i valori:\n");
    for(i=0;i<n;i++){
        printf("");
        scanf("%d", &v[i]);
    }

    count=1;
    maxcount=1;
    a=v[0];

    for(i=1;i<n;i++){
        if(v[i]==v[i-1]){
            count++;
            if(count>maxcount){
                maxcount=count;
                a=v[i];
            }
        }else
            count=1;
    }
    printf("Numero: %d\nRipetizioni: %d", a, maxcount);

    return 0;
}
