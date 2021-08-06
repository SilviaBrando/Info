/*Scrivere un programma in C che
•sappia gestire una immagine quadrata con risoluzione 512x512
-l’immagine è a colori, ogni pixel è definito da un colore e una tonalità
-i colori ammissibili sono: Viola, Arancione, Verde, Blu, Rosso, Giallo
-ogni colore può avere 1024 diverse tonalità
•abbia una funzione colori che, ricevuto in ingresso l’immagine (e basta?)
restituisce al chiamante, tramite una sola invocazione della funzione
colori, il numero di pixel di ciascuna gradazione, per ogni colore*/

#include <stdio.h>
#include <string.h>
#define DIM 512

typedef enum{Viola, Arancione, Verde, Blu, Rosso, Giallo}Col;

typedef struct{
    int tonalita;
    Col colore;
}Pixel;

void colori(Pixel immagine[DIM][DIM], int occ[6][1024]);
void inizializza(Pixel immagine[DIM][DIM]);
int main(){
    Pixel imm[DIM][DIM];
    int i, j;
    char nomi_col[6][10]={"Viola", "Arancione", "Verde", "Blu", "Rosso", "Giallo"};

    inizializza(imm);

    int occ[6][1024]={0};

    colori(imm,occ);

    for(i=Viola;i<=Giallo;i++){
        printf("%s: \n", nomi_col[i]);
        for(j=0;j<1024;j++){
            if(occ[i][j]){
                printf("\n%d occorrenze di tonalita' %d\n", occ[i][j],j);
            }
        }
        printf("\n");
    }
    return 0;
}

void inizializza(Pixel immagine[DIM][DIM]){
    int i, j;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            immagine[i][j].colore=(i+j)%6;
            immagine[i][j].tonalita=0;
        }
    }
}

void colori(Pixel immagine[DIM][DIM], int occ[6][1024]){
    int i, j, ii, jj;
    Pixel tmp;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            tmp=immagine[i][j];
            ii=tmp.colore;
            jj=tmp.tonalita;
            occ[ii][jj]++;
        }
    }
}

