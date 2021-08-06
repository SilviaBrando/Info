#include <stdio.h>
#define N 100

int main(){
    int a, v[N], lung, i, trovato=0;

    printf("Quanto e' lungo il vettore?: ");
    scanf("%d", &lung);

    printf("Inserire il vettore: \n");
    for(i=0;i<lung;i++){
        scanf(" %d", &v[i]);
    }

    printf("Inserire un valore da cercare: ");
    scanf("%d", &a);

    for(i=0;i<lung;i++){
        if(v[i]==a)
            trovato=1;
    }

    if(trovato==1)
        printf("Il valore %d e' stato trovato", a);
    else
        printf("Il valore %d non e' stato trovato", a);

    return 0;
}
