/* Scrivere una funzione C che
 * prenda in ingresso un numero decimale X positivo e
 * un numero decimale K (tra 2 e 9, estremi compresi)
 * e stampi a video la rappresentazione di X in base K,
 * sapendo che il risultato potrà essere rappresentato su 4 cifre in base K.
 *
 * Si scriva anche un main che permetta di testare la funzione.
 *
 *      NOTA: X e K devono essere “testati/validati” nel main,
 *            PRIMA dell’invocazione della funzione.
*/


#include <stdio.h>
#include <math.h>
#define N 4

int main(){
    int x, k;

    do{
        printf("Inserire un numero positivo: ");
        scanf("%d", &x);
    }while(x<0);

    do{
        printf("Inserire un numero compreso tra 2 e 9: ");
        scanf("%d", &k);
    }while(k<2 || k>9);

    if (x > pow(k, N))
        printf("Attenzione: disponendo di sole %d cifre, la rappresentazione sara' incompleta.\n", N);

    foo(x, k);

   return 0;
}

void foo(int x, int k) {
    int i = 1;
    int v[N] = {0};

    printf("\n%d|10 = ", x);

    while ((x > 0) && (i <= N)) {
        v[N - i] = x % k;
        x = x / k;
        i++;
    }

    for (i = 0; i < N; i++)
        printf("%d", v[i]);

    printf("|%d\n\n", k);
}
