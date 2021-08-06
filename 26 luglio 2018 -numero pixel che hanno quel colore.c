/* Si scriva la dichiarazione di un’immagine img, come matrice di 800x600 colori.
 I colori ammissibili sono Rosso, Giallo, Verde, Blu, Bianco e Nero.
 Si scriva quindi in C una funzione colori che ricevuto in ingresso img (e basta?),
 restituisce alla funzione chiamante, tramite una sola invocazione della funzione colori,
 per ciascun colore, il numero dei pixel che hanno quello specifico colore.*/


#include <stdio.h>

typedef enum{rosso, giallo, verde, blu, bianco, nero} colore;

typedef struct{
    colore colori;
}immagine;

void colori(immagine img[800][600], int occ[]){
    int i, j;

    for(i=0;i<800;i++){
        for(j=0;j<600;j++){
            occ[img[i][j].colori]++;
        }
    }
}
