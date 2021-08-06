/*Si scriva in C la funzione che, date due stringhe S1 ed S2, trova e restituisce(decidete voi come) la sottostringa
comune piu’ piccola. Se esistono piu’ sottostringhe comuni diverse ma di uguali dimensioni, le restituisca tutte */

#include <stdio.h>
#include <string.h>
#define N 100

void trova(char s1[], char s2[], char s3[]);

int main(){
    char s1[N], s2[N], s3[N]={0};
    int i, j, lung1, lung2, k;

    printf("Inserire la prima stringa: ");
    scanf("%s", s1);
    lung1=strlen(s1);

    printf("Inserire la seconda stringa: ");
    scanf("%s", s2);
    lung2=strlen(s2);

    trova(s1, s2, s3);

    return 0;
}

void trova(char s1[], char s2[], char s3[]){
    int i, j, k=0, lung1, lung2, lung3, max, min, tmp, temp;

    lung1=strlen(s1);
    lung2=strlen(s2);

    lung1=strlen(s1);
    lung2=strlen(s2);
    max=lung1;
    min=lung2;
    if(lung1<lung2){
        temp=max;
        max=min;
        min=temp;
        strcpy(tmp, s2);
        strcpy(s2, s1);
        strcpy(s1, tmp);
        }


    for(i=0; i<lung1; i++){
        for(j=0; j<lung2; j++){
            if(s1[i]==s2[j] && k<lung2){
                s3[k]=s2[j];
                k++;
            }
        }
    }
    printf("\nLa sottostringa piu' piccola in comune e'");
    for(i=0; i<k; i++)
        printf("\n%c", s3[i]);
}
