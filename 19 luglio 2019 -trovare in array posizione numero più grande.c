/*Si scriva una funzione in C che dato una sequenza di interi tutti diversi, restituisce la posizione nella sequenza
del più grande numero trovato. Il prototipo della funzione è: int foo (int *vettore, int posix)*/

#include <stdio.h>
#define N 100

int foo (int *vettore, int posix);
int main(){
    int v[N]={0}, i, n, posizione, posix=0;

    printf("Quanti interi vuoi inserire? ");
    scanf("%d", &n);

    printf("Inserire gli interi: \n");
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    posizione=foo(v, posix);
    printf("La posizione del numero piu' grande e': %d", posizione);

   return 0;
}

int foo (int *vettore, int posix){
    int max=0, i=0, count=0;

    do{
        count++;
        i++;
    }while(*(vettore+i)!=0);

    for(i=0;i<count;i++){
        if(*(vettore+i)>max){
            max=*(vettore+i);
            posix=i+1;
        }
    }

    return posix;
}
