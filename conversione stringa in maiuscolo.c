/*Scrivere un programma che data una stringa in input, la converta tutta in maiuscolo*/

#include <stdio.h>
#include <string.h>
#define N 20

int main(){
    int i=0, lung;
    char s[N], s_maiuscola[N];

    printf("Inserire la stringa: ");
    scanf("%s", s);

    lung=strlen(s);

    if(('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z')){
        printf("La stringa convertita in maiuscolo e': ");
        for(i=0;i<lung;i++){
            if('a'<=s[i] && s[i]<='z')
                s_maiuscola[i]=s[i]-32;
            else if('A'<=s[i] && s[i]<='Z')
                s_maiuscola[i]=s[i];
        }
    }
    else
        printf("Stringa inserita in modo incorretto");

    printf("%s", s_maiuscola);

    return 0;

}
