#include <stdio.h>
#include <string.h>
#define N 100

int main(){
    int lung, i, j=0, count=0;
    char s[N], caratt;

    printf("Inserire la stringa: \n");
    scanf("%s", s);

    printf("\nInserire un carattere: \n");
    scanf(" %c", &caratt);

    lung=strlen(s);

    for(i=0;i<lung;i++){
        do{
            if(s[i+count]==caratt)
                count++;
        }while(s[i+count]==caratt);
        s[j]=s[i+count];
        j++;
    }
    printf("\nLa stringa finale e': %s ", s);

    return 0;
}
