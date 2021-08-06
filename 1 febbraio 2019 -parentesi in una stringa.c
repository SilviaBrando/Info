/*Si scriva in C una funzione che, data una stringa contenente solo parentesi tonde aperte o chiuse, dice se la stringa
rappresenta una sequenza ben formata. Ben formata implica che ad ogni parentesi aperta, ne corrisponde una chiusa,
e non esistono parentesi chiuse prima di averle aperte e/o non rimangono parentesi aperte
Esempio 1:
S: ()(()))())(   -Risposta: La stringa NON è ben formata
Esempio 2:
S:((()()(())))   -Risposta: La stringa è ben formata*/

#include <stdio.h>
#include <string.h>
#define N 100

int benformata(char s[N]);
int main(){
    char s[N];
    int a;

    printf("Inserire la stringa composta solo da parentesi tonde: ");
    scanf("%s", s);

    if(benformata(s))
        printf("La stringa e' ben formata");
    else
        printf("La stringa NON e' ben formata");

    return 0;
}

int benformata(char s[N]){
    int i, lung, occ1=0, occ2=0;

    lung=strlen(s);
    for(i=0;i<lung;i++){
        if(s[i]=='(')
            occ1++;
        else if(s[i]==')')
            occ2++;
        if (occ2>occ1)
            return 0;
    }

    if(occ1==occ2)
        return 1;

    return 0;
}

