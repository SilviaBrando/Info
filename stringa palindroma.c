/*Scrivere un programma che verifichi se la stringa data in input è palindroma o no */

#include <stdio.h>
#include <string.h>
#define N 100

int main(){
    int i, j, lung, palindroma=0;
    char s[N];

    printf("Inserire la stringa: ");
    scanf("%s", s);

    lung=strlen(s);

    for(i=0;i<lung/2;i++){
        if(s[i]==s[lung-i-1])
            palindroma=1;
    }

    if(palindroma==1)
        printf("La stringa inserita e' palindroma");
    else
        printf("La stringa inserita non e' palindroma");

    return 0;
}
