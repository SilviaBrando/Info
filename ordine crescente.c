#include <stdio.h>
#define dim 100

void  ordine_crescente( int a[dim], int size);

int main(){
    int a[dim],i,size;

    printf("Quanti numeri vuoi inserire nel vettore?\n");
    scanf("%d",&size);

    for(i=0; i<size; i++){
        printf("Inserisci il numero in posizione %d: ", i+1);
        scanf("%d",&a[i]);
    }

    ordine_crescente(a, size);

    for(i=0; i<size; i++){
        printf("%d ",a[i]);
    }

    return 0;
}

void ordine_crescente( int a[],int size){
    int i, j, tmp;
    for(i=0; i<size-1; i++){
        for(j=i+1; j<size; j++){
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}
