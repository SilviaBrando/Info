/* Si scriva una funzione ricorsiva in C che
 * dato una sequenza di interi tutti diversi,
 * restituisce la posizione (indice nell’array) del più grande numero trovato.
 * Il prototipo della funzione è: int foo (int *vettore, int posix)
*/


#include <stdio.h>
#define N 100

int foo (int *vettore, int posix);
int main(){
    int v[N], i, n, a;

    printf("Da quanti numeri e' composto il vettore?");
    scanf("%d", &n);

    printf("Inserire il vettore\n");
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    printf("Vettore: ");
    for(i=0;i<n;i++){
        printf("  %d  ", v[i]);
    }

    a=foo(v, n-1);

    printf("\nLa posizione del numero massimo del vettore e' %d", a);
    return 0;
}

int foo (int *vettore, int posix){

    if(posix==0)
        return posix;
    if(vettore[posix]>vettore[foo(vettore, posix-1)])
       return posix;
    else return foo(vettore, posix-1);
}
