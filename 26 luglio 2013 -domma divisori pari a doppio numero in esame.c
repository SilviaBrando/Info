/*si scriva in C una funzione foo che dato un numero N dica se questo numero e’
un numero Santa.
Un numero si dice Santa se la somma dei suoi divisori e’ pari al doppio del
numero in esame.*/

#include <stdio.h>
#define DIM 100

int numsanta(int N, int v[]);
int main(){
    int N, v[DIM];

    printf("Inserire un numero: ");
    scanf("%d", &N);

    if(numsanta(N, v))
        printf("\nIl numero inserito e' un numero di Santa");
    else
        printf("\nIl numero inserito NON e' un numero di Santa");

    return 0;
}

int numsanta(int N, int v[]){
    int i, k=0, somma=0;

    for(i=1;i<=N;i++){
        if(N%i==0){
            v[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++){
        somma+=v[i];
    }
    if(somma==2*N)
        return 1;
    else
        return 0;
}

