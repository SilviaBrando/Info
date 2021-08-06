/*Ogni numero pari maggiore di 2 può essere scritto come somma di due numeri primi (che possono essere anche uguali).
Si scriva una funzione in C che, dato un numero pari, stampa a video i due numeri primi che sommati lo compongono.
Esempio:
4 = 2 + 2
10 = 3 + 7 = 5 + 5
14 = 3 + 11 = 7 + 7 */

#include <stdio.h>

int numero(int N);
int Primo(int N);
int main(){
    int a, b, c;

    do{
        printf("Inserisci un numero pari: ");
        scanf("%d", &a);
    }while(a%2!=0);

    b=numero(a);
    c=Primo(a);

    return 0;
}

int numero(int N){
    int i, n1, n2;
    for(i=1;i<N/2;i++){
        if(Primo(i) && Primo(N-i)){
            n1=i;
            n2=N-i;
        }
    }
    printf("I due numeri primi sono: %d %d ", n1, n2);

}

int Primo(int N){
    int i;
    for(i=2;i<N/2+1;i++){
        if(N%i==0)
            return 0;
    }
    return 1;
}
