/* Data una stringa S1, si scriva una funzione in C che,
 * presa S1 restituisce
 *   1 se esiste una sua permutazione palindroma,
 *   0 altrimenti.
*/

#include <stdio.h>
#include <string.h>
#define N 100

int permut_palindroma(char s[N], int v[]);
int main(){
    char s[N];
    int lung, v[N]={0}, a;

    printf("Inserire la stringa: ");
    scanf("%s", s);

    a=permut_palindroma(s, v);

    if(a)
        printf("La stringa ha una permutazione palindroma");
    else
        printf("La stringa NON ha una permutazione palindroma");

    return 0;
}

int permut_palindroma(char s[N], int v[]){
    int lung, i, count=0;

    lung=strlen(s);

    for(i=0;i<lung;i++){
        v[s[i]-'a']++;
    }
    for(i=0;i<lung;i++){
        if(v[s[i]-'a']%2!=0)
            count++;
    }
    if(count>1)
        return 0;
    else
        return 1;
}
