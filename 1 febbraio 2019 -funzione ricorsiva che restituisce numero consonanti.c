/*Si scriva in C una funzione ricorsiva che, data in ingresso una stringa, restituisce al chiamante
il numero delle consonanti presenti nella stringa. La funzione può usare la funzione vocale che,
dato un carattere, restituisce:
- 1 se il carattere è una vocale,
- 0 altrimenti.
Il prototipo della funzione vocale è il seguente: int vocale(char carattere);  */

#include <stdio.h>
#include <string.h>
#define N 100

int numero_consonanti(char s[N], int count);
int vocale(char carattere);
int main(){
    char s[N];
    int a, count=0;

    printf("Inserire la stringa: ");
    scanf("%s", s);

    a=numero_consonanti(s, count);

    printf("\nLa stringa contiene %d consonanti\n", a);

    return 0;
}

int numero_consonanti(char s[N], int count){

    if(s[0]=='\0')
        return count;
    if(!vocale(s[0]))
        count++;

    s++;
    return numero_consonanti(s, count);
}


int vocale(char carattere){
    if (carattere == 'a')
        return 1;
    else if(carattere == 'e')
        return 1;

    else if(carattere == 'i')
        return 1;

    else if(carattere == 'o')
        return 1;

    else if(carattere == 'u')
        return 1;

    else
        return 0;
}
