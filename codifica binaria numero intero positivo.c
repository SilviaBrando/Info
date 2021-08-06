/*Si scriva un programma in C che, preso in ingresso un numero intero
positivo, utilizzi una funzione per stampare a video la codifica binaria del
numero inserito.*/

#include <stdio.h>
#define N 100

int binario(int n, int v[]);
int main(){
    int i, n, v[N], a;

    do{
    printf("Inserire un numero intero positivo: ");
    scanf("%d", &n);
    }while(n<0);

    a=binario(n, v);

    printf("La codifica binaria di %d e' ", n);
    for(i=a-1;i>=0;i--)
        printf(" %d ", v[i]);

    return 0;
}

int binario(int n, int v[]){
    int i, bit;

    do{
        bit=n%2;
        v[i]=bit;
        n/=2;
        i++;
    }while(n>0);

    return i;
}
