/*Si scriva in C una funzione che ricevuta in ingresso una stringa di caratteri minuscoli (si suppone che la stringa
sia corretta e coerente con la specifica),restituisce al chiamante, attraverso una sola invocazione della funzione, le
occorrenze delle vocali presenti nella stringa.*/

#include <stdio.h>
#include <string.h>
#define N 100

int main(){
    int lung, occ[5]={0};
    char s[N];

    printf("Inserire una stringa: ");
    scanf("%s", s);

    lung=strlen(s);

    occorrenze(s, occ);

    printf("\na compare %d volte\n", occ[0]);
    printf("\ne compare %d volte\n", occ[1]);
    printf("\ni compare %d volte\n", occ[2]);
    printf("\no compare %d volte\n", occ[3]);
    printf("\nu compare %d volte\n", occ[4]);

    return 0;
}

void occorrenze(char s[N], int occorrenze[5]){
    int i;

    for(i=0;i<N;i++){
        if(s[i]=='a')
            occorrenze[0]++;
        else if(s[i]=='e')
            occorrenze[1]++;
        else if(s[i]=='i')
            occorrenze[2]++;
        else if(s[i]=='o')
            occorrenze[3]++;
        else if(s[i]=='u')
            occorrenze[4]++;
    }
}
