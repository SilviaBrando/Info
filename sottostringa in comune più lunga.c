/*Date due stringhe, trovare la sottostringa in comune più grande*/


#include <stdio.h>
#include <string.h>
#define N 100

int main(){
    char s1[N], s2[N], s3[N]={0}, tmp[N], s[N]={0};
    int i, lung1, lung2, max, j=0, min, temp, k;

    printf("Inserire la stringa 1: ");
    scanf("%s", s1);
    lung1=strlen(s1);

    printf("Inserire la stringa2: ");
    scanf("%s", s2);
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

    for(i=0;i<max;i++){
        k=0;
        for(j=0;j<min;j++){
            k=0;
            if(s1[i]==s2[j]){
                do{
                    s3[k]=s2[j+k];
                    k++;
                }while(s1[i+k]==s2[j+k]);
                if(strlen(s3)>strlen(s))
                    strcpy(s, s3);
            }
        }
    }

    printf("La sottostringa piu' grande comune e': %s", s);

    return 0;
}
