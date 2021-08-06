#include <stdio.h>
#define dim 100

int foo (int a[dim], int size);
int MAX(int a[dim], int size);
void media_decrescente(int a[dim], int ordinato[dim], int size);
int main(){
    int a[dim], ordinato[dim]={0}, i, size;

    printf("Quanto e' lungo il vettore? ");
    scanf("%d", &size);


    for(i=0;i<size;i++){
            printf("Inserire il valore in posizione %d: \n", i+1);
        scanf(" %d", &a[i]);
    }

    media_decrescente(a, ordinato, size);

    printf("Il vettore ordinato in ordine decrescente e': ");
    for(i=0;i<size;i++){
        printf(" %d ", ordinato[i]);
    }

    return 0;
}

void media_decrescente(int a[dim], int ordinato[dim], int size){
    int i,max , nc=0, posix;


            for(i=0; i<size; i++){
            max= MAX(a, size);
            ordinato[nc] = max ;
            nc++;
            posix = foo(a, size);
            a[posix]=0;

    }
}



int MAX(int a[dim], int size){
    int i, max=0;
    for(i=0; i<size; i++){
        if (a[i]>max)
            max=a[i];
    }
    return max;
}

int foo (int a[dim], int size){
    int max=0, i, posix=0;
    for(i=0; i<size; i++){
        if (a[i]>max){
            max = a[i];
            posix = i;
        }
    }
    return posix;
}
