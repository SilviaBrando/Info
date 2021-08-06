/* Si scriva in C una funzione ricorsiva che,
 * preso in ingresso un numero dispari, stampi a video
 * tutte le coppie di numeri che sommati lo compongono.
 * Potete passare alla funzione tutti i parametri che ritenete essere necessari.
 *
 * Esempio: Dato 5, Stampa: 1 + 4, 2 + 3, 3 + 2, 4 + 1
*/

#include <stdio.h>

void dispari(int n, int a);
int main(){
    int n;

    do{
        printf("Inserire il numero dispari: ");
        scanf("%d", &n);
    }while(n%2==0);

    dispari(n, 1);

    return 0;
}

void dispari(int n, int a){
    if(a==n) return;
        printf("   %d + %d   ", a, n-a);
    dispari(n, a+1);
}
