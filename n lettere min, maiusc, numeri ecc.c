/*Scrivere un programma che richieda in input una stringa e conti di quante lettere maiuscole, lettere minuscole,
cifre e altri caratteri è composta
Esempio “Ciao2004! C6?” deve dare: maiuscole:2, minuscole: 3, cifre: 5, altri: 3*/

#include <stdio.h>
#include <string.h>
#define N 100
int main(){
    int i, lung, count_minusc=0, count_maiusc=0, count_altro=0, count_cifre=0;
    char s[N];

    printf("Inserire la stringa: ");
    scanf("%s", s);

    lung=strlen(s);

    for(i=0;i<lung;i++){
        if('a'<=s[i] && s[i]<='z')
            count_minusc++;
        else if('A'<=s[i] && s[i]<='Z')
            count_maiusc++;
        else if('0'<=s[i] && s[i]<='9')
            count_cifre++;
        else
            count_altro++;
    }

    printf("Maiuscole: %d\nMinuscole: %d\nCifre: %d\nAltro: %d", count_maiusc, count_minusc, count_cifre, count_altro);

    return 0;
}
