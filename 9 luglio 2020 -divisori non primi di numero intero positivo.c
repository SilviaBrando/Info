/*Si scriva una funzione in C che, dato un numero N intero positivo, restituisca al chiamante tutti i suoi divisori non primi*/


#include <stdio.h>
#define DIM 100

int Primo(int N);
int divisori(int N, int div[]);
int main(){
    int N, n, i, div[DIM];

    do{
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &N);
    }while(N<0);

    n=divisori(N, div);

    printf("I divisori non primi del numero inserito sono: ");
    for(i=0;i<n;i++){
        printf("%d  ", div[i]);
    }

    return 0;
}

int divisori(int N, int div[]){
    int i, j=0;
    for(i=4;i<N;i++){
        if(N%i==0 && Primo(i)==0){
            div[j]=i;
            j++;
        }
    }
    return j;
}

int Primo(int N){
    int i;
    for(i=2;i<N/2+1;i++){
        if(N%i==0)
            return 0;
    }
    return 1;
}
