/*Si realizzi in C una funzione che, date due stringhe, verifica se una è una permutazione dell’altra*/

#include <stdio.h>
#include <string.h>
#define N 100

int permutazione(char s1[N], char s2[N], int lung1);
int main(){
    char s1[N], s2[N];
    int lung1, lung2, controllo=0;
    printf("Inserire la prima stringa: ");
    scanf("%s", s1);

    printf("Inserisci la seconda stringa: ");
    scanf("%s", s2);

    lung1=strlen(s1);
    lung2=strlen(s2);

    controllo=permutazione(s1, s2, lung1);

    if(lung1 != lung2)
        controllo=0;

    if(controllo==0)
        printf("Le due stringhe non sono una la permutazione dell'altra");
    else
        printf("Le due stringhe sono una la permutazione dell'altra");

    return 0;
}

int permutazione(char s1[N], char s2[N], int lung1){
    int i, occorrenze[26]={0}, perm=1;

    for(i=0;i<lung1;i++)
        occorrenze[s1[i]-'a']++;

    for(i=0;i<lung1;i++)
        occorrenze[s2[i]-'a']--;

    for(i=0;i<26;i++){
        if(occorrenze[i]!=0)
            return perm=0;
    }
    return perm;
}
