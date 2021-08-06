/*Data una immagine di 500x250 pixel, in cui ciascun pixel è codificato su una scala di
256 grigi, si scriva una funzione in C che, preso un video (una sequenza di 5 immagini)
in ingresso, restituisce al chiamante (aka NON stampa a video) le occorrenze di grigi
per ciascuna immagine.*/

#include <stdio.h>

typedef struct{
    char pixel[500][250];
}immagine;

typedef struct{
    immagine img[5];
}video;

int main(){
    video vid;
    immagine img[5];
    int occ[5][256]={{0}};
    int i, j, k;
    srand(time(NULL));


    for(i=0;i<5;i++){
        for(j=0;j<500;j++){
            for(k=0;k<250;k++){
                vid.img[i].pixel[j][k]=rand()%256;
            }
        }
    }

    conta(vid, occ);
    for(j=0;j<5;j++){
        printf("\nnell'immagine %d:", j);
        for(i=0;i<256;i++){
            printf("\nl'occorrenza del grigio %d e' %d", i, occ[j][i]);
        }
    }
    return 0;
}

void conta(video vid, int occ[][256]){
    int i, j, k;

    for(i=0;i<5;i++){
        for(j=0;j<500;j++){
            for(k=0;k<250;k++)
                occ[i][vid.img[i].pixel[j][k]]++;
        }
    }
}
