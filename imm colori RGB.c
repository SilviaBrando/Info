
#include <stdio.h>

typedef struct{
    unsigned char R;
    unsigned char G;
    unsigned char B;
}Pixel;

void makeWhite(Pixel immagine[][256]);
void makeBlack(Pixel immagine[][256]);

int main(){
    Pixel imm[256][256];
    makeWhite(imm);
    makeBlack(imm);
    return 0;
}

void makeWhite(Pixel immagine[][256]){
    int i,j;
    for(i=0; i<256; i++)
        for(j=0; j<256; j++){
            immagine[i][j].R = 255;
            immagine[i][j].G = 255;
            immagine[i][j].B = 255;
        }
}

void makeBlack(Pixel immagine[][256]){
    int i,j;
    for(i=0; i<256; i++)
        for(j=0; j<256; j++){
            immagine[i][j].R = 0;
            immagine[i][j].G = 0;
            immagine[i][j].B = 0;
        }
}
