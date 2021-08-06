/*Data una immagine di 1024x1024 pixel, in cui ciascun pixel è codificato su una scala di 256
grigi, si scriva una funzione in C che, preso un video (una sequenza di 11 immagini)
in ingresso, restituisce al chiamante (aka NON stampa a video) le occorrenze di grigi per ciascuna immagine*/

typedef struct{
    char pixel[1024][1024];
}immagine;

typedef struct{
    immagine img[11];
}video;

void conta(video vid, int occ[][256]){
    int i, j, k;

    for(i=0;i<11;i++){
        for(j=0;j<1024;j++){
            for(k=0;k<1024;k++)
                occ[i][vid.img[i].pixel[j][k]]++;
        }
    }
}
