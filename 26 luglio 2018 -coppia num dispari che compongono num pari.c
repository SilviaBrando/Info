/*Si scriva in C una funzione che, preso in ingresso un numero pari, stampi a video, se esistono,
tutte le coppie di numeri dispari che sommati lo compongono.
NOTA: i due numeri dispari possono essere anche uguali.
Esempio:
8 = 3 + 5
10 = 3 + 7, 5 + 5
12 = 5 + 7
14 = 3 + 11, 7 + 7
etc*/

#include <stdio.h>

int dispari(int n);
int main(){
    int n, i;

    do{
        printf("Inserire un numero pari: ");
        scanf("%d", &n);
    }while(dispari(n));

    for(i=1;i<n/2+1;i++){
        if(dispari(i) && dispari(n-i))
            printf("%d = %d + %d  \n", n, i, n-i);
    }

    return 0;
}

int dispari(int n){
    if(n%2!=0)
        return 1;
    return 0;
}
