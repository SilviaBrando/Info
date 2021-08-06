/*Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memorizza
in un vettore. Il numero N viene inserito dall’utente ed è minore di 20. Il programma
deve generare un secondo vettore che compatta i numeri contenuti nel primo vettore. In
particolare:
- ogni numero che compare ripetuto nel primo vettore, deve comparire una sola volta
nel secondo vettore
- ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo
vettore.*/


#include <stdio.h>
#define dim 100

int compatta_vettore(int a[], int compatto[], int size);

int main(){
int a[dim], compatto[dim]={0};
int i, nc, size;

printf("Quanto vuoi che sia lungo il vettore a?\n");
scanf("%d",&size);

for(i=0; i<size; i++){
    printf("Inserisci l'elemento in posizione %d del vettore a\n", i+1);
    scanf("%d",&a[i]);
}
nc = compatta_vettore(a, compatto, size);

printf("Il vettore compattato e':\n");

for(i=0; i<nc; i++){
    printf("%d ",compatto[i]);
}
return 0;
}


int compatta_vettore(int a[], int compatto[], int size){
int i, j, nc=0, trovato;
for(i=0; i<size; i++){
        if(a[i]!=0){
    trovato=0;
    }
    for(j=0; j<nc; j++){
        if(compatto[j]==a[i] || a[i]==0){
            trovato=1;
        }
    }
    if(trovato==0){
        compatto[nc]=a[i];
        nc++;
    }
}
return nc;
}
