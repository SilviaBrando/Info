/* inserire un carattere compreso tra a e z, inserire un numero intero dispari --> cifrare*/

#include <stdio.h>
#define N 100

int main(){
    int n;
    char caratt, cifratura;

    printf("Inserire un carattere: ");
    scanf("%c", &caratt);
    if(!('a'<=caratt && caratt<='z'))
        printf("\nIL CARATTERE INSERITO NON E' CORRETTO!!");
    else{
        printf("Inserire il numero intero dispari: ");
        scanf("%d", &n);
        if(n%2==0)
            printf("\nIL NUMERO INSERITO NON E' CORRETTO!!");
        else{
            printf("\nCarattere e numero inseriti sono corretti, procediamo con la cifratura");
            cifratura = ((caratt - 'a') + (n%26) ) % 26 + 'a';
        }
    }
    printf("\nIl carattere inserito %c, spostato di %d, risulta %c", caratt, n, cifratura);

    return 0;
}
