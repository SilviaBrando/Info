#include <stdio.h>
#include <string.h>
#define N 100

int main(){
    int i, l1, l2, count=0, j=0;
    char s1[N], s2[N];

    do{
        printf("Inserire una stringa: ");
        scanf("%s", s1);
        l1=strlen(s1);

        printf("Inserire una sottostringa: ");
        scanf("%s", s2);
        l2=strlen(s2);
    }while(l2>l1);

    for(i=0;i<l1 && count<l2;i++){
        if(s1[i]==s2[j]){
            count++;
            j++;
        }
    }

    if(count==l2)
        printf("\n%s e' sottostringa di %s", s2, s1);
    else
        printf("\n%s non e' sottostringa di %s", s2, s1);

    return 0;
}
