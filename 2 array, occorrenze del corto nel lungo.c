/*Scrivere una funzione in C che, presi in ingresso due array di interi, e le
rispettive dimensioni, restituisca il numero di occorrenze della sequenza
più corta nella sequenza più lunga, ammettendo sovrapposizioni*/

#include <stdio.h>
#define N 100

int occorrenze(int v1[N], int v2[N], int l1, int l2);
int main(){
    int i, l1, l2, v1[N], v2[N], occ;

    printf("Quando deve essere lungo il primo vettore?  ");
    scanf("%d", &l1);

    printf("Quando deve essere lungo il secondo vettore?  ");
    scanf("%d", &l2);

    printf("\nInserire i valori del primo vettore: \n");
    for(i=0;i<l1;i++){
        scanf("%d", &v1[i]);
    }

    printf("\nInserire i valori del secondo vettore: \n");
    for(i=0;i<l2;i++){
        scanf("%d", &v2[i]);
    }

    occ=occorrenze(v1, v2, l1, l2);

    printf("Il numero di occorrenze del vettore piu' corto in quello piu' lungo e' %d", occ);

    return 0;
}

int occorrenze(int v1[], int v2[], int l1, int l2){
    int i, j, count=0, trovato=1, max=l1, min=l2;
    int* V=v1;
    int* v=v2;

    if(l2>l1){
        V=v2;
        v=v1;
        max=l2;
        min=l1;
    }

    for(i=0;i<=max-min;i++){
        trovato=1;
        for(j=0;j<min;j++){
            if(v[j]!=V[i+j])
                trovato=0;
        }
        if(trovato)
            count++;
    }
    return count;
}
