/*ES3
Dato un array di caratteri in cui i caratteri ammissibili sono solo quelli che rappresentano i numeri da 0 a 9.
Si scriva una funzione in C che, preso in ingresso un array di questi array, restituisce il valore numerico equivalente.
Esempio
Dato ‘3’ ‘5’ ‘4’, restituisce l’intero 354
I numeri restituiti dalla funzione richiesta possono essere negativi? Giustificare la risposta*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 100

int numero(char s[], int lung);
int main(){
    char s[N];
    int lung, num;

    printf("Inserisci l'array di caratteri:\n");
    scanf("%s", s);

    lung=strlen(s);

    num=numero(s, lung);
    printf("%d", num);

    return 0;
}

int numero(char s[], int lung){
    int a=0, i;
    for(i=0;i<lung;i++){
        a+=(s[i] - '0') * pow(10,lung-1-i);
    }
    return a;
}
