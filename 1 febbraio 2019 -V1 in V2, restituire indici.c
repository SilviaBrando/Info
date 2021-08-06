/*Si scriva in C una funzione che, date due array di interi V1 e V2, verifica se V2 è presente in
V1 e se si, restituisce gli indici (le posizioni iniziali in V1) delle occorrenze di V2 in V1.
Nota, si ammettono anche sovrapposizioni parziali*/

#include <stdio.h>
#define N 100

int indici(int v1[N], int v2[N], int lung1, int lung2, int ind[N]);
int main(){
    int v1[N], v2[N], lung1, lung2, a, i, ind[N];

    do{
        printf("Lunghezza vettore 1: ");
        scanf("%d", &lung1);

        printf("Lunghezza vettore 2: ");
        scanf("%d", &lung2);
    }while(lung2>lung1);

    printf("\nInserire i numeri del vettore 1: \n");
    for(i=0;i<lung1;i++){
        scanf("%d", &v1[i]);
    }

    printf("\nInserire i numeri del vettore 2: \n");
    for(i=0;i<lung2;i++){
        scanf("%d", &v2[i]);
    }

    a=indici(v1, v2, lung1, lung2, ind);

    printf("\n");
    for(i=0;i<a;i++){
        printf("%d ", ind[i]);
    }

    return 0;
}

int indici(int v1[N], int v2[N], int lung1, int lung2, int ind[N]){
    int i, j, k=0;

    for(i=0;i<lung1;i++){
        for(j=0;j<lung2;j++){
            if(v1[i]==v2[j]){
                ind[k]=i;
                k++;
            }
        }
    }
    return k;
}
