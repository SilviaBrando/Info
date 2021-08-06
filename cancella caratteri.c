#include<stdio.h>
#include<string.h>
#define DIM 100

int main(){
int i=0, lunghezza, j=0;
char s1[DIM], s2[DIM];
char c;

printf("\nInserire parola: ");
scanf("%s", &s1);
lunghezza = strlen(s1);
printf("\n\nInserire carattere da eliminare: ");
scanf(" %c", &c);

while(i <= lunghezza){
    if(s1[i] != c)
        s2[j] = s1[i];
    else{
        j--;
    }
    i++;
    j++;
}

printf("\n\n%s", s2);
printf("\n");
return 0;
}
