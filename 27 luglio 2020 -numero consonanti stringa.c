/*Scrivere una funzione C che presa in ingresso una stringa di caratteri minuscoli (si suppone che la stringa sia corretta
e coerente con la specifica), restituisce al chiamante, il numero delle consonanti presenti nella stringa*/

#include <stdio.h>
#include <string.h>
#define N 100

int num_cons(char s[]);
int main(){
    int num;
    char s[N];

    printf("Inserisci una stringa: ");
    scanf("%s", s);

    num=num_cons(s);

    printf("Il numero di consonanti della stringa e': %d", num);

    return 0;
}

int num_cons(char s[]){
    int i, lung, count=0;

    lung=strlen(s);

    for(i=0;i<lung;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
            count++;
    }
    return count;
}
