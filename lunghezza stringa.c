/*Scrivere un programma che chieda in input una stringa e calcoli da quanti caratteri è composta
(senza usare la funzione strlen ma cercando il carattere '\0')*/

#include <stdio.h>
#define N 20
int main(){
    int i=0, count=0;
    char s[N];

    printf("Inserire la stringa: ");
    scanf("%s", s);

    do{
        count++;
        i++;
    }while(s[i]!='\0');

    printf("La stringa e' composta da %d caratteri", count);

    return 0;
}

