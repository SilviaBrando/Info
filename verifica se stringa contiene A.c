/*Scrivere un programma che data una stringa in input verifichi se essa contiene almeno una ‘A’ tra i primi 10 caratteri.*/

#include <stdio.h>
#include <string.h>
#define N 20

int main(){
    int i, lung, presente;
    char s[N];

    lung=strlen(s);

    printf("Inserire una stringa: ");
    scanf("%s", s);

    presente=0;

    for(i=0;i<10;i++){
        if(s[i]=='A')
            presente=1;
    }

    if(presente==1)
        printf("La stringa contiene almeno una 'A' tra i primi 10 caratteri");
    else
        printf("La stringa non contiene almeno una 'A' tra i primi 10 caratteri");

    return 0;

}
