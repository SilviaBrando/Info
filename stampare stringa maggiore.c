/*Scrivere un programma che date due stringhe in input stampi la maggiore*/

#include <stdio.h>
#define N 20
int main(){
    int i=0, lung1, lung2, count=0, max, diversi;
    char s1[N]={'\0'}, s2[N]={'\0'};

    printf("Inserire le due parole da confrontare: \n");
    scanf("%s", s1);
    scanf("%s", s2);

    do{
        count++;
        i++;
    }while(s1[i]!='\0');
    lung1=count;

    i=0;
    count=0;
    do{
        i++;
        count++;
    }while(s2[i]!='\0');
    lung2=count;

    if(lung1<=lung2)
        max=lung2;
    else
        max=lung1;

    diversi=0;
    do{
        if(s1[i]!=s2[i]){
            diversi=1;
            if(s1[i]>s2[i])
                printf("\nLa parola maggiore e' %s", s1);
            else
                printf("\nLa parola maggiore e' %s", s2);
        }
        i++;
    }while(i<max && diversi==0);

    if(diversi==0)
        printf("Le due parole sono uguali");
    return 0;
}
