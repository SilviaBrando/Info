/* Si scriva in C una funzione ricorsiva che,
 * dato in ingresso un valore intero positivo n,
 * se questo è un quadrato (e.g. 9, 16, 25),
 * restituisce al chiamante il valore della corrispettiva
 * radice (e.g. 3, 4, 5), altrimenti restituisce -1.
 * Non è possibile usare alcuna funzione esterna di libreria.
*/

int radice(int n, int test) {
    if (test <= 0) return -1;
    if (test * test == n) return test;
    else return radice(n, test - 1);
}



#include <stdio.h>
int main() {
    int n, rad;

    printf("Dimmi un numero: ");
    scanf("%d", &n);

    rad = radice(n, n);

    if (rad < 0) printf("\n%d non e' un quadrato.\n\n", n);
    else printf("\nRadice di %d = %d\n\n", n, rad);

    return 0;
}
