/*Si scriva un programma che per 10 volte chieda all’utente un valore intero, ne conti il numero di cifre e visualizzi
il risultato. Dopo ogni input deve essere visualizzato il risultato. Per il calcolo del numero di cifre si scriva
una funzione con prototipo: int contacifre(int n);
*/

#include <stdio.h>

int contacifre(int n);
int main(){
    int i, n;

    for(i=0;i<10;i++){
        printf("\nInserire un numero intero: \n");
        scanf("%d", &n);
        printf("\nIl numero %d ha %d cifre\n", n, contacifre(n));
    }

    return 0;
}

int contacifre(int n){
    int count=0;

    do{
        count++;
        n/=10;
    }while(n != 0);

    return count;
}
