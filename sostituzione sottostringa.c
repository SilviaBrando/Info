/*Si scriva un programma in linguaggio C che riceva in ingresso due parole inserite da tastiera.
Si consideri che ciascuna parola può contenere al massimo 30 caratteri. Il programma
deve sostituire ogni occorrenza della seconda parola nella prima parola con una sequenza di caratteri ’*’.
Ad esempio, inserite le parole abchdfffchdtlchd e chd, il programma deve visualizare la parola ab***fff***tl***.*/

#include <stdio.h>
#include <string.h>
#define N 30

int main(){
    int i, j, k, lng1, lng2, max, temp, min, count=0;
    char sl[N], sc[N], tmp[N];

    printf("Inserire la prima stringa: ");
    scanf("%s", sl);

    printf("Inserire la seconda stringa: ");
    scanf("%s", sc);

    lng1=strlen(sl);
    lng2=strlen(sc);
    max=lng1;
    min=lng2;
    if(lng1<lng2){
        temp=max;
        max=min;
        min=temp;
        strcpy(tmp, sc);
        strcpy(sc, sl);
        strcpy(sl, tmp);
        }

    for(i=0;i<max-min+1;i++){
        for(j=0;j<min;j++){
            if(sl[i+j]==sc[j])
                count++;
                }
            if(count==min){
                for(k=i;k<i+min;k++){
                sl[k]='*';
            }
        }
        count=0;
    }

    printf("\n%s", sl);

    return 0;
}
