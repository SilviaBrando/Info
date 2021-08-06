/*Si scriva in C una funzione che, dati due array di interi V1 e V2 (con V2<V1), verifica se
V2 è presente in V1 e se questa cosa è vera, restituisce l’indice della prima occorrenza di
V2 in V1.
Esempio:
Dati V1: 111212121 e V2: 121, restituisce 2*/

#include <stdio.h>
#define N 100

int occorrenza(int v1[], int v2[], int n1, int n2);
int isSovrapponibile(int v2[], int n2, int v1[]);
int main(){
    int v1[N], v2[N], n1, n2, i, a, b;

    do{
        printf("\nQuanto e' lungo il vettore v1?\n");
        scanf("%d", &n1);

        printf("\nQuanto e' lungo il vettore v2?\n");
        scanf("%d", &n2);
    }while(n1<n2);

    printf("\nInserire il vettore v1: \n");
    for(i=0;i<n1;i++){
        scanf("%d", &v1[i]);
    }

    printf("\nInserire il vettore v2: \n");
    for(i=0;i<n2;i++){
        scanf("%d", &v2[i]);
    }

    a=isSovrapponibile(v2, n2, v1);
    b=occorrenza(v1, v2, n1, n2);

    if(a==1){
        printf("v2 e' presente in v1");
        printf("\nL'indice della prima occorrenza di v2 in v1 e': %d", b);
    }else
        printf("v2 non e' presente in v1");


    return 0;
}

int occorrenza(int v1[], int v2[], int n1, int n2){
    int i, j;

    if(isSovrapponibile(v2, n2, v1)){
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if(v1[i]==v2[j])
                    return i;
            }
        }
    }
}

int isSovrapponibile(int v2[], int n2, int v1[]) {
    int i=1, j;
    for(j=0;j<n2;j++){
        if(v1[j]==v2[0]){
            if(v1[j+1]==v2[i])
            i++;
        }
        return 1;
    }
    return 0;
}


